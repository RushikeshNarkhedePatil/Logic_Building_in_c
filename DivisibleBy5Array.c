//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  DivisibleBy5Array
//  Input:-            85 66 3 80 93 88
//  Output:-           85 80
//  Input:-            5 10 2 6 8
//  Output:-           5 10            
//  Discription:-      Accept n number from user and display all such elements which are divisible by 5.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 2/10/2019
//  Modification Of Code Date:- 08/3/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

void DivisibleBy5Array(int arr[],int iLength)
{
    
    int iCnt=0;
    printf("Number Divisible by 5 are \n");
    if(arr==NULL||iLength<=0)
    {
        printf("%d",0);
    }
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(arr[iCnt]%5==0)
        {
            printf("%d\t",arr[iCnt]);
        }
    }
}
int main()
{
    int isize=0,iRet=0,iCnt=0;
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
    DivisibleBy5Array(brr,isize);
    free(brr);      //deallocate the memmory
    return 0;
}

