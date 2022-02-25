//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  NumberLessThan10
//  Input:-            Integer  9
//  Output:-           Hello
//  Input:-            11
//  Output:-           Demo
//  Discription:-      Accept one number from user if number is less than 10 then print Hello Otherwise Demo.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 5/9/2019
//  Modification Of Code Date:- 25/2/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int No)
{
    if(No<10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }
}
int main()
{
    int ivalue=0;
    printf("Enter Number\n");
    scanf("%d",&ivalue);
    Display(ivalue);
    return 0;
}