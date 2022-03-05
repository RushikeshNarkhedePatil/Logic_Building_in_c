//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  Pattern26
//  Input:-            iRow=5   iCol=5          
//  Output:-           a    b   c   d   e     
//                     1    2   3   4   5  
//                     a    b   c   d   e  
//                     1    2   3   4   5               
//  Discription:-      Accept Number of Rows and colom from user and Display Pattern.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 26/9/2019
//  Modification Of Code Date:- 05/3/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void Pattern1(int iRow,int iCol)           
{
    int row=0,col=0;    //use tow counter row and col
    char Character='\0';
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
        Character='a';
        for(col=1;col<=iCol;col++)
        {   
           if(row%2==1)     //odd digit sathi
           {
               printf("%c\t",Character);
               Character++;
           }
           else
           {
               printf("%d\t",col);
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