CPP = g++
CPPFLAGS = -Wall -Wextra

vect.o: vect.h vect.cpp
	$(CPP) $(CPPFLAGS) -c vect.cpp

vtest: vectTest.cpp vect.o
	$(CPP) $(CFLAGS) -o vtest $^

clean:
	rm -f *.o
	rm -f *~
