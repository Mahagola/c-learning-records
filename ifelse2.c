#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks\n");
    scanf("%d",&marks);
    printf("Your have entered your marks as %d\n",marks);
    if (marks>=45)
    {
        printf("You are pass in Maths!");
    }
    else if (marks<=15)
    {
        printf("You are fail in Maths!");
        
    }

    return(0);
}