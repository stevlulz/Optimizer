# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hussein/Dev/compil/project/Optimizer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hussein/Dev/compil/project/Optimizer

# Include any dependencies generated for this target.
include CMakeFiles/optimizer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/optimizer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/optimizer.dir/flags.make

CMakeFiles/optimizer.dir/src/main.c.o: CMakeFiles/optimizer.dir/flags.make
CMakeFiles/optimizer.dir/src/main.c.o: src/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hussein/Dev/compil/project/Optimizer/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/optimizer.dir/src/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/optimizer.dir/src/main.c.o   -c /home/hussein/Dev/compil/project/Optimizer/src/main.c

CMakeFiles/optimizer.dir/src/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/optimizer.dir/src/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/hussein/Dev/compil/project/Optimizer/src/main.c > CMakeFiles/optimizer.dir/src/main.c.i

CMakeFiles/optimizer.dir/src/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/optimizer.dir/src/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/hussein/Dev/compil/project/Optimizer/src/main.c -o CMakeFiles/optimizer.dir/src/main.c.s

CMakeFiles/optimizer.dir/src/symbol.c.o: CMakeFiles/optimizer.dir/flags.make
CMakeFiles/optimizer.dir/src/symbol.c.o: src/symbol.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hussein/Dev/compil/project/Optimizer/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/optimizer.dir/src/symbol.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/optimizer.dir/src/symbol.c.o   -c /home/hussein/Dev/compil/project/Optimizer/src/symbol.c

CMakeFiles/optimizer.dir/src/symbol.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/optimizer.dir/src/symbol.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/hussein/Dev/compil/project/Optimizer/src/symbol.c > CMakeFiles/optimizer.dir/src/symbol.c.i

CMakeFiles/optimizer.dir/src/symbol.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/optimizer.dir/src/symbol.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/hussein/Dev/compil/project/Optimizer/src/symbol.c -o CMakeFiles/optimizer.dir/src/symbol.c.s

CMakeFiles/optimizer.dir/src/lex.yy.c.o: CMakeFiles/optimizer.dir/flags.make
CMakeFiles/optimizer.dir/src/lex.yy.c.o: src/lex.yy.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hussein/Dev/compil/project/Optimizer/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/optimizer.dir/src/lex.yy.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/optimizer.dir/src/lex.yy.c.o   -c /home/hussein/Dev/compil/project/Optimizer/src/lex.yy.c

CMakeFiles/optimizer.dir/src/lex.yy.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/optimizer.dir/src/lex.yy.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/hussein/Dev/compil/project/Optimizer/src/lex.yy.c > CMakeFiles/optimizer.dir/src/lex.yy.c.i

CMakeFiles/optimizer.dir/src/lex.yy.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/optimizer.dir/src/lex.yy.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/hussein/Dev/compil/project/Optimizer/src/lex.yy.c -o CMakeFiles/optimizer.dir/src/lex.yy.c.s

CMakeFiles/optimizer.dir/src/y.tab.c.o: CMakeFiles/optimizer.dir/flags.make
CMakeFiles/optimizer.dir/src/y.tab.c.o: src/y.tab.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hussein/Dev/compil/project/Optimizer/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/optimizer.dir/src/y.tab.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/optimizer.dir/src/y.tab.c.o   -c /home/hussein/Dev/compil/project/Optimizer/src/y.tab.c

CMakeFiles/optimizer.dir/src/y.tab.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/optimizer.dir/src/y.tab.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/hussein/Dev/compil/project/Optimizer/src/y.tab.c > CMakeFiles/optimizer.dir/src/y.tab.c.i

CMakeFiles/optimizer.dir/src/y.tab.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/optimizer.dir/src/y.tab.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/hussein/Dev/compil/project/Optimizer/src/y.tab.c -o CMakeFiles/optimizer.dir/src/y.tab.c.s

# Object files for target optimizer
optimizer_OBJECTS = \
"CMakeFiles/optimizer.dir/src/main.c.o" \
"CMakeFiles/optimizer.dir/src/symbol.c.o" \
"CMakeFiles/optimizer.dir/src/lex.yy.c.o" \
"CMakeFiles/optimizer.dir/src/y.tab.c.o"

# External object files for target optimizer
optimizer_EXTERNAL_OBJECTS =

optimizer: CMakeFiles/optimizer.dir/src/main.c.o
optimizer: CMakeFiles/optimizer.dir/src/symbol.c.o
optimizer: CMakeFiles/optimizer.dir/src/lex.yy.c.o
optimizer: CMakeFiles/optimizer.dir/src/y.tab.c.o
optimizer: CMakeFiles/optimizer.dir/build.make
optimizer: CMakeFiles/optimizer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hussein/Dev/compil/project/Optimizer/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable optimizer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/optimizer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/optimizer.dir/build: optimizer

.PHONY : CMakeFiles/optimizer.dir/build

CMakeFiles/optimizer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/optimizer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/optimizer.dir/clean

CMakeFiles/optimizer.dir/depend:
	cd /home/hussein/Dev/compil/project/Optimizer && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hussein/Dev/compil/project/Optimizer /home/hussein/Dev/compil/project/Optimizer /home/hussein/Dev/compil/project/Optimizer /home/hussein/Dev/compil/project/Optimizer /home/hussein/Dev/compil/project/Optimizer/CMakeFiles/optimizer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/optimizer.dir/depend

