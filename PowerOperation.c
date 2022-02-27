//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  FactorReverceOrder
//  Input:-            10 2
//  Output:-           100
//  Input:-            -10 2
//  Output:-           100
//  Discription:-      Program which is used to perform power operation. we have to accept two value.
//                     as X and Y and return the XY.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 11/9/2019
//  Modification Of Code Date:- 27/2/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned long int ULONG;

 ULONG Power(int No1,int No2)
 {
     int icnt=0;
     ULONG iMult=1;
     if(No1<0)
     {
         No1=-No1;
     }
     if(No2<0)
     {
         No2=-No2;
     }
     for(icnt=1;icnt<=No2;icnt++)
     {
        //  printf("Imult %d No1 %d",iMult,No1);
         iMult=iMult*No1;
         
     }
     return iMult;
 }
 int main()
 {
     ULONG iRet=0;
     int ivalue1,ivalue2;
     printf("Enter First Number\n");
     scanf("%d",&ivalue1);
     printf("Enter Second Number\n");
     scanf("%d",&ivalue2);
     iRet=Power(ivalue1,ivalue2);
     printf("Result is %ld",iRet);
 }