// calculator



#include<stdio.h> // pre processor
int main()
{
	float number1,number2; // variable to store data
	char ch; // variable to store date
	printf("=== calculator===\n");  
	printf(" for addition press (+)\n");
	printf(" for substraction press (-)\n");
	printf( "for multiplication press (*)\n");
	printf(" for division press (/)\n");
	printf("\n please enter the operation(symbol):");
	scanf("%c",&ch); 
	printf("enter the number 1\n");
	scanf("%f",&number1);
	printf("enter the numebr 2\n");
	scanf("%f",&number2);
	
	switch(ch)
	{
		case'+':
			printf("total %f\n",number1+number2);//addtion
			break;
		case'-':
			printf("total %f\n",number1-number2);//subsraction
			break;
		case'*':
			printf("total %f\n",number1*number2);//multiplication
			break;
		case'/':
			printf("total %f\n",number1/number2);//division
			break;
		default:
		printf("you entered unvalid number\n");			
	}
	
	
	return 0;
}
	
