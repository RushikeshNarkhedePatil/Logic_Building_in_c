//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  EvenFactor
//  Input:-            24
//  Output:-           1 2 4 8 12
//  Input:-            -15
//  Output:-           1 3 5
//  Discription:-      Accept One Number From User and print that number of even Factor.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 9/9/2019
//  Modification Of Code Date:- 26/2/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void EvenFactor(int No)
{
    int icnt=0;
    if(No<0)
    {
        No=-No;
    }
    for(icnt=1;icnt<No;icnt++)
    {
        if((No%icnt)==0&&(icnt%2==0))   //factor logic No%icnt==0 Even Logic No%2==0 
        {
            printf("%d  ",icnt);
        }
    }

}
int main()
{
    int ivalue=0;
    printf("Enter Number\n");
    scanf("%d",&ivalue);
    EvenFactor(ivalue);
    return 0;
}