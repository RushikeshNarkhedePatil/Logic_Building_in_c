//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  DiffSmallestAndLargestNo
//  Input:-            5                    |   6
//  Element            10,11,15,14,8        |   11 22 33 44 55 66
//  Output:-           7                    |   55
//  Discription:-      Accept N Number from user and Return Difference bitween Lanrgest and Smallest(minimum) Number.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 3/10/2019
//  Modification Of Code Date:- 10/3/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int DiffSamlestLargest(int arr[],int iLength)
{
    
    int iCnt=0,Smallest=0,Large,Diff;
    if(arr==NULL||iLength<=0)
    {
        return 0;
    }
    Smallest=arr[0];
    Large=arr[0];
    for(iCnt=1;iCnt<iLength;iCnt++)
    {
        if(arr[iCnt]<Smallest)  //arr[iCnt] jar small asel smallest peksha tar if chya aat jaun smallest madhe store hoil.
        {
            Smallest=arr[iCnt];
        }
        else                    //jar number largest asel tar else madhe jail v large madhe value store hoil.
        {
            Large=arr[iCnt];
        }
        
    }
    return Large-Smallest;  //return difference bitween smallest and largest number
}
int main()
{
    int isize=0,iCnt=0;
    int iRet=0;
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
    iRet=DiffSamlestLargest(brr,isize);
    printf("Difference bitween smallest and Largest Number is : %d",iRet);
    free(brr);      //deallocate the memmory
    return 0;
}

