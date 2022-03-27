#include<stdio.h>
int input_number()
{
  int k;
  printf("Enter any value\n");
  scanf("%d",&k);
  return k;
}
int is_prime(int n)
{
  for(int i=2;i<=n/2;i++)
    {
      if(n%i==0)
        return 1;
    }
  return 0;
}
void output(int n, int is_prime)
{
  
  if(is_prime==1)
    printf("%d is not a prime number\n",n);
  else
    printf("%d is a prime number\n",n);
}
int main()
{
  int n,a;
  n=input_number();
  a=is_prime(n);
  output(n,a);
  return 0;
}