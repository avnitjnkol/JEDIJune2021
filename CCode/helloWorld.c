
//Hello World Program

#include<stdio.h>

void greeting(char name[]);

int main(){

	char name[]="Alia Bhat";
	greeting(name);

}

void greeting(char name[])
{
	
	printf("Hey where was you.. %s",name);
}
