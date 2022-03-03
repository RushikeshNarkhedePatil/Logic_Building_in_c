//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  Pattern19
//  Input:-            iRow=4   iCol=4          
//  Output:-           1       2       3       4
//                     5       6       7       8
//                     9       10      11      12
//                     13      14      15      16                    
//  Discription:-      Accept Number of Rows and colom from user and Display Pattern.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 25/9/2019
//  Modification Of Code Date:- 03/3/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void Pattern1(int iRow,int iCol)           
{
    int row=0,col=0;    //use tow counter row and col
    int icnt=0;
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
        for(col=1;col<=iCol;col++)
        {   
            icnt++;
            printf("%d\t",icnt);
            
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