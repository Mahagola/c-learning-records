//"with argument and without return value"
#include <stdio.h>
void printstar(int n)
{
   
  for (int i = 0; i < n; i++)
  {
      printf("%c",'*');
  }
  
 
}
int main()
{
    printstar(8);
    return (0);
}