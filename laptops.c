#include <stdio.h>
#include "electronics.h"
#include "structures.h"
#include<string.h>
void details(void)
{	struct Details data;
	int num=0;
	printf("ENTER a number to see the laptop details\n\t\t1.HP\n\t\t2.LENOVO\n\t\t3.DELL\n\t\t4.ASUS[NB : No should be between 1 and 4]");
 	scanf("%d",&num);
switch(num)
	{
	case 1:
	strcpy(data.type,"HP");
	data.storage=500;
	data.yearManufactured=2018;
	data.price=30000;
	break;
	case 2:
	strcpy(data.type,"LENOVO");
	data.storage=500;
	data.yearManufactured=2017;
	data.price=29500;
	break;
	case 3 :
	strcpy(data.type,"DELL");
	data.storage=256;
	data.yearManufactured=2016;
	data.price=25500;
	break;
	case 4:
	strcpy(data.type,"ASUS");
	data.storage=500;
	data.yearManufactured=2018;
	data.price=27000;
	break;
	default :
	printf("INVALID CHOICE");
	}
	printf("Laptop Type : %s\nStorage : %d GB\nYear Manufactured : %d\nPrice : %d\n",data.type,data.storage,data.yearManufactured,data.price);
}
void Welcome(char name[])
{	int num;
	printf("HELLO %s WELCOME TO DAN LAPTOP SHOP\nTO SEE LAPTOPS DETAILS : PRESS 1\nTO SEE MANUFACTURER DETAILS : PRESS 2",name);
	scanf("%d",&num);
	if(num==1)
	{
	details();
	}
	else if(num==2){
	manufacturer();
	}
	else {printf("\nINVALID CHOICE");}
}
void manufacturer(void)
{	int num=0;
	printf("\nENTER a number to see the laptop manufucturer details : \n\t\t1.HP\n\t\t2.LENOVO\n\t\t3.DELL\n\t\t4.ASUS[NB : No should be between 1 and 4]");
 	scanf("%d",&num);
	struct Manufacturer company;
	switch(num){
	case 1:
	strcpy(company.name,"HP");
	strcpy(company.area.country,"USA");
	strcpy(company.area.city,"WASHINGTON DC");
	
	break;
	case 2:
	strcpy(company.name,"XIAOMI Inc");
	strcpy(company.area.country,"CHINA");
	strcpy(company.area.city,"BEIJING");
	
	
	break;
	case 3:
	strcpy(company.name,"DELL MANUFACTURERS");
	strcpy(company.area.country,"USA");
	strcpy(company.area.city,"NEWYORK");
	
	break;
	case 4:
	strcpy(company.name,"IBM");
	strcpy(company.area.country,"UK");
	strcpy(company.area.city,"LONDON");
	
	break;
	default:
	printf("an error has occurred");
	}
printf("MANUFACTURER NAME : %s\nLOCATION :\n\t\tCOUNTRY : %s\n\t\tCITY : %s\n",company.name,company.area.country,company.area.city);

}
