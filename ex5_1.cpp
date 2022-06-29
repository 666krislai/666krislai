#include <stdio.h>

int main()
{  int a,i,j,k ;
   printf("Enter height of an isosceles triangle: ");
   scanf("%d",&a);
   for (i=1; i<=a ; i++)
     {   
          printf("\n");
          for(j=a; j>i ; j--)
              {
              printf(" ");
              }
          for (j=1; j<=i ; j++)
              {   
                printf("*");
              }
          for (k=2;k<=i;k++)
              {  
                printf("*");
              }
     }

   // printf("\n"); 
    return 0;
}


