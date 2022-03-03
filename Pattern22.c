//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  Pattern22
//  Input:-            iRow=4   iCol=4          
//  Output:-           4    4   4   4           
//                     3    3   3   3           
//                     2    2   2   2
//                     1    1   1   1                    
//  Discription:-      Accept Number of Rows and colom from user and Display Pattern.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 25/9/2019
//  Modification Of Code Date:- 03/3/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void Pattern1(int iRow,int iCol)        //iRow=4    icol=4         
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
    // icnt=iRow;              //icnt=iRow   means icnt=4 in this example
    // for (row=1;row<=iRow;row++)  
    // {
    //     for(col=iRow;col>=1;col--)
    //     {   
    //         printf("%d\t",icnt);      
    //     }
    //     icnt--;         //icnt-- means 4 3 2 1  every iteration icnt -1
    //     printf("\n");
    // } 
//without using icnt
    for (row=iRow;row>=1;row--)             //4 3 2 1
    {
        for(col=1;col<=iCol;col++)
        {   
            printf("%d\t",row);      
        }
        printf("\n");
    } 
}
int main()              //Entry Point Function
{
    int iValue1=0,iValue2=0;
    printf("Enter Rows Value\n");
    scanf("%d",&iValue1);
    printf("Enter Col Value\n");
    scanf("%d",&iValue2);
    Pattern1(iValue1,iValue2);
    return 0;
}