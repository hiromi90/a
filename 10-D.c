#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x[n],y[n];
    double D1=0.0,D2=0.0,D3=0.0,D=0.0;
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&y[i]);
    }

    for(int i=0;i<n;i++){
        double diff = fabs((double)x[i] - y[i]);
        D1 += diff;
        D2 += pow(diff, 2.0);
        D3 += pow(diff, 3.0);
        if(diff>D){
            D=diff;
        }
    }
    D2 = sqrt(D2);
    D3 = pow(D3, 1.0 / 3.0);

    printf("%.10f\n", D1);
    printf("%.10f\n", D2);
    printf("%.10f\n", D3);
    printf("%.10f\n", D);
    return 0;
}
