//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  Pattern34
//  Input:-            iRow=4   iCol=4          
//                     A    B   C   D   
//                     1    2   3   4
//                     A    B   C   D         
//  Output:-           1    2   3   4     
//  Discription:-      Accept Number of Rows and colom from user and Display Pattern.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 26/9/2019
//  Modification Of Code Date:- 05/3/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void Pattern1(int iRow,int iCol)           
{
    int row=0,col=0;    //use tow counter row and col
    char ch='\0';
    
    if (iRow<0)     //updator nagative rows value convert to positive
    {
        iRow=-iRow;
    }
    if (iCol<0)     //updator nagative Col value convert to positive
    {
        iCol=-iCol;
    }
    printf("-----------------------------------------------------------------------------------\n");
    // for (row=1;row<=iRow;row++)  
    // {
    //     ch='A'; //use ch=65; also
    //     for(col=1;col<=iCol;col++)
    //     {   
    //        if(row%2==1)         //odd number sathi karan je odd row asel tithe print A B C D
    //        {
    //             printf("%c\t",ch);
    //             ch++;
    //        }
    //        else                 //Otherwise Print 1 2 3 4
    //        {
    //            printf("%d\t",col);
    //        }
           
    //     }
    //      printf("\n");
    // }

    //Second way To Print Pattern

    for (row=1;row<=iRow;row++)  
    {
        for(col=1;col<=iCol;col++)
        {   
           if(row%2==0)         //check even rows and print  1 2 3 4
           {
                printf("%d\t",col);
           }
           else                 //Otherwise Print A B C D
           {
               for(col=1,ch='A';col<=iCol;col++,ch++)
               {
                   printf("%c\t",ch);
               }
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