# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_SOURCE_DIR = /home/fredrb/workspace/pxsym/wrapper/includeos

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/fredrb/workspace/pxsym/wrapper/includeos/build

# Include any dependencies generated for this target.
include CMakeFiles/service.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/service.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/service.dir/flags.make

CMakeFiles/service.dir/home/fredrb/workspace/pxsym/out/wordexp.h/evaluation.cpp.o: CMakeFiles/service.dir/flags.make
CMakeFiles/service.dir/home/fredrb/workspace/pxsym/out/wordexp.h/evaluation.cpp.o: /home/fredrb/workspace/pxsym/out/wordexp.h/evaluation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fredrb/workspace/pxsym/wrapper/includeos/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/service.dir/home/fredrb/workspace/pxsym/out/wordexp.h/evaluation.cpp.o"
	/usr/bin/clang++-6.0  --target=x86_64-pc-linux-elf  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/service.dir/home/fredrb/workspace/pxsym/out/wordexp.h/evaluation.cpp.o -c /home/fredrb/workspace/pxsym/out/wordexp.h/evaluation.cpp

CMakeFiles/service.dir/home/fredrb/workspace/pxsym/out/wordexp.h/evaluation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/service.dir/home/fredrb/workspace/pxsym/out/wordexp.h/evaluation.cpp.i"
	/usr/bin/clang++-6.0  --target=x86_64-pc-linux-elf $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fredrb/workspace/pxsym/out/wordexp.h/evaluation.cpp > CMakeFiles/service.dir/home/fredrb/workspace/pxsym/out/wordexp.h/evaluation.cpp.i

CMakeFiles/service.dir/home/fredrb/workspace/pxsym/out/wordexp.h/evaluation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/service.dir/home/fredrb/workspace/pxsym/out/wordexp.h/evaluation.cpp.s"
	/usr/bin/clang++-6.0  --target=x86_64-pc-linux-elf $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fredrb/workspace/pxsym/out/wordexp.h/evaluation.cpp -o CMakeFiles/service.dir/home/fredrb/workspace/pxsym/out/wordexp.h/evaluation.cpp.s

CMakeFiles/service.dir/home/fredrb/workspace/pxsym/out/wordexp.h/evaluation.cpp.o.requires:

.PHONY : CMakeFiles/service.dir/home/fredrb/workspace/pxsym/out/wordexp.h/evaluation.cpp.o.requires

CMakeFiles/service.dir/home/fredrb/workspace/pxsym/out/wordexp.h/evaluation.cpp.o.provides: CMakeFiles/service.dir/home/fredrb/workspace/pxsym/out/wordexp.h/evaluation.cpp.o.requires
	$(MAKE) -f CMakeFiles/service.dir/build.make CMakeFiles/service.dir/home/fredrb/workspace/pxsym/out/wordexp.h/evaluation.cpp.o.provides.build
.PHONY : CMakeFiles/service.dir/home/fredrb/workspace/pxsym/out/wordexp.h/evaluation.cpp.o.provides

CMakeFiles/service.dir/home/fredrb/workspace/pxsym/out/wordexp.h/evaluation.cpp.o.provides.build: CMakeFiles/service.dir/home/fredrb/workspace/pxsym/out/wordexp.h/evaluation.cpp.o


CMakeFiles/service.dir/service.cpp.o: CMakeFiles/service.dir/flags.make
CMakeFiles/service.dir/service.cpp.o: ../service.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fredrb/workspace/pxsym/wrapper/includeos/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/service.dir/service.cpp.o"
	/usr/bin/clang++-6.0  --target=x86_64-pc-linux-elf  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/service.dir/service.cpp.o -c /home/fredrb/workspace/pxsym/wrapper/includeos/service.cpp

CMakeFiles/service.dir/service.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/service.dir/service.cpp.i"
	/usr/bin/clang++-6.0  --target=x86_64-pc-linux-elf $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fredrb/workspace/pxsym/wrapper/includeos/service.cpp > CMakeFiles/service.dir/service.cpp.i

