//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  PrimeOrNot
//  Input:-            5        | 11
//  Output:-           YES      |YES
//  Input:-            -5       |-10
//  Output:-           YES      |YES
//  Discription:-      Accept One Number From User and Check wether Number is prime or not.
//                     Prime Number such a number without any factor accept one and the number itself.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 11/9/2019
//  Modification Of Code Date:- 27/2/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;       //int la dilel navin nav.

BOOL PrimeOrNot(int No)
{
    int icnt=0;
    int flag=TRUE;
    if((No==1)||(No==0)||(No==-1))
    {
        return FALSE;
    }
    if(No<0)
    {
        No=-No;     //updator nagative to positive
    }
    // for(icnt=No/2;icnt>1;icnt--)        //jo number fakt 1 ne kinva swata tyach number ne purn pane divide hoto tyala prime number mhanta
    // {                                   //aplya ya program madhe for loop madhe icnt=No/2 kel ahe yacha arth number 2 ne divide hoto
    //     flag=FALSE;                     //yacha arth number prime nahi mhanun ethe apan flag FALSE karun break kel. v return FLASE gel
    //     break;
    // }
    // return TRUE;

//prime or not without using flag.
    for(icnt=No/2;icnt>1;icnt--)
    {
        if(No%icnt==0)
        {
            break;
        }
    }
    if(icnt==1)
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
    int ivalue=0;
    BOOL bRet=FALSE;

    printf("Enter Number\n");
    scanf("%d",&ivalue);
    bRet=PrimeOrNot(ivalue);
    if (bRet==TRUE)
    {
        printf("Number is Prime Number\n");
    }
    else
    {
        printf("Number is Not Prime\n");
    }
    
}