// Copyright 1997, 1998, 1999, 2012-2013, 2017-2018 by Jon Dart. All Rights Reserved.
#include "calctime.h"
#include "globals.h"

#include <algorithm>

static const int DEFAULT_MOVES_TO_TC = 28;
static const float PONDER_FACTOR = 1.4F;
static const int GAME_TIME_RESERVE = 75;

int calcTimeLimit(int moves, int incr, int time_left, bool ponder, int trace)
{
    int moves_in_game = gameMoves->num_moves()/2;  // full moves, not half-moves
    int moves_left;
    if (moves == 0) {
        moves_left = 0;
    } else {
        moves_left = moves-(moves_in_game % moves);
    }
    return calcTimeLimitUCI(moves_left,incr,time_left,ponder,trace);
}


// UCI version
int calcTimeLimitUCI(int movestogo, int incr,
                     int time_left, bool ponder, int trace)
{
    if (trace) cout << "# movestogo=" << movestogo << " time_left=" << time_left << endl;
    if (movestogo == 0) movestogo = DEFAULT_MOVES_TO_TC;
    time_left = std::max<int>(0, time_left - GAME_TIME_RESERVE);
    int time_target = (std::max<int>(0,movestogo-1)*incr + time_left)/movestogo - options.search.move_overhead;

    if (ponder && movestogo > 4) {
        time_target = (int)(PONDER_FACTOR*time_target);
    }

    // ensure we don't allocate more time than is left
    time_target = std::min<int>(time_left - options.search.move_overhead,time_target);

    // enforce minimum search time
    return std::max<int>(time_target,options.search.minimum_search_time);
}
