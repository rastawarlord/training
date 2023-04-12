#include <stdio.h>

int main(){
//set vars
	double first, second, temp;

//setup questions for user
	printf("\nEnter the first number: ");
	scanf("%lf", &first);

	printf("\nEnter the second number: ");
	scanf("%lf", &second);

//set vars to eachother with tem first then first then second, this is the swapping formula
	temp = first;
	
	first = second;

	second = temp;

//print results of swap
	printf("\nAfter swapping, first number = %.2lf\n", first);
	printf("After swapping, second number = %.2lf\n", second);
	printf("\n");
	
	return 0;
}
