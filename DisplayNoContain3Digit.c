//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  DisplayNoContain3Digit
//  Input:-            5                    |   6
//  Element            10,11,15,141,8       |   11 22 333 44 55 662
//  Output:-           141                  |   333 662
//  Discription:-      Accept N Number from user and display all such member which contain 3 digit in it.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 3/10/2019
//  Modification Of Code Date:- 10/3/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

void Display(int arr[],int iLength)
{
    
    int iCnt=0,iDigit=0,count=0,iValue=0;

    printf("Number Contain 3 Digit in it\n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        count=0;
        iValue=arr[iCnt];
        while (iValue!=0)
        {
            iValue=iValue/10;
            count++;
        }
        if(count==3)
        {
            printf("%d\t",arr[iCnt]);
        }
        
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

