# compiler
CC = gcc

# directories
INCLUDE_DIR = ../include
OBJ_DIR = obj
LIB_DIR = ../lib

# compiler flags
CFLAGS = -I $(INCLUDE_DIR)

# heritage lib flag...
LIBS = -lm

# define dependencies / includes
_DEPENDENCY_LIST = hellomake.h
DEPENDENCIES = $(patsubst %, $(INCLUDE_DIR)/%, $(_DEPENDENCY_LIST))

# define object files
_OBJECT_LIST = hellomake.o hellofunc.o
OBJECT_FILES = $(patsubst %, $(OBJ_DIR)/%, $(_OBJECT_LIST))

# build object files..?
$(OBJ_DIR)/%.o: %.c $(DEPENDENCIES)
	$(CC) -c -o $@ $< $(CFLAGS)

# link object files into executable..?
hellomake: $(OBJECT_FILES)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

# keeps make from doing something with a file named clean
.PHONY: clean

# remove object files
clean:
	rm -f $(OBJ_DIR)/*.o *~ core $(INCDIR)/*~
