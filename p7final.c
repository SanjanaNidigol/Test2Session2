#include<stdio.h>
#include<math.h>
struct _point 
{
float x,y;
};
typedef struct _point Point;
struct _line
{
Point p1,p2;
float distance;
};
typedef struct _line Line;
Point input_point()
{
  Point p1;
  printf("enter the values of x and y\n");
  scanf("%f%f",&p1.x,&p1.y);
  return p1;
}
Line input_line()
{
  Line l;
  Point p1,p2;
  p1=input_point();
  p2=input_point();
  l.p1=p1;
  l.p2=p2;
  return l;
}
void find_length(Line *l)
{
  l->distance=sqrt(pow((l->p2.x - l->p1.x),2)+pow((l->p2.y-l->p1.y),2));
}
void output(Line l)
{
  printf("the distance between the points %f,%f  %f,%f is %f\n",l.p1.x,l.p1.y,l.p2.x,l.p2.y,l.distance);
}
int main()
{
  Point p1,p2;
  
  Line l1;
  l1=input_line();
  find_length(&l1);
  output(l1);
  return 0;
}


/*#include<stdio.h>
#include<math.h>
struct _point {
float x,y;
};
typedef struct _point Point;
struct _line
{
Point p1,p2;
float distance;
};
typedef struct _line Line;
Line input_point()
{
  Line x1,y1,x2,y2;
  printf("enter two points\n");
  scanf("%f %f %f %f",x1,y1,x2,y2);
}
void find_length(Line *l)
{
  Line x1,y1,x2,y2;
  *l=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
void output(Line l)
{
  printf("the length of line is %d",l);
}
int main()
{
  Line a,l;
  a=input_point();
  find_length(&l);
  output(l);
  return 0;
}*/
