#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    double x1,x2,y1,y2;
    double range=0.0;
    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
    range=sqrt(pow(x2-x1,2.0)+pow(y2-y1,2.0));
    printf("%.10f\n",range);
    return 0;
}
