//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  ReturnFrequencyOfNo
//  Input:-            85 66 3 80 93 88
//  Output:-           80
//  Input:-            5 10 2 6 8
//  Output:-           10            
//  Discription:-      Accept N element from user as well as accept one element as no and return the frequency of that variable.
//                     no from the N number.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 2/10/2019
//  Modification Of Code Date:- 08/3/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int ReturnFrequencyOfNo(int no,int arr[],int iLength)
{
    
    int iCnt=0,count=0;
    if(arr==NULL||iLength<=0)
    {
        return 0;           // success
    }
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(arr[iCnt]==no)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int isize=0,iRet=0,iCnt=0;
    int iValue=0;   //frequency number to find and count fron N number
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
    printf("Enter the element which are search\n");
    scanf("%d",&iValue);
    iRet=ReturnFrequencyOfNo(iValue,brr,isize);
    printf("frequency of Number %d is %d",iValue,iRet);
    free(brr);      //deallocate the memmory
    return 0;
}

