//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  EvenFactor
//  Input:-            E
//  Output:-           TRUE
//  Input:-            d
//  Output:-           FALSE
//  Discription:-      Accept character from user and check wether that character is vowel (a e i o u) Or Not.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 9/9/2019
//  Modification Of Code Date:- 26/2/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkVowel(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    BOOL bRet=FALSE;
    char cvalue='\0';
    printf("Enter Character\n");
    scanf("%c",&cvalue);
    bRet=ChkVowel(cvalue);
    if (bRet==TRUE)
    {
        printf("Number is Vowel\n");
    }
    else
    {
        printf("Number is Not Vowel\n");
    }
    
    return 0;
}