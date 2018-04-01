# Copyright(c) [2017] <Frzifus> All Rights Reserved.
# Distributed under MIT license.
# See file LICENSE for detail at LICENSE file.

CXX=g++
CXXFLAGS=-std=c++14 -I ./src/ -isystem ./lib/json -Wall -Wextra -Wpedantic -Wconversion -Wsign-conversion -c

SOURCEDIR=./src/

PATH := /usr/bin:$(PATH)

LDFLAGS= 

SOURCES:= $(shell find $(SOURCEDIR) -name '*.cpp')
OBJDIR=./obj
OBJECTS=$(addprefix $(OBJDIR)/,$(SOURCES:.cpp=.o))
EXECUTABLE=main

all: $(SOURCES) $(EXECUTABLE)
	@echo Finish!!

$(EXECUTABLE):
	@echo Build executable $@
	@$(CXX) $(LDFLAGS) $(OBJECTS) $(STATLIBS) -o $@

clean:
	rm -f $(shell find build/ -name '*.o')

distclean:
	rm -fr build
