#finds all files in engine/source in all directories that have the .c suffix
SRCPATHS = softposit/src/*/*.c

CSRC = $(wildcard $(SRCPATHS))

OBJECTS = $(CSRC:.c=.o)

#LCC is our linux compiler
LCC = gcc

#LCFLAGS are our compile time flags for linux
LCFLAGS = -lm -Isoftposit/includes

DEBUGFLAGS = -g -rdynamic -DDEBUG -O0

DONTBEAFUCKINGIDIOT = -Werror -Wall -Wextra -pedantic -Wno-missing-field-initializers -Wno-return-type -Wno-unused-parameter -Wno-builtin-declaration-mismatch

%.o: %.c
	$(LCC) -c -o $@ $< $(LCFLAGS) $(DEBUGFLAGS) $(DONTBEAFUCKINGIDIOT)

a.out : $(OBJECTS)
	$(LCC) $(OBJECTS) $(LCFLAGS) $(DEBUGFLAGS) $(DONTBEAFUCKINGIDIOT)

documentation:
	doxygen


clean: 
	rm -f softposit/src/*/*.o

build: a.out
	-mkdir game
	-mkdir game/engine
	-mkdir game/log
	-touch game/log/log.log
	-mkdir game/engine/data
	-mkdir game/engine/data/images
	-mkdir game/engine/data/shaders
	-cp -r engine/data/*/ game/engine/data/ 
	-cp a.out game

