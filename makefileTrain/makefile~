CC=gcc
CFFLAG=-lstdc++ -I. -Wall
ODIR=obj
# should have a folder named behind ODIR under .

OPENCV = `pkg-config opencv --cflags --libs`

LIBS=$(OPENCV) -lm
DEPS=$(wildcard *.h) #all the .h file
SRC_FILE=$(wildcard *.cpp) #all the cpp file in the current responsitory, of course you can specify each one by yourself.	
OUTPUT=hello

_OBJ=$(SRC_FILE:.cpp=.o) 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS) 
# this generate .o fior each cpp file
# I guess that since each time there will be only one .cpp file,  $< should be enough

$(OUTPUT): $(OBJ)
	$(CC) -o $@ $^ $(CFFLAG) $(LIBS)

 # The .PHONY rule keeps make from doing something with a file named clean.
.PHONY: clean
	
clean:
	-rm -f *.o core *.core $(ODIR)/*.o $(OUTPUT)
# simple linux command deleting every thing specified after -f

SRC_FILES := $(*.cpp)
OBJ_FILES := $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRC_FILES))
