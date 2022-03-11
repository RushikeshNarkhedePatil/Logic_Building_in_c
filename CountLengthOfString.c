//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  CountLengthOfString
//  Input:-            abcd     |abc xyz
//  Output:-           4        |7
//  Discription:-      Accept string from user and calculate length of string.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 8/10/2019
//  Modification Of Code Date:- 11/3/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int strlenX(char *str)
{
    int icnt=0;
    if(str==NULL)
    {
        return -1;
    }
    while (*str>'\0')
    {
        str++;
        icnt++;
    }
    return icnt;
}

int main()
{
    char arr[10];
    int iRet=0;
    printf("enter string\n");
    scanf("%[^'\n']s",arr);    //another way  scanf("%[^\n]%*c", arr);
    iRet=strlenX(arr);
    printf("String length is %d ",iRet);
    return 0;
}