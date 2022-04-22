#include <stdio.h>
int main()
{
    int marks[2][4] = {{234, 54, 53, 6},
                       {34, 7, 53, 2}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("The value of %d %d array is %d\n", i, j, marks[i][j]);
        }
    }
    return (0);
}