
sample:	sample.o Person.o Address.o
	g++ sample.o Person.o Address.o -o sample

sample.o:	sample.cpp Person.h
	g++ sample.cpp -c

Person.o: Person.cpp Person.h Address.h
	g++ Person.cpp -c

Address.o: Address.h Address.cpp
	g++ Address.cpp -c
