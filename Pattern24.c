//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  Pattern24
//  Input:-            iRow=4   iCol=5          
//  Output:-           2    4   6   8   10      11 12 13 14 15
//                     1    3   5   7   9       21 22 23 24 25
//                     2    4   6   8   10      31 32 33 34 35
//                     1    3   5   7   9       41 42 43 44 45              
//  Discription:-      Accept Number of Rows and colom from user and Display Pattern.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 26/9/2019
//  Modification Of Code Date:- 03/3/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void Pattern1(int iRow,int iCol)           
{
    int row=0,col=0;    //use tow counter row and col
    int Even=0,Odd=0;
    if (iRow<0)     //updator nagative rows value convert to positive
    {
        iRow=-iRow;
    }
    if (iCol<0)     //updator nagative Col value convert to positive
    {
        iCol=-iCol;
    }
    printf("-----------------------------------------------------------------------------------\n");
    for (row=1;row<=iRow;row++)  
    {
        Even=2;
        Odd=1;
        for(col=1;col<=iCol;col++)
        {   
           if(row%2==1)
           {
               printf("%d\t",Even);
               Even+=2;
           }
           else
           {
               printf("%d\t",Odd);
               Odd+=2;
           }  
        }
         printf("\n");
    } 
    printf("-----------------------------------------------------------------------------------\n");
    
}
int main()
{
    int iValue1=0,iValue2=0;
    printf("Enter Rows Value\n");
    scanf("%d",&iValue1);
    printf("Enter Col Value\n");
    scanf("%d",&iValue2);
    Pattern1(iValue1,iValue2);
    return 0;
}