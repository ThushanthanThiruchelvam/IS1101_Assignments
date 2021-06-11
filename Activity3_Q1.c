#include <stdio.h>
int main() {
	double num;
	printf("Enter a number:");
	scanf("%lf",&num);
	if(num <= 0.0) {
		if (num == 0.0)
		printf("Your number is 0");
		else
		printf("Your number is Negative");
	}
	else
	printf("Your number is positive");
	
	return 0;
}
