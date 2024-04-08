#ifndef LAPTOPS_H
#define LAPTOPS_H

struct Details{
	char type[50];
	int storage [50];
	int yearManufactured;
	int price;


};
 struct Manufacturer{
 	char name[50];
 	int Age;
 	struct Details deta;


 };
 struct company{
 	char title[50];
 	char country[50];
 	int yearFounded[50];
 	struct Manufacturer manuf;
 };

 void inputLaptops(struct Laptops laptops);
 void displayLaptops (struct Laptops laptops);

 #endif
