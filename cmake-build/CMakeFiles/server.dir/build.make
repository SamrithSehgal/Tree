# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/samrith/Downloads/Coding/UCI/cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/samrith/Downloads/Coding/UCI/cpp/cmake-build

# Include any dependencies generated for this target.
include CMakeFiles/server.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/server.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/server.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/server.dir/flags.make

CMakeFiles/server.dir/server.o: CMakeFiles/server.dir/flags.make
CMakeFiles/server.dir/server.o: ../server.cpp
CMakeFiles/server.dir/server.o: CMakeFiles/server.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/samrith/Downloads/Coding/UCI/cpp/cmake-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/server.dir/server.o"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/server.dir/server.o -MF CMakeFiles/server.dir/server.o.d -o CMakeFiles/server.dir/server.o -c /home/samrith/Downloads/Coding/UCI/cpp/server.cpp

CMakeFiles/server.dir/server.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/server.i"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/samrith/Downloads/Coding/UCI/cpp/server.cpp > CMakeFiles/server.dir/server.i

CMakeFiles/server.dir/server.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/server.s"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/samrith/Downloads/Coding/UCI/cpp/server.cpp -o CMakeFiles/server.dir/server.s

CMakeFiles/server.dir/attributeTable.o: CMakeFiles/server.dir/flags.make
CMakeFiles/server.dir/attributeTable.o: ../attributeTable.cpp
CMakeFiles/server.dir/attributeTable.o: CMakeFiles/server.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/samrith/Downloads/Coding/UCI/cpp/cmake-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/server.dir/attributeTable.o"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/server.dir/attributeTable.o -MF CMakeFiles/server.dir/attributeTable.o.d -o CMakeFiles/server.dir/attributeTable.o -c /home/samrith/Downloads/Coding/UCI/cpp/attributeTable.cpp

CMakeFiles/server.dir/attributeTable.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/attributeTable.i"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/samrith/Downloads/Coding/UCI/cpp/attributeTable.cpp > CMakeFiles/server.dir/attributeTable.i

CMakeFiles/server.dir/attributeTable.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/attributeTable.s"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/samrith/Downloads/Coding/UCI/cpp/attributeTable.cpp -o CMakeFiles/server.dir/attributeTable.s

CMakeFiles/server.dir/decode.o: CMakeFiles/server.dir/flags.make
CMakeFiles/server.dir/decode.o: ../decode.cpp
CMakeFiles/server.dir/decode.o: CMakeFiles/server.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/samrith/Downloads/Coding/UCI/cpp/cmake-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/server.dir/decode.o"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/server.dir/decode.o -MF CMakeFiles/server.dir/decode.o.d -o CMakeFiles/server.dir/decode.o -c /home/samrith/Downloads/Coding/UCI/cpp/decode.cpp

CMakeFiles/server.dir/decode.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/decode.i"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/samrith/Downloads/Coding/UCI/cpp/decode.cpp > CMakeFiles/server.dir/decode.i

CMakeFiles/server.dir/decode.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/decode.s"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/samrith/Downloads/Coding/UCI/cpp/decode.cpp -o CMakeFiles/server.dir/decode.s

CMakeFiles/server.dir/sensor.o: CMakeFiles/server.dir/flags.make
CMakeFiles/server.dir/sensor.o: ../sensor.cpp
CMakeFiles/server.dir/sensor.o: CMakeFiles/server.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/samrith/Downloads/Coding/UCI/cpp/cmake-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/server.dir/sensor.o"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/server.dir/sensor.o -MF CMakeFiles/server.dir/sensor.o.d -o CMakeFiles/server.dir/sensor.o -c /home/samrith/Downloads/Coding/UCI/cpp/sensor.cpp

CMakeFiles/server.dir/sensor.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/sensor.i"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/samrith/Downloads/Coding/UCI/cpp/sensor.cpp > CMakeFiles/server.dir/sensor.i

CMakeFiles/server.dir/sensor.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/sensor.s"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/samrith/Downloads/Coding/UCI/cpp/sensor.cpp -o CMakeFiles/server.dir/sensor.s

CMakeFiles/server.dir/tree.o: CMakeFiles/server.dir/flags.make
CMakeFiles/server.dir/tree.o: ../tree.cpp
CMakeFiles/server.dir/tree.o: CMakeFiles/server.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/samrith/Downloads/Coding/UCI/cpp/cmake-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/server.dir/tree.o"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/server.dir/tree.o -MF CMakeFiles/server.dir/tree.o.d -o CMakeFiles/server.dir/tree.o -c /home/samrith/Downloads/Coding/UCI/cpp/tree.cpp

CMakeFiles/server.dir/tree.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/tree.i"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/samrith/Downloads/Coding/UCI/cpp/tree.cpp > CMakeFiles/server.dir/tree.i

CMakeFiles/server.dir/tree.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/tree.s"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/samrith/Downloads/Coding/UCI/cpp/tree.cpp -o CMakeFiles/server.dir/tree.s

# Object files for target server
server_OBJECTS = \
"CMakeFiles/server.dir/server.o" \
"CMakeFiles/server.dir/attributeTable.o" \
"CMakeFiles/server.dir/decode.o" \
"CMakeFiles/server.dir/sensor.o" \
"CMakeFiles/server.dir/tree.o"

# External object files for target server
server_EXTERNAL_OBJECTS =

server: CMakeFiles/server.dir/server.o
server: CMakeFiles/server.dir/attributeTable.o
server: CMakeFiles/server.dir/decode.o
server: CMakeFiles/server.dir/sensor.o
server: CMakeFiles/server.dir/tree.o
server: CMakeFiles/server.dir/build.make
server: /usr/lib/x86_64-linux-gnu/libpq.so
server: /home/samrith/anaconda3/lib/libboost_system.so.1.73.0
server: /home/samrith/anaconda3/lib/libboost_serialization.so.1.73.0
server: CMakeFiles/server.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/samrith/Downloads/Coding/UCI/cpp/cmake-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable server"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/server.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/server.dir/build: server
.PHONY : CMakeFiles/server.dir/build

CMakeFiles/server.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/server.dir/cmake_clean.cmake
.PHONY : CMakeFiles/server.dir/clean

CMakeFiles/server.dir/depend:
	cd /home/samrith/Downloads/Coding/UCI/cpp/cmake-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/samrith/Downloads/Coding/UCI/cpp /home/samrith/Downloads/Coding/UCI/cpp /home/samrith/Downloads/Coding/UCI/cpp/cmake-build /home/samrith/Downloads/Coding/UCI/cpp/cmake-build /home/samrith/Downloads/Coding/UCI/cpp/cmake-build/CMakeFiles/server.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/server.dir/depend
