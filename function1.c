//"with argument and return value"
#include <stdio.h>
int product(int a, int b);
int main()
{
    int a, b, c;
    a = 6;
    b = 34;
    c = product(a, b);
    printf("the product is :%d\n", c);

    return (0);
}
int product(int a, int b)
{
    return a * b;
}