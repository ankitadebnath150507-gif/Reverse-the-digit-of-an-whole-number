//w.c.p to reverse the digits of an whole number//
#include<stdio.h>
int main()
{
	int n,digit;
	int reverse=0;
	printf("Enter the whole number:");
	scanf("%d",&n);
	while(n!=0){
	digit=n%10;
	reverse=reverse*10+digit;
	n=n/10;
}
printf("Reversed value will be:%d\n",reverse);
return 0;
	
}
