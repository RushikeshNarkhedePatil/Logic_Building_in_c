//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  FrequencyOf11No
//  Input:-            5                    |   6
//  Element            10,11,15,14,8        |   11 22 33 44 55 66
//  Number             10                   |   12
//  Output:-           TRUE                 |   FALSE
//  Discription:-      Accept N Number from user and accept one another number as No and check wether No pressent or Not.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 2/10/2019
//  Modification Of Code Date:- 09/3/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Occurence means index No of that particular number
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckNoPresentInArrayOrNot(int arr[],int iLength,int No)
{
    
    int iCnt=0,Count=0;
    if(arr==NULL||iLength<=0)
    {
        return 0;
    }
    
    for(iCnt=1;iCnt<iLength;iCnt++)
    {
        if(arr[iCnt]==No)
        {
            break;
        }
    }
    return TRUE;
}
int main()
{
    int isize=0,iCnt=0;
    BOOL bRet=FALSE;
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
    printf("Enter Numbe\n");
    scanf("%d",&iValue);
    bRet=CheckNoPresentInArrayOrNot(brr,isize,iValue);
    if(bRet==TRUE)
    {
        printf("Number is present in given array\n");
    } 
    else
    {
        printf("Number is Not Present in given array\n");
    }
    free(brr);      //deallocate the memmory
    return 0;
}

