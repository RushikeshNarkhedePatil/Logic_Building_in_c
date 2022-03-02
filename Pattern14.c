//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  Pattern13
//  Input:-            iRow=3   iCol=5          
//  Output:-           54321
//                     54321
//                     54321
//  Discription:-      Accept Number of Rows and colom from user and Display Pattern.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 25/9/2019
//  Modification Of Code Date:- 02/3/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void Pattern1(int iRow,int iCol)           
{
    int row=0,col=0;    //use tow counter row and col
    if (iRow<0)     //updator nagative rows value convert to positive
    {
        iRow=-iRow;
    }
    if (iCol<0)     //updator nagative Col value convert to positive
    {
        iCol=-iCol;
    }
    
    for (row=1;row<=iRow;row++)  
    {
        for(col=iCol;col>=1;col--)
        {
            printf("%d",col);
        }
        printf("\n");
    } 
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