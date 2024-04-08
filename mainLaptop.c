#include <stdio.h>
#include "electronics.h"

int main(){
 struct Laptop laptops[10];

for (int i=0; i<10; i++){
 	printf ("Input details for laptops %d: \n", i+1);
 	inputLaptops (laptops [i]);
 }

 
for (int i=0;i<10; i++){
 	printf ("Details of laptops %d: \n", i+1);
 	displayLaptops (laptops[i]);

return 0:
}