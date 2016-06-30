#include <stdio.h>

int main()
{
	int n,i,a,num;
	//int sumnum=0;
	int rev=0;
	
	
	printf("Enter the number to get reversed \n",num);
	scanf("%d",&num);
	while(num!=0){
		
	
	rev=rev*10;
	rev=rev+num%10;
   
	num=num/10;
//	sumnum=sumnum+rev%10;

	}
	 printf("The reversed number is %d \n",rev);
	 
	 
	
	 
 //	printf("The sum of reversed numbers is %d",sumnum);
 //	scanf("%d",&sumnum);
	 	
	return 0;
}
