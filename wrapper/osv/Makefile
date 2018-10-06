# Copyright (C) 2014 Cloudius Systems, Ltd.
#
# This work is open source software, licensed under the terms of the
# BSD license as described in the LICENSE file in the top-level directory.

CXXFLAGS  = -g -Wall -std=c++11 -fPIC $(INCLUDES) -I../

TARGET = main

# OBJ_FILES = main.o run_evaluation.o

quiet = $(if $V, $1, @echo " $2"; $1)
very-quiet = $(if $V, $1, @$1)

all: $(TARGET).so

evaluation: 
	$(CXX) $(CXXFLAGS) -c run_evaluation.cc -o pxeval

$(TARGET).so: evaluation
	$(CXX) $(CXXFLAGS) -shared -o $(TARGET).so $(TARGET).cc pxeval

clean:
	$(call quiet, rm -f $(TARGET).so $(OBJ_FILES), CLEAN)
