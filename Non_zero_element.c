//program to print non-zero elements

#include<stdio.h>

int main()
{
  int n,i,a[20],count=0;
  scanf("%d",&n);
  
  for (i=0;i<n;i++)
  {
    scanf("%d", &a[i]);
   }

   for (i=0;i<n;i++)
   {
     if  (a[i] != 0)
     {
       printf("%d", &a[i]);
       count++;
      }
    }

    for(j=0; j< n-count; j++)
    {
      printf("0 ");
     }
     return 0;
}