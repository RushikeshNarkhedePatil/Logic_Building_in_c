//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  EvenFactor
//  Input:-            a
//  Output:-           A
//  Input:-            D
//  Output:-           d
//  Discription:-      Accept character from user and convert case of character.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 9/9/2019
//  Modification Of Code Date:- 26/2/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void DisplayConvert(char ch)
{
    if(ch>='A'&&ch<='Z')
    {
        ch=ch+32;   //difference 32 on Capital A to small a
        printf("%c",ch);
    }
    else if (ch>='a'&&ch<='z')
    {
        ch=ch-32;   //difference -32 on small a to capital A
        printf("%c",ch);
    }
    
    
}
int main()
{
    char cvalue='\0';
    printf("Enter Character\n");
    scanf("%c",&cvalue);
    DisplayConvert(cvalue);
    return 0;
}