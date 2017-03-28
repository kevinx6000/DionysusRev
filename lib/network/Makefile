include ../../Makefile.inc

SUBDIRS =

CFLAGS_PROJECT += -I../../include

OBJS = network-base.o fattree.o

recursive:: $(SUBDIRS)

build-common:: $(OBJS)

.PHONY: $(SUBDIRS)
$(SUBDIRS):
	@echo "===>" $@
	$(MAKE) -C $@ $(MAKECMDGOALS)
	@echo "<===" $@

%.o: %.cpp
	$(CXX) $(CFLAGS) -c $<

clean-common::
	rm -rf $(OBJS)
