//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  DisplayNoBitweenRange
//  Input:-            5                    |   6
//  Element            10,11,15,14,8        |   11 22 33 44 55 66
//  start              10                   |   12
//  end                40                   |   40
//  Output:-           10 11 15 14 8        |   33
//  Discription:-      Accept N Number from user and accept Two another number as start and end and Display Bitween Range.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 2/10/2019
//  Modification Of Code Date:- 09/3/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

void DisplayNoBitweenRange(int arr[],int iLength,int satrt,int end)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(arr[iCnt]>=satrt&&arr[iCnt]<=end)
        {
            printf("%d ",arr[iCnt]);
        }
    }
}
int main()
{
    int iCnt=0,isize=0,iValue1=0,iValue2=0;
    int *brr=NULL;
    printf("Enter no of Element\n");
    scanf("%d",&isize);

    brr=(int *)malloc(isize*sizeof(int));
    if(brr==NULL)
    {
        printf("Unable To allocate memmory\n");
        return -1;
    }
    printf("Enter elements\n");
    for(iCnt=0;iCnt<isize;iCnt++)
    {
        scanf("%d",&brr[iCnt]);
    }
    printf("Enter Starting Range\n");
    scanf("%d",&iValue1);
    printf("Enter End Range\n");
    scanf("%d",&iValue2);
    DisplayNoBitweenRange(brr,isize,iValue1,iValue2);
    free(brr);      //deallocate the memmory
    return 0;
}