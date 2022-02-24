#include<stdio.h>
int input_number()
{
  int x;
  printf("Enter any value\n");
  scanf("%d",&x);
  return x;
}
int is_prime(int n)
{
  for(int i=2;i<=n;i++)
    {
      if(n%i==0)
        return 0;
    }
  return 1;
}
void output(int n, int is_prime)
{
  if(is_prime==0)
    printf("%d is  prime number\n",n);
  else
    printf("%d is not prime number\n",n);
}
int main()
{
  int n,a;
  n=input_number();
  a=is_prime(n);
  output(n,a);
  return 0;
}