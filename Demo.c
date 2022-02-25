#include<stdio.h>
#include<stdlib.h>

int Add(int a,int b)
{
    int sum=a+b;
    return sum;
}
void Fun()
{
    printf("Inside Fun\n");
}

int main()
{
    int choise=0;
    int No1,No2;
    int iRet;

    while(1)
    {
        printf("Enter Your Choise \n0)Exit\n1)Add\n2)Fun\n");
        scanf("%d",&choise);
        switch(choise)
        {
            case 0:
                exit(0);
                break;
            case 1:
                printf("Enter First Number\n");
                scanf("%d",&No1);
                printf("Enter Second Number\n");
                scanf("%d",&No2);
                iRet=Add(No1,No2);
                printf("Addition is : %d\n",iRet);
                break;
            case 2:
                Fun();
                break;
        }
    }

    return 0;
}