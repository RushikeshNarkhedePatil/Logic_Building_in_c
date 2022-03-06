//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  SummesionOfArray
//  Input:-            5 5 5 5 5
//  Output:-           25
//  Input:-            10 5 10 20 4
//  Output:-           49
//  Discription:-      Accept n number from user and perform the addition of that n number.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 1/10/2019
//  Modification Of Code Date:- 06/3/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int SummesionOfArray(int arr[],int);
int main()
{
    int isize=0,iRet=0,iCnt=0;
    int *p=NULL;

    printf("Enter Number of element\n");
    scanf("%d",&isize);             //step 1

    //step 2
    p=(int *)malloc(isize*sizeof(int));
    
    if(p==NULL)
    {
        printf("Unable to allocate memmory\n");
        return -1;  //return as a failuar
    }
    printf("Enter elements\n");
    for(iCnt=0;iCnt<isize;iCnt++)
    {
        scanf("%d",&p[iCnt]);       //pointer p is consider as a array and icnt is index array.
    }
    iRet=SummesionOfArray(p,isize);

    printf("addition of number %d\n",iRet);
    free(p);            //step 5  free the allocated memmory

    return 0;
}

int SummesionOfArray(int arr[],int iLength)
{
    int sum=0;
    int icnt=0;
    if(arr==NULL||iLength<=0)
    {
        return 0;   //return as  a success.
    }

    for(icnt=0;icnt<iLength;icnt++)
    {
        sum=sum+arr[icnt];
    }
    return sum;
}