//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  Pattern40
//  Input:-            iRow=5   iCol=5          
//  Output:-          *   *   *   *    *           
//                    *   *            *   
//                    *       *        *
//                    *           *    *
//                    *   *   *   *    *
//  Discription:-      Accept Number of Rows and colom from user and Display Pattern.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 26/9/2019
//  Modification Of Code Date:- 05/3/2022
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
    printf("-----------------------------------------------------------------------------------\n");
    for (row=1;row<=iRow;row++)  
    {
        for(col=1;col<=iCol;col++)
        {   
            if((row==1)||(row==iRow)||(col==1)||(col==iCol)||(row==col))
            {
                printf("*\t");
            }
            else
            {
                printf("\t");
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