#include<stdio.h>
#include<math.h>
void input(float*x1,float*y1,float*x2,float*y2)
{ 
 printf("enter the first point\n");
 scanf("%f%f",x1,y1);
 printf("enter the second point\n");
 scanf("%f%f",x2,y2);
}
void find_distance(float x1,float y1,float x2,float y2,float*area)
{
  float x,y;
  x=(x2-x1)*(x2-x1);
  y=(y2-y1)*(y2-y1);
  *area=sqrt(x+y);
}
void output(float x1,float y1,float x2,float y2,float area)
{
  printf("the distance between point(%f,%f) and (%f,%f) is %f\n",x1,y1,x2,y2,area);
}
int main()
{
  float x1,y1,x2,y2,area;
  input(&x1,&y1,&x2,&y2);
  find_distance(x1,y1,x2,y2,&area);
  output(x1,y1,x2,y2,area);
  return 0;
}






