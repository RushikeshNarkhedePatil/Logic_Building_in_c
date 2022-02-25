//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  AcceptOneCharacterAndNumber
//  Input:-            character Integer  M  5
//  Output:-           M M M M M
//  Discription:-      accept one number and character from user and print character number of time
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 4/9/2019
//  Modification Of Code Date:- 25/2/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void AcceptOneCharacterAndNumber(char ch,int No1)
{
    if(No1<0)
    {
        No1=-No1;       //filter for nagative number updator
    }
    int i=0;
    //using for loop

    for(i=1;i<=No1;i++)
    {
        printf("%c ",ch);
    }
    
}
int main()
{
    int ivalue=0;
    char ch='\0';
    printf("Enter character\n");
    scanf("%c",&ch);
    printf("Enter Number \n");
    scanf("%d",&ivalue);
    AcceptOneCharacterAndNumber(ch,ivalue);
    return 0;
}