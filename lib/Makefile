include ../Makefile.inc

SUBDIRS =

CFLAGS_PROJECT += -I../include

LIBS = libdionysus.a

recursive:: $(SUBDIRS)

build-common:: $(LIBS)

.PHONY: $(SUBDIRS)
$(SUBDIRS):
	@echo "===>" $@
	$(MAKE) -C $@ $(MAKECMDGOALS)
	@echo "<===" $@

libdionysus.a: simulator.o
	$(AR) rsc $@ $^

%.o: %.cpp
	$(CXX) $(CFLAGS) -c $<

clean-common::
	rm -rf $(LIBS) *.o
