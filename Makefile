myProgram: mainLaptop.o laptops.o 
	gcc -o myProgram mainLaptop.o laptops.o
mainLaptop.o: mainLaptop.c 
	gcc -c mainLaptop.c 
laptops.o: laptops.c 
	gcc -c laptops.c 
clean:
	rm  *.o myProgram 
