CC=g++
CFLAGS= -c -Wall
SOURCES= main.cc m1.cc trainer.cc util.cc io.cc
OBJECTS=$(SOURCES:.cc=.o)
EXECUTABLE=ibm-m1

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@

.cc.o:
	$(CC) $(CFLAGS) $< -o $@
clean:
	rm *.o $(EXECUTABLE)
