//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  PerfectOrNot
//  Input:-            6
//  Output:-           TRUE
//  Input:-            12
//  Output:-           FALSE
//  Discription:-      Accept One Number From User and check wether that number perfect or not.
//                     Perfect no such a number was sametion of factor is same as the number.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 10/9/2019
//  Modification Of Code Date:- 27/2/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#define YES 1
#define NO 0

typedef int BOOL;

BOOL PerfectOrNot(int No)
{
    int icnt=0;
    int sum=0;
    int temp=No;
    if(NO<0)
    {
        No=-No;     //updator negetive to positive
    }
    if((No==1)||(No==-1))
    {
        return YES;
    }
    // for(icnt=1;icnt<No;icnt++)      //iterate loop
    // {
    //     if(No%icnt==0)              //find factor
    //     {
    //         sum=sum+icnt;
    //     }
    // }

    //perfect or not with list complexity.
    for(icnt=(No/2);(icnt>=1)&&(sum<=No);icnt--)
    {
        sum=sum+icnt;
    }
    if(sum==No)
    {
        return YES;
    }
    else
    {
        return NO;
    }
}
int main()
{
    BOOL bRet=NO;
    int ivalue=0;
    printf("Enter Number\n");
    scanf("%d",&ivalue);
    bRet=PerfectOrNot(ivalue);
    if(bRet==YES)
    {
        printf("%d is Perfect Number\n",ivalue);
    }
    else 
    {
        printf("%d is Not a Perfect Number\n",ivalue);
    }
    return 0;
}