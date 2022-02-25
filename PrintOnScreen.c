//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  Print$OnScreen
//  Input:-            Integer 2
//  Output:-           $$
//  Discription:-      accept one number from user and print $ number of time
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 4/9/2019
//  Modification Of Code Date:- 25/2/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int No1)
{
    if(No1<0)
    {
        No1=-No1;       //filter for nagative number
    }
    int i=0;
    //using for loop

    // for(i=1;i<=No1;i++)
    // {
    //     printf("$ ");
    // }
    
    // rewrite using while loop
    while (i<No1)
    {
        printf("$ ");
        i++;
    }
    
}
int main()
{
    int ivalue=0;
    printf("Enter Number \n");
    scanf("%d",&ivalue);
    Display(ivalue);
    return 0;
}