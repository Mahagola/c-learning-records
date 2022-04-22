#include<stdio.h>
int main()
{ 
     int age;
     int marks;
       printf("Enter your age\n");
       scanf("%d",&age);


       printf("Enter your marks\n");
       scanf("%d",&marks);
   switch (age)
   {
     case 14:
       printf("Your age is 14\n");
       break;
     case 23:
       printf("Your age is 23\n");
       break;
     case 45:
       printf("Your age is 45\n");

     switch (marks)
       {
         case 98:
                printf("your marks is 98\n");
                 break;
             
             default:
                printf("Your marks is not 98\n");
                 break;
       } 
       break;


     default:
       printf("Your age is not 14,23 or 45\n");
       break;
   }
   return(0);
}
