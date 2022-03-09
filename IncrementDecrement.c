//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  IncrementDecrement
//  Input:-            5                    |   6
//  Element            10,11,15,14,8        |   11 22 33 44 55 66
//  Output:-           14 8  12 18 12       |   8  26 30 48 52 70
//  Discription:-      Accept N Number from user and Update that number in such way
//                     if number is even then incrementits value by 4. if number odd Then decrement by 3.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 2/10/2019
//  Modification Of Code Date:- 09/3/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

void IncrementDecrement(int arr[],int iLength)
{
    int iCnt=0,even=0,odd=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(arr[iCnt]%2==0)
        {
            printf("%d\t",arr[iCnt]+4);
        }
        else
        {
            printf("%d\t",arr[iCnt]-3);
        }
        
    }
}
int main()
{
    int isize=0,iCnt=0;
    int *brr=NULL;

    printf("Enter number of element\n");
    scanf("%d",&isize);

    brr=(int *)malloc(isize*sizeof(int));
    if(brr==NULL)
    {
        printf("Unable to allocate memmory\n");
        return -1;
    }
    printf("Enter elements\n");
    for(iCnt=0;iCnt<isize;iCnt++)
    {
        scanf("%d",&brr[iCnt]);
    }
    IncrementDecrement(brr,isize);
    free(brr);
    return 0;
}
