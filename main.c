/* Write  A program to find a number is odd or even
but without using any arithmetic and relational operators */
// arithmetic : + , - , * , / , %
// relational : == , <= , >= , < ,
// bitwise : & , | , ^

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d" , &a);
    if(!(a&1))
        printf("%d is a Even Number" , a);
    else
        printf("%d is an Odd Number" , a);
    return 0;
}
