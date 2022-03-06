//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  SummesionOfOddArray
//  Input:-            2 3 4 5 6
//  Output:-           8
//  Input:-            10 8 7 5 4
//  Output:-           12
//  Discription:-      Accept n number from user and perform the addition of even Number.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 1/10/2019
//  Modification Of Code Date:- 06/3/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int SummesionOfOddArray(int arr[],int iLength)
{
    int sum=0,icnt=0;

    if(arr==NULL||iLength<=0)
    {
        return 0;
    }

    for(icnt=0;icnt<iLength;icnt++)
    {
        if(arr[icnt]%2==1)  //find odd number
        {
            sum=sum+arr[icnt];
        }
    }
    return sum;
}
int main()
{
    int isize=0,iCnt=0,iRet=0;
    int *brr=NULL;

    printf("Enter number of element\n");
    scanf("%d",&isize);

    brr=(int *)malloc(isize*sizeof(int));

    if(brr==NULL)
    {
        printf("unable to allocate memory\n");
        return -1;
    }
    printf("Enter element\n");
    for(iCnt=0;iCnt<isize;iCnt++)
    {
        scanf("%d",&brr[iCnt]);
    }
    iRet=SummesionOfOddArray(brr,isize);
    printf("Summesion of odd number is %d\n",iRet);
    free(brr);
}