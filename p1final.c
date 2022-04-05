#include<stdio.h>
#include<math.h>
void input(float *x1,float *y1,float *x2,float *y2)
{
  printf("Enter the first coordinate points\n");
  scanf("%f%f",x1,y1);
  printf("Enter the second coordinate points\n");
  scanf("%f%f",x2,y2);
}
void find_distance(float x1, float y1, float x2, float y2, float *distance)
{
  *distance=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
}
void output(float x1, float y1, float x2, float y2, float distance)
{
  printf("the distance between points is %f",distance);
}
int main()
{
  float x1,y1,x2,y2,distance;
  input(&x1,&y1,&x2,&y2);
  find_distance(x1,y1,x2,y2,&distance);
  output(x1,y1,x2,y2,distance);
  return 0;
}