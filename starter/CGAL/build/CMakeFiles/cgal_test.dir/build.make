# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ysy/FENGSim/starter/CGAL

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ysy/FENGSim/starter/CGAL/build

# Include any dependencies generated for this target.
include CMakeFiles/cgal_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/cgal_test.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/cgal_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cgal_test.dir/flags.make

CMakeFiles/cgal_test.dir/src/CGALInterface.C.o: CMakeFiles/cgal_test.dir/flags.make
CMakeFiles/cgal_test.dir/src/CGALInterface.C.o: /home/ysy/FENGSim/starter/CGAL/src/CGALInterface.C
CMakeFiles/cgal_test.dir/src/CGALInterface.C.o: CMakeFiles/cgal_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/ysy/FENGSim/starter/CGAL/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cgal_test.dir/src/CGALInterface.C.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cgal_test.dir/src/CGALInterface.C.o -MF CMakeFiles/cgal_test.dir/src/CGALInterface.C.o.d -o CMakeFiles/cgal_test.dir/src/CGALInterface.C.o -c /home/ysy/FENGSim/starter/CGAL/src/CGALInterface.C

CMakeFiles/cgal_test.dir/src/CGALInterface.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/cgal_test.dir/src/CGALInterface.C.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ysy/FENGSim/starter/CGAL/src/CGALInterface.C > CMakeFiles/cgal_test.dir/src/CGALInterface.C.i

CMakeFiles/cgal_test.dir/src/CGALInterface.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/cgal_test.dir/src/CGALInterface.C.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ysy/FENGSim/starter/CGAL/src/CGALInterface.C -o CMakeFiles/cgal_test.dir/src/CGALInterface.C.s

CMakeFiles/cgal_test.dir/src/Main.C.o: CMakeFiles/cgal_test.dir/flags.make
CMakeFiles/cgal_test.dir/src/Main.C.o: /home/ysy/FENGSim/starter/CGAL/src/Main.C
CMakeFiles/cgal_test.dir/src/Main.C.o: CMakeFiles/cgal_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/ysy/FENGSim/starter/CGAL/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/cgal_test.dir/src/Main.C.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cgal_test.dir/src/Main.C.o -MF CMakeFiles/cgal_test.dir/src/Main.C.o.d -o CMakeFiles/cgal_test.dir/src/Main.C.o -c /home/ysy/FENGSim/starter/CGAL/src/Main.C

CMakeFiles/cgal_test.dir/src/Main.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/cgal_test.dir/src/Main.C.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ysy/FENGSim/starter/CGAL/src/Main.C > CMakeFiles/cgal_test.dir/src/Main.C.i

CMakeFiles/cgal_test.dir/src/Main.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/cgal_test.dir/src/Main.C.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ysy/FENGSim/starter/CGAL/src/Main.C -o CMakeFiles/cgal_test.dir/src/Main.C.s

# Object files for target cgal_test
cgal_test_OBJECTS = \
"CMakeFiles/cgal_test.dir/src/CGALInterface.C.o" \
"CMakeFiles/cgal_test.dir/src/Main.C.o"

# External object files for target cgal_test
cgal_test_EXTERNAL_OBJECTS =

cgal_test: CMakeFiles/cgal_test.dir/src/CGALInterface.C.o
cgal_test: CMakeFiles/cgal_test.dir/src/Main.C.o
cgal_test: CMakeFiles/cgal_test.dir/build.make
cgal_test: /usr/lib/x86_64-linux-gnu/libgmp.so
cgal_test: /usr/lib/x86_64-linux-gnu/libmpfr.so
cgal_test: CMakeFiles/cgal_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/ysy/FENGSim/starter/CGAL/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable cgal_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cgal_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cgal_test.dir/build: cgal_test
.PHONY : CMakeFiles/cgal_test.dir/build

CMakeFiles/cgal_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cgal_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cgal_test.dir/clean

CMakeFiles/cgal_test.dir/depend:
	cd /home/ysy/FENGSim/starter/CGAL/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ysy/FENGSim/starter/CGAL /home/ysy/FENGSim/starter/CGAL /home/ysy/FENGSim/starter/CGAL/build /home/ysy/FENGSim/starter/CGAL/build /home/ysy/FENGSim/starter/CGAL/build/CMakeFiles/cgal_test.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/cgal_test.dir/depend

