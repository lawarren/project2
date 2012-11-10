BUILD = ./build
TEST = ./test
LIB = ./lib
SRC = ./src

CPP = g++
CPPFLAGS = -Wall -Wextra

all: $(BUILD)/main $(TEST)/

$(BUILD)/main: $(SRC)/vofv/vect.cpp $(SRC)/vofv/vect.o
	cd $(SRC)/vofv; $(MAKE)

$(BUILD)/main: $(SRC)/sa/spall.cpp $(SRC)/sa/spall.o
	cd $(SRC)/sa; $(MAKE)

$(BUILD)/main: $(SRC)/2da/twod.cpp $(SRC)/2da/twod.o
	cd $(SRC)/2da; $(MAKE)


clean:
	cd $(SRC); $(MAKE) clean
	cd $(TEST); $(MAKE) clean

