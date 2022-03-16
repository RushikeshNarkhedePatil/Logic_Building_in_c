//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  DisplayASCIITable
//  Input:-            9        |A
//  Output:-           FALSE    |FALSE
//  Input:-            d
//  Output:-           TRUE
//  Discription:-      Write a program which displays ASCII Table. Table cntain symboll, decimal, hexadecimal, and octal
//                     representation of every member from 0 to 255.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 9/10/2019
//  Modification Of Code Date:- 16/03/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void DisplayASCII()
{
    int iCnt=0;
    char ch='0';
    for(iCnt=0;iCnt<=255;iCnt++)
    {
        printf("%c=%d\n",iCnt,iCnt);
    }
}
int main()
{
    DisplayASCII();
    return 0;
}