# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/serbanbantas/Documents/GitHub/Competitive-Programming/LeetCode/testcode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/serbanbantas/Documents/GitHub/Competitive-Programming/LeetCode/testcode/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/testcode.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/testcode.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/testcode.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/testcode.dir/flags.make

CMakeFiles/testcode.dir/main.cpp.o: CMakeFiles/testcode.dir/flags.make
CMakeFiles/testcode.dir/main.cpp.o: ../main.cpp
CMakeFiles/testcode.dir/main.cpp.o: CMakeFiles/testcode.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/serbanbantas/Documents/GitHub/Competitive-Programming/LeetCode/testcode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/testcode.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/testcode.dir/main.cpp.o -MF CMakeFiles/testcode.dir/main.cpp.o.d -o CMakeFiles/testcode.dir/main.cpp.o -c /Users/serbanbantas/Documents/GitHub/Competitive-Programming/LeetCode/testcode/main.cpp

CMakeFiles/testcode.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testcode.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/serbanbantas/Documents/GitHub/Competitive-Programming/LeetCode/testcode/main.cpp > CMakeFiles/testcode.dir/main.cpp.i

CMakeFiles/testcode.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testcode.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/serbanbantas/Documents/GitHub/Competitive-Programming/LeetCode/testcode/main.cpp -o CMakeFiles/testcode.dir/main.cpp.s

# Object files for target testcode
testcode_OBJECTS = \
"CMakeFiles/testcode.dir/main.cpp.o"

# External object files for target testcode
testcode_EXTERNAL_OBJECTS =

testcode: CMakeFiles/testcode.dir/main.cpp.o
testcode: CMakeFiles/testcode.dir/build.make
testcode: CMakeFiles/testcode.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/serbanbantas/Documents/GitHub/Competitive-Programming/LeetCode/testcode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable testcode"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testcode.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/testcode.dir/build: testcode
.PHONY : CMakeFiles/testcode.dir/build

CMakeFiles/testcode.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/testcode.dir/cmake_clean.cmake
.PHONY : CMakeFiles/testcode.dir/clean

CMakeFiles/testcode.dir/depend:
	cd /Users/serbanbantas/Documents/GitHub/Competitive-Programming/LeetCode/testcode/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/serbanbantas/Documents/GitHub/Competitive-Programming/LeetCode/testcode /Users/serbanbantas/Documents/GitHub/Competitive-Programming/LeetCode/testcode /Users/serbanbantas/Documents/GitHub/Competitive-Programming/LeetCode/testcode/cmake-build-debug /Users/serbanbantas/Documents/GitHub/Competitive-Programming/LeetCode/testcode/cmake-build-debug /Users/serbanbantas/Documents/GitHub/Competitive-Programming/LeetCode/testcode/cmake-build-debug/CMakeFiles/testcode.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/testcode.dir/depend

