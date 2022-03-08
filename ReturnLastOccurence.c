//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  ReturnLastOccurence
//  Input:-            5
//  Element            10,11,15,14,8
//  Value              11
//  Output:-           4          
//  Discription:-      Accept No fro user as well as accept one No and return the Last occurence of that number.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 2/10/2019
//  Modification Of Code Date:- 08/3/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Occurence means index No of that particular number
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int ReturnLastOccurence(int no,int arr[],int iLength)
{
    
    int iCnt=0,count=0;
    if(arr==NULL)
    {
        return -1;
    }
    if (iLength<=0)
    {
        return -2;
    }
    
    for(iCnt=iLength-1;iCnt<iLength;iCnt--)
    {
        if(arr[iCnt]==no)
        {
            break;
        }
    }
    if (iCnt==iLength)
    {
        return -3;
    }
    else
    {
        return iCnt;
    }
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
    printf("Enter the element which are search\n");
    scanf("%d",&iValue);
    iRet=ReturnLastOccurence(iValue,brr,isize);
    if(iRet==-1)
    {
        printf("Error: memmory failuar\n");
    }
    else if(iRet==-2)
    {
        printf("Error: size failuar\n");
    }
    else if(iRet==-3)
    {
        printf("Error: There is no such element\n");
    }
    else
    {
        printf("Success: Element Occurence at %d\n",iRet);   
    }
    free(brr);      //deallocate the memmory
    return 0;
}