CMakeFiles/service.dir/service.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/service.dir/service.cpp.s"
	/usr/bin/clang++-6.0  --target=x86_64-pc-linux-elf $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fredrb/workspace/pxsym/wrapper/includeos/service.cpp -o CMakeFiles/service.dir/service.cpp.s

CMakeFiles/service.dir/service.cpp.o.requires:

.PHONY : CMakeFiles/service.dir/service.cpp.o.requires

CMakeFiles/service.dir/service.cpp.o.provides: CMakeFiles/service.dir/service.cpp.o.requires
	$(MAKE) -f CMakeFiles/service.dir/build.make CMakeFiles/service.dir/service.cpp.o.provides.build
.PHONY : CMakeFiles/service.dir/service.cpp.o.provides

CMakeFiles/service.dir/service.cpp.o.provides.build: CMakeFiles/service.dir/service.cpp.o


CMakeFiles/service.dir/home/fredrb/app/IncludeOS/includeos/src/service_name.cpp.o: CMakeFiles/service.dir/flags.make
CMakeFiles/service.dir/home/fredrb/app/IncludeOS/includeos/src/service_name.cpp.o: /home/fredrb/app/IncludeOS/includeos/src/service_name.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fredrb/workspace/pxsym/wrapper/includeos/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/service.dir/home/fredrb/app/IncludeOS/includeos/src/service_name.cpp.o"
	/usr/bin/clang++-6.0  --target=x86_64-pc-linux-elf  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/service.dir/home/fredrb/app/IncludeOS/includeos/src/service_name.cpp.o -c /home/fredrb/app/IncludeOS/includeos/src/service_name.cpp

CMakeFiles/service.dir/home/fredrb/app/IncludeOS/includeos/src/service_name.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/service.dir/home/fredrb/app/IncludeOS/includeos/src/service_name.cpp.i"
	/usr/bin/clang++-6.0  --target=x86_64-pc-linux-elf $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fredrb/app/IncludeOS/includeos/src/service_name.cpp > CMakeFiles/service.dir/home/fredrb/app/IncludeOS/includeos/src/service_name.cpp.i

CMakeFiles/service.dir/home/fredrb/app/IncludeOS/includeos/src/service_name.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/service.dir/home/fredrb/app/IncludeOS/includeos/src/service_name.cpp.s"
	/usr/bin/clang++-6.0  --target=x86_64-pc-linux-elf $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fredrb/app/IncludeOS/includeos/src/service_name.cpp -o CMakeFiles/service.dir/home/fredrb/app/IncludeOS/includeos/src/service_name.cpp.s

CMakeFiles/service.dir/home/fredrb/app/IncludeOS/includeos/src/service_name.cpp.o.requires:

.PHONY : CMakeFiles/service.dir/home/fredrb/app/IncludeOS/includeos/src/service_name.cpp.o.requires

CMakeFiles/service.dir/home/fredrb/app/IncludeOS/includeos/src/service_name.cpp.o.provides: CMakeFiles/service.dir/home/fredrb/app/IncludeOS/includeos/src/service_name.cpp.o.requires
	$(MAKE) -f CMakeFiles/service.dir/build.make CMakeFiles/service.dir/home/fredrb/app/IncludeOS/includeos/src/service_name.cpp.o.provides.build
.PHONY : CMakeFiles/service.dir/home/fredrb/app/IncludeOS/includeos/src/service_name.cpp.o.provides

CMakeFiles/service.dir/home/fredrb/app/IncludeOS/includeos/src/service_name.cpp.o.provides.build: CMakeFiles/service.dir/home/fredrb/app/IncludeOS/includeos/src/service_name.cpp.o


# Object files for target service
service_OBJECTS = \
"CMakeFiles/service.dir/home/fredrb/workspace/pxsym/out/wordexp.h/evaluation.cpp.o" \
"CMakeFiles/service.dir/service.cpp.o" \
"CMakeFiles/service.dir/home/fredrb/app/IncludeOS/includeos/src/service_name.cpp.o"

# External object files for target service
service_EXTERNAL_OBJECTS =

