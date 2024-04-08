all: myProgram

myProgram: mainLaptop.o laptops.o 
	gcc -o myProgram mainLaptop.o laptops.o

mainLaptop.o: mainLaptop.c laptops.c
	gcc -c mainLaptop.c laptops.c
laptops.o: laptops.c electronics.h
	gcc -c laptops.c 

clean:
	rm -f *.o laptop 