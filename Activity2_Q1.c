#include <stdio.h>
int main(){
	float n1, n2, result;
	printf("Enter the first number:");
	scanf("%f", &n1);
	printf("Enter the second number:");
	scanf("%f",&n2);
	
	result = n1 * n2;
	
	printf("Result is:%.2f", result);
	
	return(0);
}
