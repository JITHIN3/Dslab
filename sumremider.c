

#include<stdio.h>
int main()
{
    int sum,a,b,n,reminder;
    float division;
    printf("Enter any two numbers a and b to sum,divide and find reminder of  these two numbers\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    division =(float)a/b;
    reminder =a%b;
     printf("\n Sum of %d and %d is \t %d",a,b,sum);
	   
	     printf("\n Division of %d and %d is \t %f",a,b,division);
	     printf("\n remainder of %d and %d is \t %d",a,b,reminder);
	     
}
