#include<stdio.h>
int main()
{
    int ganbare;
    printf("Enter your ganbare\n");
    scanf("%d",&ganbare);
    printf("Your have entered your ganbare lvl as %d\n",ganbare);
    if (ganbare>=50)
    {
        printf("You are ganbatta!");
    }
    else if (ganbare<50)
    {
        printf("You are innocent");
        
    }

    return(0);
}