CC = gcc 
CFLAGS =-I thirdparty -I src -c -Wall -Werror
EXECUTABLE = file 
SOURCES = main.c calc.c 
DIR = build/src
DAR = src
DUR = bin/calc

all: Prog 
Prog: $(DUR)/$(EXECUTABLE)
$(DIR)/main.o: $(DAR)/main.c 
	@if [ ! -d $(DIR) ] ; then echo "creating $(DIR)" ; mkdir build ; mkdir build/src; fi
	$(CC) $(CFLAGS) -c $(DAR)/main.c -o $(DIR)/main.o 

$(DIR)/calc.o: $(DAR)/calc.c
	@if [ ! -d $(DIR) ] ; then echo "creating $(DIR)" ; mkdir build ; mkdir build/src; fi
	$(CC) $(CFLAGS) -c $(DAR)/calc.c -o $(DIR)/calc.o 
    
$(DUR)/$(EXECUTABLE): $(DIR)/main.o $(DIR)/calc.o
	@if [ ! -d $(DUR) ] ; then echo "creating $(DUR)" ; mkdir bin ; mkdir bin/calc; fi
	$(CC) $(DIR)/main.o $(DIR)/calc.o -o $(DUR)/$(EXECUTABLE) -lm
	
.PHONY : clean
clean:
	rm -rf build/src/*.o bin/calc/*
