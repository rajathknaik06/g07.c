/*Purnima is exploring bitwise operations and wants to understand how left and right shifts affect a given integer. 



Design a program that accomplishes the following:

Prompt the user to enter an integer x.
Print the original value of x.
Calculate and print the result of left-shifting x by 1 position.
Calculate and print the result of right-shifting x by 1 position.


Help Purnima understand the changes in the binary representation of x after these bitwise operations.

Input format :
The input consists of an integer x.

Output format :
The first line prints "x=" followed by the input integer.

The second line prints "x << 1 = " followed by the result of the left shift operation.

The third line prints "x >> 1 = " followed by the result of the right shift operation.*/



#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    
    
    printf("x= %d\n", x);
    printf("x << 1 = %d\n",x << 1);           //5
    printf("x >> 1 = %d\n",x >> 1);
    
    return 0;
}
