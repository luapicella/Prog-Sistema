# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /snap/clion/151/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/151/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/luigi/Scrivania/Politecnico/ProgragSistema/API/lab/lab2bis

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/luigi/Scrivania/Politecnico/ProgragSistema/API/lab/lab2bis/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lab2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lab2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab2.dir/flags.make

CMakeFiles/lab2.dir/main.cpp.o: CMakeFiles/lab2.dir/flags.make
CMakeFiles/lab2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/luigi/Scrivania/Politecnico/ProgragSistema/API/lab/lab2bis/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab2.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab2.dir/main.cpp.o -c /home/luigi/Scrivania/Politecnico/ProgragSistema/API/lab/lab2bis/main.cpp

CMakeFiles/lab2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab2.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/luigi/Scrivania/Politecnico/ProgragSistema/API/lab/lab2bis/main.cpp > CMakeFiles/lab2.dir/main.cpp.i

CMakeFiles/lab2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab2.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/luigi/Scrivania/Politecnico/ProgragSistema/API/lab/lab2bis/main.cpp -o CMakeFiles/lab2.dir/main.cpp.s

CMakeFiles/lab2.dir/Directory.cpp.o: CMakeFiles/lab2.dir/flags.make
CMakeFiles/lab2.dir/Directory.cpp.o: ../Directory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/luigi/Scrivania/Politecnico/ProgragSistema/API/lab/lab2bis/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lab2.dir/Directory.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab2.dir/Directory.cpp.o -c /home/luigi/Scrivania/Politecnico/ProgragSistema/API/lab/lab2bis/Directory.cpp

CMakeFiles/lab2.dir/Directory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab2.dir/Directory.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/luigi/Scrivania/Politecnico/ProgragSistema/API/lab/lab2bis/Directory.cpp > CMakeFiles/lab2.dir/Directory.cpp.i

CMakeFiles/lab2.dir/Directory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab2.dir/Directory.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/luigi/Scrivania/Politecnico/ProgragSistema/API/lab/lab2bis/Directory.cpp -o CMakeFiles/lab2.dir/Directory.cpp.s

CMakeFiles/lab2.dir/DurationLogger.cpp.o: CMakeFiles/lab2.dir/flags.make
CMakeFiles/lab2.dir/DurationLogger.cpp.o: ../DurationLogger.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/luigi/Scrivania/Politecnico/ProgragSistema/API/lab/lab2bis/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/lab2.dir/DurationLogger.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab2.dir/DurationLogger.cpp.o -c /home/luigi/Scrivania/Politecnico/ProgragSistema/API/lab/lab2bis/DurationLogger.cpp

CMakeFiles/lab2.dir/DurationLogger.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab2.dir/DurationLogger.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/luigi/Scrivania/Politecnico/ProgragSistema/API/lab/lab2bis/DurationLogger.cpp > CMakeFiles/lab2.dir/DurationLogger.cpp.i

CMakeFiles/lab2.dir/DurationLogger.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab2.dir/DurationLogger.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/luigi/Scrivania/Politecnico/ProgragSistema/API/lab/lab2bis/DurationLogger.cpp -o CMakeFiles/lab2.dir/DurationLogger.cpp.s

CMakeFiles/lab2.dir/Base.cpp.o: CMakeFiles/lab2.dir/flags.make
CMakeFiles/lab2.dir/Base.cpp.o: ../Base.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/luigi/Scrivania/Politecnico/ProgragSistema/API/lab/lab2bis/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/lab2.dir/Base.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab2.dir/Base.cpp.o -c /home/luigi/Scrivania/Politecnico/ProgragSistema/API/lab/lab2bis/Base.cpp

CMakeFiles/lab2.dir/Base.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab2.dir/Base.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/luigi/Scrivania/Politecnico/ProgragSistema/API/lab/lab2bis/Base.cpp > CMakeFiles/lab2.dir/Base.cpp.i

CMakeFiles/lab2.dir/Base.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab2.dir/Base.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/luigi/Scrivania/Politecnico/ProgragSistema/API/lab/lab2bis/Base.cpp -o CMakeFiles/lab2.dir/Base.cpp.s

CMakeFiles/lab2.dir/File.cpp.o: CMakeFiles/lab2.dir/flags.make
CMakeFiles/lab2.dir/File.cpp.o: ../File.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/luigi/Scrivania/Politecnico/ProgragSistema/API/lab/lab2bis/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/lab2.dir/File.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab2.dir/File.cpp.o -c /home/luigi/Scrivania/Politecnico/ProgragSistema/API/lab/lab2bis/File.cpp

CMakeFiles/lab2.dir/File.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab2.dir/File.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/luigi/Scrivania/Politecnico/ProgragSistema/API/lab/lab2bis/File.cpp > CMakeFiles/lab2.dir/File.cpp.i

CMakeFiles/lab2.dir/File.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab2.dir/File.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/luigi/Scrivania/Politecnico/ProgragSistema/API/lab/lab2bis/File.cpp -o CMakeFiles/lab2.dir/File.cpp.s

# Object files for target lab2
lab2_OBJECTS = \
"CMakeFiles/lab2.dir/main.cpp.o" \
"CMakeFiles/lab2.dir/Directory.cpp.o" \
"CMakeFiles/lab2.dir/DurationLogger.cpp.o" \
"CMakeFiles/lab2.dir/Base.cpp.o" \
"CMakeFiles/lab2.dir/File.cpp.o"

# External object files for target lab2
lab2_EXTERNAL_OBJECTS =

lab2: CMakeFiles/lab2.dir/main.cpp.o
lab2: CMakeFiles/lab2.dir/Directory.cpp.o
lab2: CMakeFiles/lab2.dir/DurationLogger.cpp.o
lab2: CMakeFiles/lab2.dir/Base.cpp.o
lab2: CMakeFiles/lab2.dir/File.cpp.o
lab2: CMakeFiles/lab2.dir/build.make
lab2: CMakeFiles/lab2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/luigi/Scrivania/Politecnico/ProgragSistema/API/lab/lab2bis/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable lab2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lab2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab2.dir/build: lab2

.PHONY : CMakeFiles/lab2.dir/build

CMakeFiles/lab2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lab2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lab2.dir/clean

CMakeFiles/lab2.dir/depend:
	cd /home/luigi/Scrivania/Politecnico/ProgragSistema/API/lab/lab2bis/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/luigi/Scrivania/Politecnico/ProgragSistema/API/lab/lab2bis /home/luigi/Scrivania/Politecnico/ProgragSistema/API/lab/lab2bis /home/luigi/Scrivania/Politecnico/ProgragSistema/API/lab/lab2bis/cmake-build-debug /home/luigi/Scrivania/Politecnico/ProgragSistema/API/lab/lab2bis/cmake-build-debug /home/luigi/Scrivania/Politecnico/ProgragSistema/API/lab/lab2bis/cmake-build-debug/CMakeFiles/lab2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab2.dir/depend

