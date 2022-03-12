//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  CountLengthOfString
//  Input:-            abcd     |abc ayz
//  Output:-           1        |2
//  Discription:-      Accept string from user and return frequency of A character.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 8/10/2019
//  Modification Of Code Date:- 12/3/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int frequency(char *str)
{
    int icnt=0;
    if(str==NULL)
    {
        return -1;
    }
    while (*str>'\0')
    {
        
        if(*str=='a')
        {
            icnt++;
        }
        str++;
    }
    return icnt;
}

int main()
{
    char arr[10];
    int iRet=0;
    printf("enter string\n");
    scanf("%[^'\n']s",arr);    //another way  scanf("%[^\n]%*c", arr);
    iRet=frequency(arr);
    printf("String length is %d ",iRet);
    return 0;
}