# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/lolwtfzamodfgo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/lolwtfzamodfgo

# Utility rule file for generate_sharedPCH.cpp.

# Include the progress variables for this target.
include src/server/shared/CMakeFiles/generate_sharedPCH.cpp.dir/progress.make

src/server/shared/CMakeFiles/generate_sharedPCH.cpp.dir/CMakeFiles/generate_sharedPCH.cpp.o: 
src/server/shared/CMakeFiles/generate_sharedPCH.cpp.dir/CMakeFiles/generate_sharedPCH.cpp.o: src/server/shared/CMakeFiles/generate_sharedPCH.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /root/lolwtfzamodfgo/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/server/shared/CMakeFiles/generate_sharedPCH.cpp.dir/CMakeFiles/generate_sharedPCH.cpp.o"
	cd /root/lolwtfzamodfgo/src/server/shared && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/generate_sharedPCH.cpp.dir/CMakeFiles/generate_sharedPCH.cpp.o -c /root/lolwtfzamodfgo/src/server/shared/CMakeFiles/generate_sharedPCH.cpp

src/server/shared/CMakeFiles/generate_sharedPCH.cpp.dir/CMakeFiles/generate_sharedPCH.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/generate_sharedPCH.cpp.dir/CMakeFiles/generate_sharedPCH.cpp.i"
	cd /root/lolwtfzamodfgo/src/server/shared && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /root/lolwtfzamodfgo/src/server/shared/CMakeFiles/generate_sharedPCH.cpp > CMakeFiles/generate_sharedPCH.cpp.dir/CMakeFiles/generate_sharedPCH.cpp.i

src/server/shared/CMakeFiles/generate_sharedPCH.cpp.dir/CMakeFiles/generate_sharedPCH.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/generate_sharedPCH.cpp.dir/CMakeFiles/generate_sharedPCH.cpp.s"
	cd /root/lolwtfzamodfgo/src/server/shared && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /root/lolwtfzamodfgo/src/server/shared/CMakeFiles/generate_sharedPCH.cpp -o CMakeFiles/generate_sharedPCH.cpp.dir/CMakeFiles/generate_sharedPCH.cpp.s

src/server/shared/CMakeFiles/generate_sharedPCH.cpp.dir/CMakeFiles/generate_sharedPCH.cpp.o.requires:
.PHONY : src/server/shared/CMakeFiles/generate_sharedPCH.cpp.dir/CMakeFiles/generate_sharedPCH.cpp.o.requires

src/server/shared/CMakeFiles/generate_sharedPCH.cpp.dir/CMakeFiles/generate_sharedPCH.cpp.o.provides: src/server/shared/CMakeFiles/generate_sharedPCH.cpp.dir/CMakeFiles/generate_sharedPCH.cpp.o.requires
	$(MAKE) -f src/server/shared/CMakeFiles/generate_sharedPCH.cpp.dir/build.make src/server/shared/CMakeFiles/generate_sharedPCH.cpp.dir/CMakeFiles/generate_sharedPCH.cpp.o.provides.build
.PHONY : src/server/shared/CMakeFiles/generate_sharedPCH.cpp.dir/CMakeFiles/generate_sharedPCH.cpp.o.provides

src/server/shared/CMakeFiles/generate_sharedPCH.cpp.dir/CMakeFiles/generate_sharedPCH.cpp.o.provides.build: src/server/shared/CMakeFiles/generate_sharedPCH.cpp.dir/CMakeFiles/generate_sharedPCH.cpp.o

src/server/shared/CMakeFiles/generate_sharedPCH.cpp: src/server/shared/sharedPCH.h.gch

src/server/shared/sharedPCH.h.gch: src/server/shared/PrecompiledHeaders/sharedPCH.h
src/server/shared/sharedPCH.h.gch: src/server/shared/libsharedPCH.cpp_dephelp.so
	$(CMAKE_COMMAND) -E cmake_progress_report /root/lolwtfzamodfgo/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating sharedPCH.h.gch"
	cd /root/lolwtfzamodfgo/src/server/shared && /usr/bin/c++ -DHAVE_SSE2 -D__SSE2__ -DSCRIPTS -O3 -DNDEBUG -W -Wall -Wextra -Winit-self -Winvalid-pch -Wfatal-errors -Woverloaded-virtual -I/usr/include -I/root/lolwtfzamodfgo/src/server/shared -I/root/lolwtfzamodfgo -I/root/lolwtfzamodfgo/dep/SFMT -I/root/lolwtfzamodfgo/dep/sockets/include -I/root/lolwtfzamodfgo/dep/utf8cpp -I/root/lolwtfzamodfgo/src/server -I/root/lolwtfzamodfgo/src/server/shared/Configuration -I/root/lolwtfzamodfgo/src/server/shared/Cryptography -I/root/lolwtfzamodfgo/src/server/shared/Database -I/root/lolwtfzamodfgo/src/server/shared/DataStores -I/root/lolwtfzamodfgo/src/server/shared/Debugging -I/root/lolwtfzamodfgo/src/server/shared/Dynamic -I/root/lolwtfzamodfgo/src/server/shared/Logging -I/root/lolwtfzamodfgo/src/server/shared/Packets -I/root/lolwtfzamodfgo/src/server/shared/Threading -I/root/lolwtfzamodfgo/src/server/shared/Utilities -I/root/lolwtfzamodfgo/src/server/game/Entities/Object -I/usr/include/mysql -x c++-header PrecompiledHeaders/sharedPCH.h -o /root/lolwtfzamodfgo/src/server/shared/sharedPCH.h.gch

generate_sharedPCH.cpp: src/server/shared/CMakeFiles/generate_sharedPCH.cpp
generate_sharedPCH.cpp: src/server/shared/sharedPCH.h.gch
generate_sharedPCH.cpp: src/server/shared/CMakeFiles/generate_sharedPCH.cpp.dir/build.make
.PHONY : generate_sharedPCH.cpp

# Rule to build all files generated by this target.
src/server/shared/CMakeFiles/generate_sharedPCH.cpp.dir/build: generate_sharedPCH.cpp
.PHONY : src/server/shared/CMakeFiles/generate_sharedPCH.cpp.dir/build

src/server/shared/CMakeFiles/generate_sharedPCH.cpp.dir/clean:
	cd /root/lolwtfzamodfgo/src/server/shared && $(CMAKE_COMMAND) -P CMakeFiles/generate_sharedPCH.cpp.dir/cmake_clean.cmake
.PHONY : src/server/shared/CMakeFiles/generate_sharedPCH.cpp.dir/clean

src/server/shared/CMakeFiles/generate_sharedPCH.cpp.dir/depend:
	cd /root/lolwtfzamodfgo && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/lolwtfzamodfgo /root/lolwtfzamodfgo/src/server/shared /root/lolwtfzamodfgo /root/lolwtfzamodfgo/src/server/shared /root/lolwtfzamodfgo/src/server/shared/CMakeFiles/generate_sharedPCH.cpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/server/shared/CMakeFiles/generate_sharedPCH.cpp.dir/depend