posix_eval: CMakeFiles/service.dir/home/fredrb/workspace/pxsym/out/wordexp.h/evaluation.cpp.o
posix_eval: CMakeFiles/service.dir/service.cpp.o
posix_eval: CMakeFiles/service.dir/home/fredrb/app/IncludeOS/includeos/src/service_name.cpp.o
posix_eval: CMakeFiles/service.dir/build.make
posix_eval: /home/fredrb/app/IncludeOS/includeos/x86_64/drivers/libdefault_stdout.a
posix_eval: /home/fredrb/app/IncludeOS/includeos/x86_64/lib/libcrti.a
posix_eval: /home/fredrb/app/IncludeOS/includeos/x86_64/lib/libos.a
posix_eval: /home/fredrb/app/IncludeOS/includeos/x86_64/lib/libbotan-2.a
posix_eval: /home/fredrb/app/IncludeOS/includeos/x86_64/lib/libssl.a
posix_eval: /home/fredrb/app/IncludeOS/includeos/x86_64/lib/libcrypto.a
posix_eval: /home/fredrb/app/IncludeOS/includeos/x86_64/lib/libosdeps.a
posix_eval: /home/fredrb/app/IncludeOS/includeos/x86_64/platform/libx86_pc.a
posix_eval: /home/fredrb/app/IncludeOS/includeos/x86_64/lib/libarch.a
posix_eval: /home/fredrb/app/IncludeOS/includeos/x86_64/lib/libos.a
posix_eval: /home/fredrb/app/IncludeOS/includeos/x86_64/platform/libx86_pc.a
posix_eval: /home/fredrb/app/IncludeOS/includeos/x86_64/lib/libarch.a
posix_eval: /home/fredrb/app/IncludeOS/includeos/x86_64/lib/libos.a
posix_eval: /home/fredrb/app/IncludeOS/includeos/x86_64/platform/libx86_pc.a
posix_eval: /home/fredrb/app/IncludeOS/includeos/x86_64/lib/libc++abi.a
posix_eval: /home/fredrb/app/IncludeOS/includeos/x86_64/lib/libc.a
posix_eval: /home/fredrb/app/IncludeOS/includeos/x86_64/lib/libos.a
posix_eval: /home/fredrb/app/IncludeOS/includeos/x86_64/lib/libc++.a
posix_eval: /home/fredrb/app/IncludeOS/includeos/x86_64/lib/libarch.a
posix_eval: /home/fredrb/app/IncludeOS/includeos/x86_64/lib/libm.a
posix_eval: /home/fredrb/app/IncludeOS/includeos/x86_64/lib/libg.a
posix_eval: /home/fredrb/app/IncludeOS/includeos/x86_64/lib/libgcc.a
posix_eval: /home/fredrb/app/IncludeOS/includeos/x86_64/lib/crtend.o
posix_eval: /home/fredrb/app/IncludeOS/includeos/x86_64/lib/libcrtn.a
posix_eval: CMakeFiles/service.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/fredrb/workspace/pxsym/wrapper/includeos/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable posix_eval"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/service.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/service.dir/build: posix_eval

.PHONY : CMakeFiles/service.dir/build

CMakeFiles/service.dir/requires: CMakeFiles/service.dir/home/fredrb/workspace/pxsym/out/wordexp.h/evaluation.cpp.o.requires
CMakeFiles/service.dir/requires: CMakeFiles/service.dir/service.cpp.o.requires
CMakeFiles/service.dir/requires: CMakeFiles/service.dir/home/fredrb/app/IncludeOS/includeos/src/service_name.cpp.o.requires

.PHONY : CMakeFiles/service.dir/requires

CMakeFiles/service.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/service.dir/cmake_clean.cmake
.PHONY : CMakeFiles/service.dir/clean

CMakeFiles/service.dir/depend:
	cd /home/fredrb/workspace/pxsym/wrapper/includeos/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fredrb/workspace/pxsym/wrapper/includeos /home/fredrb/workspace/pxsym/wrapper/includeos /home/fredrb/workspace/pxsym/wrapper/includeos/build /home/fredrb/workspace/pxsym/wrapper/includeos/build /home/fredrb/workspace/pxsym/wrapper/includeos/build/CMakeFiles/service.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/service.dir/depend

