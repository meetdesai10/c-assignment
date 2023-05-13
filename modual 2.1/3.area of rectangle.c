
// area of rectangle

#include<stdio.h>
int main()
{
	float width,height,area;
	printf("enter the width of the rectangle\n");
	scanf("%f",&width);
	printf("enter the height of the rectangle\n");
	scanf("%f",&height);
	
	area=width*height; // formula to find area of the rectangle
	
	
	
	printf("area of rectangle %.2f\n",area);
    
    return 0;

}
