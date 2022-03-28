#include <stdio.h>
#include <stdlib.h>
// SESSION 1 ( Hello C - Data Types)
// a program that take a number from user using scanf,
int main()
{
    int X ,Y ;

    printf(" Please Enter The Number \n");

    scanf("\n %d",&X);

    Y = X/2 ;

    if(X == Y*2)

    printf("\n The number is odd = 0 \n The number is even = 1");

    else

    printf("\n The number is odd = 1 \n The number is even = 0");

    return 0;
}
