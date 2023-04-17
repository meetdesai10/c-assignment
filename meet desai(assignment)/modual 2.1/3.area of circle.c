
// area of circle
#include<stdio.h>
int main(){
	
	float r,pi=3.14,area;
	printf("enter the radius of the circle\n");
	scanf("%f",&r);
	
	area=pi*r*r; // formula to find area of the circle
	printf("area of the circle %f",area);
	return 0;
}
