#include<stdio.h>

int main(){
	int a , b , t;
	
	printf("Enter two integers\n");
	scanf("%d%d", &a ,&b );
	
	printf("Before Swap\n first Integer= %d\n second Integer = %d\n", a , b);
	
	t = a;
	a = b;
	b = t;
	
	printf("After Swap\n first Intger = %d\n second Integer = %d\n", a , b);
	
	return 0;
}
