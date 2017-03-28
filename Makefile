include Makefile.inc

SUBDIRS = lib main

recursive:: $(SUBDIRS)

.PHONY: $(SUBDIRS)
$(SUBDIRS):
	@echo "===>" $@
	$(MAKE) -C $@ $(MAKECMDGOALS);
	@echo "<===" $@
