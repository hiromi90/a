#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    double a,b;
    int C,c;
    double rad_x;
    scanf("%lf %lf %d",&a,&b,&C);
    rad_x =C*M_PI/180;
    double S;
    S=a*b*sin(rad_x)/2.0;
    double L;
    double h;
    h=b*sin(rad_x);
    L=a+b+sqrt(a*a+b*b-2*a*b*cos(rad_x));
    printf("%.10f\n",S);
    printf("%.10f\n",L);
    printf("%.10f\n",h);
    return 0;
}
