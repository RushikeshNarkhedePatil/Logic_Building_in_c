//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  Print5To1
//  Input:-            -
//  Output:-           5
//                     4
//                     3
//                     2
//                     1
//  Discription:-      Print 5 To 1 on screen.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 4/9/2019
//  Modification Of Code Date:- 25/2/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    int i=5;
    while (i>0)         //use i>=1 || i!=0 this two condition also applicable in while loop
    {
        printf("%d\n",i);
        i--;
    }
    
}
int main()
{
    Display();
}