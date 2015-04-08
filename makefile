main:lab2main.o lab2.o
	g++ -o lab2 lab2main.o lab2.o

lab2main.o:lab2main.cpp lab2.h
	g++ -c lab2main.cpp

lab2.o:lab2.cpp lab2.h
	g++ -c lab2.cpp

clean:
	rm lab2*.o

