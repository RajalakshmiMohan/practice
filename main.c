#include <stdio.h>

int main()
{
	int pal,num;
	
	int rev=0;
	printf("Enter the no to be checked for palindrome pattern \n");
	scanf("%d",&num);
	pal=num;
	//num=pal;
	while(num!=0){
		
	
	rev=rev*10;
	rev=rev+num%10;
	num=num/10;

	}
	printf("The number is reversed and is %d and check the result for palindrome too\n",rev);
	//scanf("%d",&rev);
	if(pal==rev){
		printf("The number is a palindrome patterned \n");
		
	}
	else{
		printf("Sorry,a very bad number :-( \n");
	}
	return 0;
}
