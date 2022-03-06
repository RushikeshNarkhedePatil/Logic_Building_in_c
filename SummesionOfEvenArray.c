//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  SummesionOfEvenArray
//  Input:-            2 3 4 5 6
//  Output:-           12
//  Input:-            10 8 7 5 4
//  Output:-           22
//  Discription:-      Accept n number from user and perform the addition of even Number.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 1/10/2019
//  Modification Of Code Date:- 06/3/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int SummesionOfEvenNumber(int arr[],int iLength)
{
    int isum=0,icnt=0;
    if(arr==NULL||iLength<=0)
    {
        return 0;
    }
    for(icnt=0;icnt<iLength;icnt++)
    {
        if(arr[icnt]%2==0)
        {
            isum=isum+arr[icnt];
        }
    }
    return isum;
}
int main()
{
    int isize=0,iCnt=0,iRet=0;
    int *brr=NULL;

    printf("Enter size of element\t");
    scanf("%d",&isize);

    brr=(int *)malloc(isize*sizeof(int));

    if(brr==NULL)
    {
        printf("Unable to allocate memmory\n");
        return -1;
    }
    printf("Enter the element\n");
    for(iCnt=0;iCnt<isize;iCnt++)
    {
        scanf("%d",&brr[iCnt]);
    }

    iRet=SummesionOfEvenNumber(brr,isize);
    printf("The summesion of even number is %d\n",iRet);
    free(brr);
    return 0;
}