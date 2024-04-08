#include <stdio.h>
#include "electronics.h"

void inputLaptops (struct Laptops laptops){

	printf ("Enter company title: ");
	scanf ("%s", company.title);

	printf ("Enter country: ");
	scanf ("%s", company.country);

	printf ("Enter year company was founded: ");
	scanf("%d",company.yearFounded);

	printf ("Enter manufacturer name: ");
	scanf ("%s", company->manuf.name);

	printf ("Enter manufacurer's age: ");
	scanf ("%d",  company->manuf.age);

	printf ("Enter laptop type: ");
	scanf ("%s",  manufacturer->deta.type);


	printf ("Enter laptop's storage capacity: ");
	scanf ("%d", manufacturer->deta.storage);

	printf ("Enter laptop's year of manufacture: ");
	scanf ("%d", manufacturer->deta.yearManufactured);

	printf ("Enter laptops price: ");
	scanf ("%d", manufacturer->deta.price);

}

void displayMovies (Movie movies){

	printf ("Company Title: %s\n", company.title);
	printf ("Company location: %s\n", company.country);
    printf ("Company year founded: %d\n",  company.yearFounded);
    printf ("Manufacturer name: %s", company->manuf.name);
    printf ("Manufacturer age: %d\n", company->manuf.age);
    printf ("Laptop type: %s\n", manufacturer->deta.type);
    printf ("Storage: %d\n", manufacturer->deta.storage);
    printf ("Laptop year manufactured: %d\n", manufacturer->deta.yearManufacured);
    printf ("Laptop price: %d\n", manufacturer->deta.price);



}
