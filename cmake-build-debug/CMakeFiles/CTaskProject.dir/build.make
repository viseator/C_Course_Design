# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /home/viseator/clion-2017.2.1/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/viseator/clion-2017.2.1/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/viseator/study/CTaskProject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/viseator/study/CTaskProject/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CTaskProject.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CTaskProject.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CTaskProject.dir/flags.make

CMakeFiles/CTaskProject.dir/linkedlist.c.o: CMakeFiles/CTaskProject.dir/flags.make
CMakeFiles/CTaskProject.dir/linkedlist.c.o: ../linkedlist.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/viseator/study/CTaskProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/CTaskProject.dir/linkedlist.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/CTaskProject.dir/linkedlist.c.o   -c /home/viseator/study/CTaskProject/linkedlist.c

CMakeFiles/CTaskProject.dir/linkedlist.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CTaskProject.dir/linkedlist.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/viseator/study/CTaskProject/linkedlist.c > CMakeFiles/CTaskProject.dir/linkedlist.c.i

CMakeFiles/CTaskProject.dir/linkedlist.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CTaskProject.dir/linkedlist.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/viseator/study/CTaskProject/linkedlist.c -o CMakeFiles/CTaskProject.dir/linkedlist.c.s

CMakeFiles/CTaskProject.dir/linkedlist.c.o.requires:

.PHONY : CMakeFiles/CTaskProject.dir/linkedlist.c.o.requires

CMakeFiles/CTaskProject.dir/linkedlist.c.o.provides: CMakeFiles/CTaskProject.dir/linkedlist.c.o.requires
	$(MAKE) -f CMakeFiles/CTaskProject.dir/build.make CMakeFiles/CTaskProject.dir/linkedlist.c.o.provides.build
.PHONY : CMakeFiles/CTaskProject.dir/linkedlist.c.o.provides

CMakeFiles/CTaskProject.dir/linkedlist.c.o.provides.build: CMakeFiles/CTaskProject.dir/linkedlist.c.o


# Object files for target CTaskProject
CTaskProject_OBJECTS = \
"CMakeFiles/CTaskProject.dir/linkedlist.c.o"

# External object files for target CTaskProject
CTaskProject_EXTERNAL_OBJECTS =

CTaskProject: CMakeFiles/CTaskProject.dir/linkedlist.c.o
CTaskProject: CMakeFiles/CTaskProject.dir/build.make
CTaskProject: CMakeFiles/CTaskProject.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/viseator/study/CTaskProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable CTaskProject"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CTaskProject.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CTaskProject.dir/build: CTaskProject

.PHONY : CMakeFiles/CTaskProject.dir/build

CMakeFiles/CTaskProject.dir/requires: CMakeFiles/CTaskProject.dir/linkedlist.c.o.requires

.PHONY : CMakeFiles/CTaskProject.dir/requires

CMakeFiles/CTaskProject.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CTaskProject.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CTaskProject.dir/clean

CMakeFiles/CTaskProject.dir/depend:
	cd /home/viseator/study/CTaskProject/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/viseator/study/CTaskProject /home/viseator/study/CTaskProject /home/viseator/study/CTaskProject/cmake-build-debug /home/viseator/study/CTaskProject/cmake-build-debug /home/viseator/study/CTaskProject/cmake-build-debug/CMakeFiles/CTaskProject.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CTaskProject.dir/depend

