#include <stdio.h>

int main()
{
	int n;
	printf("Enter the number \n");
	scanf("%d",&n);
	
	if(n<=9){
		printf("%d \n",n);
		
	}
	else{
		
		printf("The entered number is not in range \n");
	}
	
	
	return 0;
}
