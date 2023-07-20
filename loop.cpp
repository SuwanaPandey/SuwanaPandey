#include<stdio.h>

int main()
{
	double firstInput;
	int option;
	char choice,result;
	 
	printf("Welcome! \n");
	
	do{
	
	printf("options\n");
	printf("1. Area of Rectangle\n");
	printf("2. Area of circle\n");
	printf("3. Area of square\n");
	printf("4. Area of Triangle\n");
	printf("5. Exist\n");
	
	printf("Enter your option: ");
	scanf("%d",&option);
	
	switch(option)
{

	
	      case 1:
	      	 char l, b, area;
	      	 printf("Enter the length :");
	      	 scanf("%c", &l);
	      	 
	      	 printf("Enter the width :");
	      	 scanf("%c", &b);
	      	 result = (l*b);
	      	 printf("Area of Rectangle=%d",result);
