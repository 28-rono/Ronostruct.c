#include <stdio.h>
#include "electronics.h"
#include "structures.h"
char name[30];
int main(){
	
	printf("enter your name to proceed : \n");
	scanf("%s",name);
 	Welcome(name);
return 0;
}
