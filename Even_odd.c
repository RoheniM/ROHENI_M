#include<stdio.h>
int main()
{
  int n,i,j;
  printf("Enter n:");
  scanf("%d",&n);
  printf("The odd numbers are:\n");
  for(i=1;i<=n;i=i+2)
  
  {
    printf("%d\n",i);
  }
  printf("The even numbers are:\n");
  for(j=0;j<=n;j=j+2)
  
  {
    printf("%d\n",j);
  }
  return 0;
}