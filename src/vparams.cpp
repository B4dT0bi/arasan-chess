// Copyright 2015 by Jon Dart. All Rights Reserved.
//
// definitions of scoring parameters, non-const for tuning

// These have a 1-1 mapping to the tuning parameters
int Scoring::Params::RB_ADJUST[4] = {250, 75, -75, -250};
int Scoring::Params::RBN_ADJUST[4] = {500, 675, 825, 1000};
int Scoring::Params::QR_ADJUST[4] = {-500, 0, 500, 500};
int Scoring::Params::KN_VS_PAWN_ADJUST[3] = {0, -2400, -1500};
int Scoring::Params::CASTLING[6] = {0, -70, -100, 280, 200, -280};
int Scoring::Params::KING_COVER[5] = {138, 310, 250, 29, -37};
int Scoring::Params::KING_COVER_BASE = -293;
int Scoring::Params::KING_FILE_OPEN = -150;
int Scoring::Params::KING_DISTANCE_BASIS = 320;
int Scoring::Params::KING_DISTANCE_MULT = 80;
int Scoring::Params::PIN_MULTIPLIER_MID = 200;
int Scoring::Params::PIN_MULTIPLIER_END = 300;
int Scoring::Params::ROOK_VS_PAWNS = 333;
int Scoring::Params::KRMINOR_VS_R = -100;
int Scoring::Params::KRMINOR_VS_R_NO_PAWNS = -500;
int Scoring::Params::KQMINOR_VS_Q = -100;
int Scoring::Params::KQMINOR_VS_Q_NO_PAWNS = -500;
int Scoring::Params::MINOR_FOR_PAWNS = 250;
int Scoring::Params::ENDGAME_PAWN_ADVANTAGE = 100;
int Scoring::Params::PAWN_ENDGAME1 = 200;
int Scoring::Params::PAWN_ENDGAME2 = 300;
int Scoring::Params::MINOR_ATTACK_FACTOR = 320;
int Scoring::Params::ROOK_ATTACK_FACTOR = 448;
int Scoring::Params::QUEEN_ATTACK_FACTOR = 640;
int Scoring::Params::ROOK_ATTACK_BOOST = 128;
int Scoring::Params::QUEEN_ATTACK_BOOST = 192;
int Scoring::Params::QUEEN_ATTACK_BOOST2 = 192;
int Scoring::Params::KING_ATTACK_PARAM0 = -100;
int Scoring::Params::KING_ATTACK_PARAM1 = 400;
int Scoring::Params::KING_ATTACK_PARAM2 = 1280;
int Scoring::Params::KING_ATTACK_PARAM3 = 500;
int Scoring::Params::KING_ATTACK_BOOST_THRESHOLD = -524;
int Scoring::Params::KING_ATTACK_BOOST_DIVISOR = 500;
int Scoring::Params::KING_ATTACK_BOOST_MAX = 128;
int Scoring::Params::PAWN_THREAT_ON_PIECE_MID = -50;
int Scoring::Params::PAWN_THREAT_ON_PIECE_END = -50;
int Scoring::Params::PIECE_THREAT_MM_MID = -50;
int Scoring::Params::PIECE_THREAT_MR_MID = -50;
int Scoring::Params::PIECE_THREAT_MQ_MID = -50;
int Scoring::Params::PIECE_THREAT_MM_END = -50;
int Scoring::Params::PIECE_THREAT_MR_END = -50;
int Scoring::Params::PIECE_THREAT_MQ_END = -50;
int Scoring::Params::ENDGAME_MINOR_PAWN_THREAT = -50;
int Scoring::Params::PIECE_THREAT_RM_MID = -50;
int Scoring::Params::PIECE_THREAT_RR_MID = -50;
int Scoring::Params::PIECE_THREAT_RQ_MID = -50;
int Scoring::Params::PIECE_THREAT_RM_END = -50;
int Scoring::Params::PIECE_THREAT_RR_END = -50;
int Scoring::Params::PIECE_THREAT_RQ_END = -50;
int Scoring::Params::ENDGAME_ROOK_PAWN_THREAT = -50;
int Scoring::Params::ENDGAME_KING_THREAT = -50;
int Scoring::Params::BISHOP_TRAPPED = -1470;
int Scoring::Params::BISHOP_PAIR_MID = 420;
int Scoring::Params::BISHOP_PAIR_END = 550;
int Scoring::Params::BISHOP_PAWN_PLACEMENT_END = -160;
int Scoring::Params::BAD_BISHOP_MID = -40;
int Scoring::Params::BAD_BISHOP_END = -60;
int Scoring::Params::OUTPOST_NOT_DEFENDED = 42;
int Scoring::Params::CENTER_PAWN_BLOCK = -120;
int Scoring::Params::OUTSIDE_PASSER_MID = 120;
int Scoring::Params::OUTSIDE_PASSER_END = 250;
int Scoring::Params::WEAK_PAWN_MID = -80;
int Scoring::Params::WEAK_PAWN_END = -80;
int Scoring::Params::WEAK_ON_OPEN_FILE_MID = -100;
int Scoring::Params::WEAK_ON_OPEN_FILE_END = -100;
int Scoring::Params::SPACE = 20;
int Scoring::Params::PAWN_CENTER_SCORE_MID = 30;
int Scoring::Params::ROOK_ON_7TH_MID = 260;
int Scoring::Params::ROOK_ON_7TH_END = 260;
int Scoring::Params::TWO_ROOKS_ON_7TH_MID = 570;
int Scoring::Params::TWO_ROOKS_ON_7TH_END = 660;
int Scoring::Params::ROOK_ON_OPEN_FILE_MID = 200;
int Scoring::Params::ROOK_ON_OPEN_FILE_END = 200;
int Scoring::Params::ROOK_ATTACKS_WEAK_PAWN_MID = 100;
int Scoring::Params::ROOK_ATTACKS_WEAK_PAWN_END = 100;
int Scoring::Params::ROOK_BEHIND_PP_MID = 50;
int Scoring::Params::ROOK_BEHIND_PP_END = 100;
int Scoring::Params::QUEEN_OUT = -60;
int Scoring::Params::PAWN_SIDE_BONUS = 306;
int Scoring::Params::KING_OWN_PAWN_DISTANCE = 50;
int Scoring::Params::KING_OPP_PAWN_DISTANCE = 20;
int Scoring::Params::SUPPORTED_PASSER6 = 401;
int Scoring::Params::SUPPORTED_PASSER7 = 708;
int Scoring::Params::SIDE_PROTECTED_PAWN = -92;
int Scoring::Params::KING_OPP_PASSER_DISTANCE[6] = {10,20,30,40,50,60};
int Scoring::Params::KNIGHT_PST[2][64];
int Scoring::Params::BISHOP_PST[2][64];
int Scoring::Params::ROOK_PST[2][64];
int Scoring::Params::QUEEN_PST[2][64];
int Scoring::Params::KING_PST[2][64];

