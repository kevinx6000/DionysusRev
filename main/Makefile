include ../Makefile.inc

CFLAGS_PROJECT += -I../include

LDFLAGS_GLOBAL +=
LDFLAGS_PROJECT += ../lib/libdionysus.a
LDFLAGS_TOOL_CHAIN += -lpthread
LDFLAGS = $(LDFLAGS_GLOBAL) $(LDFLAGS_PROJECT) $(LDFLAGS_TOOL_CHAIN)

build-common:: main

main: main.o
	$(CXX) -o $@ $^ $(CFLAGS) $(LDFLAGS)

%.o: %.cpp
	$(CXX) $(CFLAGS) -c $<

clean-common::
	rm -rf main *.o
