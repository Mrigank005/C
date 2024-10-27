#include <stdio.h> 
int main() 
{
	int height = 7;
	int width = 5;
  	int perimeter = 2*(height + width);
	printf("Perimeter of the rectangle = %d cm\n", perimeter);
	int area = height * width;
	printf("Area of the rectangle = %d square cm\n", area);
	return(0);
}
