//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  SummessionOfDigit
//  Input:-            5                    |   6
//  Element            10,11,15,14,8        |   11 22 33 44 55 66
//  Output:-           1  2  6  5  8        |   2   4  6  8 10 12
//  Discription:-      Accept N Number from user and display summesion of digit.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 3/10/2019
//  Modification Of Code Date:- 10/3/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

void Display(int arr[],int iLength)
{
    
    int iCnt=0,iDigit=0,sum=0,iValue=0;

    printf("Summesion of digit\n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        sum=0;
        iValue=arr[iCnt];
        while (iValue!=0)
        {
            iDigit=iValue%10;
            sum=sum+iDigit;
            iValue=iValue/10;
        }
        printf("%d\t",sum);
    }
}
int main()
{
    int isize=0,iCnt=0;
    int *brr=NULL;          //create pointer as NULL
    
    printf("Enter size of element\n");
    scanf("%d",&isize);

    brr=(int *)malloc(isize*sizeof(int));
    if(brr==NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;          //return error message
    }
    printf("Enter elements\n");
    for(iCnt=0;iCnt<isize;iCnt++)
    {
        scanf("%d",&brr[iCnt]);
    }
    Display(brr,isize);
    free(brr);      //deallocate the memmory
    return 0;
}

