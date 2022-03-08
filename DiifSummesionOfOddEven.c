//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  DiifSummesionOfOddEven
//  Input:-            85 66 3 80 93 88
//  Output:-           53 (224-181)
//  Input:-            1 3 2 6 5
//  Output:-           1 (9-8)            
//  Discription:-      Accept n number from user and return difference between sumession of even element and summesion of odd element.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 2/10/2019
//  Modification Of Code Date:- 08/3/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int DiifSummesionOfOddEven(int arr[],int iLength)
{
    int iCnt=0,Diff=0,Even=0,Odd=0;

    if(arr==NULL||iLength<=0)
    {
        return 0;       //return success message
    }
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(arr[iCnt]%2==0)
        {
            Even=Even+arr[iCnt];
        }
        else
        {
            Odd=Odd+arr[iCnt];
        }
        
    }
    return Even-Odd;
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
    iRet=DiifSummesionOfOddEven(brr,isize);
    printf("Difference of Even Odd Number is %d\n",iRet);

    free(brr);      //deallocate the memmory
    return 0;
}

