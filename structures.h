struct Details{
	char type[50];
	int storage , yearManufactured, price;
	
};
 
 struct location
 {
 char country[30],city[30];
 };
 struct Manufacturer{
 	char name[50];
 	struct location area;
 	};
