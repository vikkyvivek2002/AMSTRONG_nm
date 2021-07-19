#include<stdio.h>
int main()
{
	int n,temp,sum =0,rem ;
	printf("enter a number :");
	scanf("%d",&n);
	temp = n;
	while(n!=0)
	{
		rem  = n%10;
		n = n /10;
		sum= sum  + (rem*rem*rem);
	
	}
	if(sum == temp )
	printf("AMSTRONG NUMBER");
	else 
	printf("NOT A AMSTRONG NUMBER ");
	
	 return 0;
}