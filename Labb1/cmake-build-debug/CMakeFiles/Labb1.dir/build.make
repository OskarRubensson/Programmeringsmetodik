# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\oskar\Documents\GitHub\Programmeringsmetodik\Labb1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\oskar\Documents\GitHub\Programmeringsmetodik\Labb1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Labb1.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Labb1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Labb1.dir/flags.make

CMakeFiles/Labb1.dir/main.cpp.obj: CMakeFiles/Labb1.dir/flags.make
CMakeFiles/Labb1.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\oskar\Documents\GitHub\Programmeringsmetodik\Labb1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Labb1.dir/main.cpp.obj"
	C:\cpp_debugger\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Labb1.dir\main.cpp.obj -c C:\Users\oskar\Documents\GitHub\Programmeringsmetodik\Labb1\main.cpp

CMakeFiles/Labb1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Labb1.dir/main.cpp.i"
	C:\cpp_debugger\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\oskar\Documents\GitHub\Programmeringsmetodik\Labb1\main.cpp > CMakeFiles\Labb1.dir\main.cpp.i

CMakeFiles/Labb1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Labb1.dir/main.cpp.s"
	C:\cpp_debugger\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\oskar\Documents\GitHub\Programmeringsmetodik\Labb1\main.cpp -o CMakeFiles\Labb1.dir\main.cpp.s

CMakeFiles/Labb1.dir/int_buffer.cpp.obj: CMakeFiles/Labb1.dir/flags.make
CMakeFiles/Labb1.dir/int_buffer.cpp.obj: ../int_buffer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\oskar\Documents\GitHub\Programmeringsmetodik\Labb1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Labb1.dir/int_buffer.cpp.obj"
	C:\cpp_debugger\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Labb1.dir\int_buffer.cpp.obj -c C:\Users\oskar\Documents\GitHub\Programmeringsmetodik\Labb1\int_buffer.cpp

CMakeFiles/Labb1.dir/int_buffer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Labb1.dir/int_buffer.cpp.i"
	C:\cpp_debugger\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\oskar\Documents\GitHub\Programmeringsmetodik\Labb1\int_buffer.cpp > CMakeFiles\Labb1.dir\int_buffer.cpp.i

CMakeFiles/Labb1.dir/int_buffer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Labb1.dir/int_buffer.cpp.s"
	C:\cpp_debugger\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\oskar\Documents\GitHub\Programmeringsmetodik\Labb1\int_buffer.cpp -o CMakeFiles\Labb1.dir\int_buffer.cpp.s

CMakeFiles/Labb1.dir/int_sorted.cpp.obj: CMakeFiles/Labb1.dir/flags.make
CMakeFiles/Labb1.dir/int_sorted.cpp.obj: ../int_sorted.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\oskar\Documents\GitHub\Programmeringsmetodik\Labb1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Labb1.dir/int_sorted.cpp.obj"
	C:\cpp_debugger\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Labb1.dir\int_sorted.cpp.obj -c C:\Users\oskar\Documents\GitHub\Programmeringsmetodik\Labb1\int_sorted.cpp

CMakeFiles/Labb1.dir/int_sorted.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Labb1.dir/int_sorted.cpp.i"
	C:\cpp_debugger\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\oskar\Documents\GitHub\Programmeringsmetodik\Labb1\int_sorted.cpp > CMakeFiles\Labb1.dir\int_sorted.cpp.i

CMakeFiles/Labb1.dir/int_sorted.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Labb1.dir/int_sorted.cpp.s"
	C:\cpp_debugger\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\oskar\Documents\GitHub\Programmeringsmetodik\Labb1\int_sorted.cpp -o CMakeFiles\Labb1.dir\int_sorted.cpp.s

# Object files for target Labb1
Labb1_OBJECTS = \
"CMakeFiles/Labb1.dir/main.cpp.obj" \
"CMakeFiles/Labb1.dir/int_buffer.cpp.obj" \
"CMakeFiles/Labb1.dir/int_sorted.cpp.obj"

# External object files for target Labb1
Labb1_EXTERNAL_OBJECTS =

Labb1.exe: CMakeFiles/Labb1.dir/main.cpp.obj
Labb1.exe: CMakeFiles/Labb1.dir/int_buffer.cpp.obj
Labb1.exe: CMakeFiles/Labb1.dir/int_sorted.cpp.obj
Labb1.exe: CMakeFiles/Labb1.dir/build.make
Labb1.exe: CMakeFiles/Labb1.dir/linklibs.rsp
Labb1.exe: CMakeFiles/Labb1.dir/objects1.rsp
Labb1.exe: CMakeFiles/Labb1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\oskar\Documents\GitHub\Programmeringsmetodik\Labb1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Labb1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Labb1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Labb1.dir/build: Labb1.exe
.PHONY : CMakeFiles/Labb1.dir/build

CMakeFiles/Labb1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Labb1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Labb1.dir/clean

CMakeFiles/Labb1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\oskar\Documents\GitHub\Programmeringsmetodik\Labb1 C:\Users\oskar\Documents\GitHub\Programmeringsmetodik\Labb1 C:\Users\oskar\Documents\GitHub\Programmeringsmetodik\Labb1\cmake-build-debug C:\Users\oskar\Documents\GitHub\Programmeringsmetodik\Labb1\cmake-build-debug C:\Users\oskar\Documents\GitHub\Programmeringsmetodik\Labb1\cmake-build-debug\CMakeFiles\Labb1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Labb1.dir/depend

