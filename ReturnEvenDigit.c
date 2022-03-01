//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  CountOfEvenDigit
//  Input:-            753      |275
//  Output:-           0        |2
//  Input:-            2016     |-2617
//  Output:-           12       |12
//  Discription:-      Accept Number From user and return Multiplication Even Digit.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 20/9/2019
//  Modification Of Code Date:- 01/3/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountEvenDigit(int No)
{
    int iDigit=0,iMult=1;

    if(No<0)
    {
        No=-No;
    }

    while(No!=0)
    {
        iDigit=No%10;
        if((iDigit%2)==0&&(iDigit!=0))  //aplyala fakt even digit chi multiplication karaychi ahe mag ata tumhi mhanal
        {                               //jar as ahe tar mag && karun !=0 chi condition ka dili tar ti hya sathi dili
            iMult=iMult*iDigit;         //ki jar digit 0 asala tar tyacha multiplication la kahi fark padnar nahi tyasathi hi condition takli.
        }
        No=No/10;
    }
    if(iMult==1)
    {
        iMult=0;    //jar iMult 1 asel yacha arth ek pan even digit nahi karan apan all redy iMult=1 kela ahe.
    }               //jar apan ethe yala 0 kela nahi tar return 1 honar ani answer chuknar.
    return iMult;
}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter Number\n");
    scanf("%d",&iValue);
    iRet=CountEvenDigit(iValue);
    printf("%d This Number Contain Multiplication of Even Digit is %d",iValue,iRet);
    return 0;
}