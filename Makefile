# =============================================================================
# Harvest Moon: Friends of Mineral Town - Makefile
# Modular Decompiled Engine & C# Port Preparation Pipeline
# =============================================================================

CC ?= gcc
CFLAGS ?= -Wall -Wextra -std=c11 -O2 -Iinclude -Iinclude/gba -Iinclude/farm -Iinclude/player -Iinclude/entities -Iinclude/events -Iinclude/audio -Iinclude/system -Iinclude/text
PYTHON ?= python

SRCS := $(wildcard src/*.c) \
        $(wildcard src/core/*.c) \
        $(wildcard src/farm/*.c) \
        $(wildcard src/player/*.c) \
        $(wildcard src/entities/*.c) \
        $(wildcard src/events/*.c) \
        $(wildcard src/audio/*.c) \
        $(wildcard src/system/*.c) \
        $(wildcard src/text/*.c)

OBJS := $(SRCS:.c=.o)

.PHONY: all clean dump-events dump-sprites dump-data dump-all

all: $(OBJS)
	@echo "[+] All decompiled C modules built successfully."

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) fomt_core.a

dump-events:
	$(PYTHON) tools/dump_all_events.py

dump-sprites:
	$(PYTHON) tools/dump_sprites_and_animations.py

dump-data:
	$(PYTHON) tools/dump_game_data.py

dump-all: dump-events dump-sprites dump-data
	@echo "[+] Complete asset dump pipeline executed successfully."
