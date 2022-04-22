// with return and without argument value
#include <stdio.h>
int mynumber()
{
    int i;
    printf("enter a number:");
    scanf("%d", &i);
    return i;
}
int main ()
{
    int j;
    j = mynumber();
    printf("the entered number is:%d\n", j);
    return (0);
}
