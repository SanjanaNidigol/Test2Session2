#include<stdio.h>
int input()
{
  int x;
  printf("Enter any value\n");
  scanf("%d",&x);
  return x;
}
int find_fibo(int n)
{
  int n1=0,n2=1,fibo,i;
  if(n==0)
  {
    return 0;
  }
  else if(n==1)
  {
    return 1;
  }
  else 
    {
    for(int i=0;i<n-1;i++)
    {
     fibo=n1+n2;
     n1=n2;
     n2=fibo;
    }
  }
  return fibo;
}
void output(int n, int fibo)
{
  printf("%d",fibo);
}
int main()
{
  int n,fibo;
  n=input();
  fibo=find_fibo(n);
  output(n,fibo);
  return 0;
}
