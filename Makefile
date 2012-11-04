BUILD = ./build
TEST = ./test
LIB = ./lib
SRC = ./src

CPP = g++
CPPFLAGS = -Wall -Wextra

all: $(BUILD)/main $(TEST)/

$(BUILD)/main: $(SRC)/vofv/vect.cpp $(SRC)/vofv/vect.o
	cd $(SRC); $(MAKE)

$(TEST)/stack_test: $(TEST)/vectTest.cpp $(SRC)/vofv/vect.o
	cd $(TEST); $(MAKE)

clean:
	cd $(SRC); $(MAKE) clean
	cd $(TEST); $(MAKE) clean

