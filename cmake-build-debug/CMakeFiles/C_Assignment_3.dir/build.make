# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_COMMAND = /opt/clion/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/impacs/sec26/Documents/Assignment_Final/C Assignment 3"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/impacs/sec26/Documents/Assignment_Final/C Assignment 3/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/C_Assignment_3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/C_Assignment_3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/C_Assignment_3.dir/flags.make

CMakeFiles/C_Assignment_3.dir/main.c.o: CMakeFiles/C_Assignment_3.dir/flags.make
CMakeFiles/C_Assignment_3.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/impacs/sec26/Documents/Assignment_Final/C Assignment 3/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/C_Assignment_3.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/C_Assignment_3.dir/main.c.o   -c "/impacs/sec26/Documents/Assignment_Final/C Assignment 3/main.c"

CMakeFiles/C_Assignment_3.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/C_Assignment_3.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/impacs/sec26/Documents/Assignment_Final/C Assignment 3/main.c" > CMakeFiles/C_Assignment_3.dir/main.c.i

CMakeFiles/C_Assignment_3.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/C_Assignment_3.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/impacs/sec26/Documents/Assignment_Final/C Assignment 3/main.c" -o CMakeFiles/C_Assignment_3.dir/main.c.s

CMakeFiles/C_Assignment_3.dir/functions.c.o: CMakeFiles/C_Assignment_3.dir/flags.make
CMakeFiles/C_Assignment_3.dir/functions.c.o: ../functions.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/impacs/sec26/Documents/Assignment_Final/C Assignment 3/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/C_Assignment_3.dir/functions.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/C_Assignment_3.dir/functions.c.o   -c "/impacs/sec26/Documents/Assignment_Final/C Assignment 3/functions.c"

CMakeFiles/C_Assignment_3.dir/functions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/C_Assignment_3.dir/functions.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/impacs/sec26/Documents/Assignment_Final/C Assignment 3/functions.c" > CMakeFiles/C_Assignment_3.dir/functions.c.i

CMakeFiles/C_Assignment_3.dir/functions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/C_Assignment_3.dir/functions.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/impacs/sec26/Documents/Assignment_Final/C Assignment 3/functions.c" -o CMakeFiles/C_Assignment_3.dir/functions.c.s

CMakeFiles/C_Assignment_3.dir/print.c.o: CMakeFiles/C_Assignment_3.dir/flags.make
CMakeFiles/C_Assignment_3.dir/print.c.o: ../print.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/impacs/sec26/Documents/Assignment_Final/C Assignment 3/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/C_Assignment_3.dir/print.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/C_Assignment_3.dir/print.c.o   -c "/impacs/sec26/Documents/Assignment_Final/C Assignment 3/print.c"

CMakeFiles/C_Assignment_3.dir/print.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/C_Assignment_3.dir/print.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/impacs/sec26/Documents/Assignment_Final/C Assignment 3/print.c" > CMakeFiles/C_Assignment_3.dir/print.c.i

CMakeFiles/C_Assignment_3.dir/print.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/C_Assignment_3.dir/print.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/impacs/sec26/Documents/Assignment_Final/C Assignment 3/print.c" -o CMakeFiles/C_Assignment_3.dir/print.c.s

CMakeFiles/C_Assignment_3.dir/traverse.c.o: CMakeFiles/C_Assignment_3.dir/flags.make
CMakeFiles/C_Assignment_3.dir/traverse.c.o: ../traverse.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/impacs/sec26/Documents/Assignment_Final/C Assignment 3/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/C_Assignment_3.dir/traverse.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/C_Assignment_3.dir/traverse.c.o   -c "/impacs/sec26/Documents/Assignment_Final/C Assignment 3/traverse.c"

CMakeFiles/C_Assignment_3.dir/traverse.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/C_Assignment_3.dir/traverse.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/impacs/sec26/Documents/Assignment_Final/C Assignment 3/traverse.c" > CMakeFiles/C_Assignment_3.dir/traverse.c.i

CMakeFiles/C_Assignment_3.dir/traverse.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/C_Assignment_3.dir/traverse.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/impacs/sec26/Documents/Assignment_Final/C Assignment 3/traverse.c" -o CMakeFiles/C_Assignment_3.dir/traverse.c.s

# Object files for target C_Assignment_3
C_Assignment_3_OBJECTS = \
"CMakeFiles/C_Assignment_3.dir/main.c.o" \
"CMakeFiles/C_Assignment_3.dir/functions.c.o" \
"CMakeFiles/C_Assignment_3.dir/print.c.o" \
"CMakeFiles/C_Assignment_3.dir/traverse.c.o"

# External object files for target C_Assignment_3
C_Assignment_3_EXTERNAL_OBJECTS =

C_Assignment_3: CMakeFiles/C_Assignment_3.dir/main.c.o
C_Assignment_3: CMakeFiles/C_Assignment_3.dir/functions.c.o
C_Assignment_3: CMakeFiles/C_Assignment_3.dir/print.c.o
C_Assignment_3: CMakeFiles/C_Assignment_3.dir/traverse.c.o
C_Assignment_3: CMakeFiles/C_Assignment_3.dir/build.make
C_Assignment_3: CMakeFiles/C_Assignment_3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/impacs/sec26/Documents/Assignment_Final/C Assignment 3/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable C_Assignment_3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/C_Assignment_3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/C_Assignment_3.dir/build: C_Assignment_3

.PHONY : CMakeFiles/C_Assignment_3.dir/build

CMakeFiles/C_Assignment_3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/C_Assignment_3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/C_Assignment_3.dir/clean

CMakeFiles/C_Assignment_3.dir/depend:
	cd "/impacs/sec26/Documents/Assignment_Final/C Assignment 3/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/impacs/sec26/Documents/Assignment_Final/C Assignment 3" "/impacs/sec26/Documents/Assignment_Final/C Assignment 3" "/impacs/sec26/Documents/Assignment_Final/C Assignment 3/cmake-build-debug" "/impacs/sec26/Documents/Assignment_Final/C Assignment 3/cmake-build-debug" "/impacs/sec26/Documents/Assignment_Final/C Assignment 3/cmake-build-debug/CMakeFiles/C_Assignment_3.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/C_Assignment_3.dir/depend

