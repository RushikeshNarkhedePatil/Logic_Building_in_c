#include<stdio.h>

void Armstrong(int No)
{
    int sum=0;
    int r=0;
    int temp;
    temp=No;

    while(No>0)    
    {    
        r=No%10;    
        sum=sum+(r*r*r);    
        No=No/10;    
    }    
     if(sum==temp)
    {
        printf("Armstrong number\n");
    }
    else
    {
        printf("Not armstrong number\n");
    }
}
int main()
{
    int ivalue=0;
    printf("Enter number\n");
    scanf("%d",&ivalue);
    Armstrong(ivalue);
   
    return 0;
}