Build & install instructions for Arasan on Linux or Mac:

Syzygy tablebase support is enabled by default.

However, the Syzygy probing code is now imported as a submodule from
jdart1/Fathom. So to obtain this code in your source tree, you
should issue the command:

git submodule update --init --recursive

in your repository directory.

Arasan now requires a modern compiler with C++11 features (although
not necessarily complete C++11 support). Gcc 4.9 or above is
recommended for building Arasan (on Mac OS, use clang).

There is a makefile in the src directory. In most cases, just typing
"make" should automatically select the correct target architecture and
OS (note: assumes target and host are the same). By default it builds
all executables. All binaries are placed in the "bin" subdirectory.

To select the Intel compiler instead of gcc, define the variable CC with
this command:

export CC=icc

"clang" is also supported (set CC=clang to use).

If you have a processor that supports the amd64 POPCNT hardware
instruction, you can build a version of Arasan that uses that by
typing "make popcnt" (works only on a 64-bit OS).

If you have a processor that supports the amd64 BMI2 hardware
instructions, you can build a version of Arasan that uses those,
along with popcnt, by typing "make bmi2" (works only on a 64-bit OS).

If you want to use PGO to build the arasan engine (arasanx), do:

make clean profiled

(use popcnt-profiled instead of profile as the target for a POPCNT
enabled PGO build, or bmi2-profiled for a BMI2 compatible profiled
build).

Defining NUMA in the Makefile will build a version that has support
for NUMA (Non-Uniform Memory Access) machines. NUMA support relies
on the hwloc library (version 2.0 or higher).

The Arasan engine binary is named "arasanx-32", "arasanx-64",
"arasanx-64-popcnt", or "arasanx-64-bmi2," depending on the
architecture and build flags used. "-numa" is added for a NUMA
build.

Limited testing has been done on other OSs and architectures other
than x32 and amd64.  However, the code is believed to be portable. Two
non-Intel targets are defined in the Makefile: sparc-solaris (with gcc
as compiler) and arm-linux.

"make utils" builds a set of utility programs including the "makebook"
program that is used to construct the opening book from PGN files.

"make release" will build the release tarball and place it in the
release subdirectory. This target uses a Python tool git-archive-all
(https://github.com/Kentzo/git-archive-all), which needs to be
installed and its path set in the Makefile (or passed to it) in the
variable GIT_ARCHIVE_ALL_PATH. And that tool calls "git archive" so
"make release" needs to be run from within a git repository.

"make install" will install Arasan binaries into /usr/local/bin/arasan-21.2.
(You will need to be root, or use sudo, to execute "make install"). 
