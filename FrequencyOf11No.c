//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  FrequencyOf11No
//  Input:-            5
//  Element            10,11,15,14,8
//  Output:-           1          
//  Discription:-      Accept No from user and return frequency of 11 from it.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 2/10/2019
//  Modification Of Code Date:- 09/3/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Occurence means index No of that particular number
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int ReturnLastOccurence(int arr[],int iLength)
{
    
    int iCnt=0,Count=0;
    if(arr==NULL||iLength<=0)
    {
        return 0;
    }
    
    for(iCnt=1;iCnt<iLength;iCnt++)
    {
        if(arr[iCnt]==11)
        {
            Count++;
        }
    }
    return Count;
}
int main()
{
    int isize=0,iRet=0,iCnt=0;
    int iValue=0;   //occurence number to find and count fron N number
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
    iRet=ReturnLastOccurence(brr,isize);
    printf("Frequency of 11 Number is  %d\n",iRet);   
    free(brr);      //deallocate the memmory
    return 0;
}

