#include <stdio.h>
int main()
{
    int num, i=1;
    printf("Enter a number\n");
    scanf("%d",&num);

    do
    {
        printf("%d X %d = %d\n",num,i,num*i);
        i = i + 1;
    } while (i <= 10);

    return (0);
}