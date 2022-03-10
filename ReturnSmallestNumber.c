//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  ReturnSmallestNumber
//  Input:-            5                    |   6
//  Element            10,11,15,14,8        |   11 22 33 44 55 66
//  Output:-           8                    |   11
//  Discription:-      Accept N Number from user and Return Smallest(minimum) Number.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 3/10/2019
//  Modification Of Code Date:- 10/3/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int SmallestNumber(int arr[],int iLength)
{
    
    int iCnt=0,Smallest=0;
    if(arr==NULL||iLength<=0)
    {
        return 0;
    }
    Smallest=arr[0];
    for(iCnt=1;iCnt<iLength;iCnt++)
    {
        if(arr[iCnt]<Smallest)
        {
            Smallest=arr[iCnt];
        }
    }
    return Smallest;
}
int main()
{
    int isize=0,iCnt=0;
    int iRet=0;
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
    iRet=SmallestNumber(brr,isize);
    printf("Smallest Number is %d",iRet);
    free(brr);      //deallocate the memmory
    return 0;
}

