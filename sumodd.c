#include<stdio.h>
int main()
{
    int arr[10],i,b[10],j=0,sum=0,size;
    printf("Enter array size : \n");
    scanf("%d",&size);
    printf("Enter any %d array elements : \n",size);
    for(i=0;i<size;i++)
     scanf("%d",&arr[i]);
    for(i=0;i<size;i++)
    {
        if(arr[i]%2!=0)
        sum=sum+arr[i];
    }
    printf("Total sum of odd numbers is : \n%d",sum);
    return 0;
    
}
