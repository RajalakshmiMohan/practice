#include <stdio.h>

int main()
{
	
	int i,num;
	unsigned long int fact=1;
	i=1;
	printf("Enter any number but not beyond 34 \n");
	scanf("%d",&num);
	
	while(i<=num){
		fact=fact*i;
			i++;
	
	
	}
	printf("The factorial of the given number is %d \n",fact);
	return 0;
}
