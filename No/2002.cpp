
#include<stdio.h>
#define PI 3.1415927
int main()
{
   double r,v;
   while(~scanf("%lf",&r))
   {
   v=4.0/3*PI*r*r*r;
   printf("%.3f\n",v);
   }
}
