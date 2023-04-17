
// area of triangle


#include<stdio.h>
int main()
{
	float base,height,ans;
	printf("enter the base of the triangle\n");
	scanf("%f",&base);
	printf("enter the height of the triangle\n");
	scanf("%f",&height);
	
	ans=0.5*base*height;
	printf("area of the triangle %f/n",ans);
	return 0;
	
	
	
}
