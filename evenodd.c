#include <stdio.h>

int main()
{
	int num;
	printf("Enter the number to be checked for even and odd \n");
	scanf("%d",&num);
	if(num%2==0){
		printf("The number is evev..Go even..:-) \n");
	}
	else{
		printf("The number is odd..Go odd..:-) \n");
	}
	
	
	return 0;
}
