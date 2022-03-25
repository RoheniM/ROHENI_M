#include <stdio.h>

int main() 
{
  int a,b;
  float c;
  char op;
  printf("\n Enter two numbers:\n") ;
  scanf("%d%d" ,&a,&b);
  printf("Enter the operation required:   \n");
  scanf(" %c", &op);
  
  if(op=='+')
  {
   c=a+b;

  }
  else if(op=='-')
  {
    c=a-b;

  }
  else if(op=='*')
  {
    c=a*b;

  }
  else if (op=='/')
  {
    if(b==0)
    {
     printf("The denominator cannot be Zero.\n");
     return 1;
    }
    else
    {
      c=a/b;
    }

  }
  else if (op=='%')
  {
    if(b==0)
    {
     printf("The denominator cannot be Zero.\n");
     return 1;
    }
    else
    {
      c=a%b;
    }
  }
  else 
  {
    printf("Invalid output");
    return 1;

  } 
  printf("The answer is: \n %f ",c);
  return 0;
}