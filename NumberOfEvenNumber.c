//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  NumberOfEvenNumber
//  Input:-            7
//  Output:-           2 4 6 8 10 12 24
//  Input:-            -15
//  Output:-           1 3 5
//  Discription:-      Accept One Number From User and print that number of even number on screen.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 9/9/2019
//  Modification Of Code Date:- 26/2/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void NumberOfEvenNumber(int No)
{
    int icnt=0;
    int sum=2;
    if(No<0)
    {
        No=-No;
    }
    for(icnt=1;icnt<=No;icnt++)
    {
        if(sum%2==0)
        {
            printf("%d  ",sum);
        }
        sum=sum+2;
    
    }
}
int main()
{
    int ivalue=0;
    printf("Enter First Number\n");
    scanf("%d",&ivalue);
    NumberOfEvenNumber(ivalue);
    return 0;
}