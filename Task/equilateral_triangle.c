#include<stdio.h>
int main(){
	double a, perimeter, area;
	printf("Enter the side length : ");
	scanf("%lf", &a);
	area = 0.433 * a; // wrong, do you remember area has dimension of (m*m), [unit dimension]
	perimeter = 3 * a;
	printf("Area of Equilateral traingle is : %lf\n", area);
	printf("Perimeter of Equilateral traingle is : %lf\n", 														Perimeter);
	return 0;
}
