include ../Makefile.inc

SUBDIRS = network

CFLAGS_PROJECT += -I../include

OBJS = simulator.o
SUBOBJS = network/*.o

LIBS = libdionysus.a

recursive:: $(SUBDIRS)

build-common:: $(LIBS)

.PHONY: $(SUBDIRS)
$(SUBDIRS):
	@echo "===>" $@
	$(MAKE) -C $@ $(MAKECMDGOALS)
	@echo "<===" $@

libdionysus.a: $(SUBDIRS) $(OBJS)
	$(AR) rsc $@ $(SUBOBJS) $(OBJS)

%.o: %.cpp
	$(CXX) $(CFLAGS) -c $<

clean-common::
	rm -rf $(LIBS) $(OBJS)