// The following tables are computed from tuning parameters.
int Scoring::Params::KING_POSITION_LOW_MATERIAL[3];
int Scoring::Params::KING_ATTACK_SCALE[512];
int Scoring::Params::TRADE_DOWN[16];
int Scoring::Params::PASSED_PAWN[2][8];
int Scoring::Params::POTENTIAL_PASSER[2][8];
int Scoring::Params::CONNECTED_PASSER[2][8];
int Scoring::Params::ADJACENT_PASSER[2][8];
int Scoring::Params::PP_OWN_PIECE_BLOCK[2][21];
int Scoring::Params::PP_OPP_PIECE_BLOCK[2][21];
int Scoring::Params::DOUBLED_PAWNS[2][8];
int Scoring::Params::TRIPLED_PAWNS[2][8];
int Scoring::Params::ISOLATED_PAWN[2][8];
int Scoring::Params::KNIGHT_OUTPOST[3][64];
int Scoring::Params::BISHOP_OUTPOST[3][64];
int Scoring::Params::KNIGHT_MOBILITY[9];
int Scoring::Params::BISHOP_MOBILITY[15];
int Scoring::Params::ROOK_MOBILITY[2][15];
int Scoring::Params::QUEEN_MOBILITY[2][29];
int Scoring::Params::KING_MOBILITY_ENDGAME[5];

