cmake_minimum_required(VERSION 2.8.9)

# IncludeOS install location
if (NOT DEFINED ENV{INCLUDEOS_PREFIX})
  set(ENV{INCLUDEOS_PREFIX} /usr/local)
endif()
include($ENV{INCLUDEOS_PREFIX}/includeos/pre.service.cmake)
project (posix_evaluation)

# Human-readable name of your service
set(SERVICE_NAME "POSIX Evaluation Service")

# Name of your service binary
set(BINARY       "posix_eval")
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -ferror-limit=3000")

# Source files to be linked with OS library parts to form bootable image
set(SOURCES
	$ENV{EVALUATION_SRC}
  service.cpp # ...add more here
)

# To add your own include paths:
# set(LOCAL_INCLUDES ".")
set (LOCAL_INCLUDES "../")

# DRIVERS / PLUGINS:

set(PLUGINS
    # Use "boot --plugins ." to see other plugins
  )

# include service build script
include($ENV{INCLUDEOS_PREFIX}/includeos/post.service.cmake)
