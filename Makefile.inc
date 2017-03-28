# Compilation flags
CFLAGS = $(CFLAGS_GLOBAL) $(CFLAGS_PROJECT) $(CFLAGS_TOOL_CHAIN)

# Default is to build
.PHONY: all
all: build

# Recursive build & clean
.PHONY: recursive
recursive::

# Build
.PHONY: build
build: build-common recursive

build-common::

# Clean
.PHONY: clean
clean: clean-common recursive

clean-common::

