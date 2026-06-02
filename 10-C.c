#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int n;
    while(1){
        scanf("%d",&n);
        if(n==0) break;
        int s[n];
        int sum=0;
        double a2=0.0;
        for(int i=0;i<n;i++){
            scanf("%d",&s[i]);
            sum += s[i];
        }
        double average = (double)sum/n;
        for(int i=0;i<n;i++){
            a2=a2+(s[i]-average)*(s[i]-average);
        }
        a2=a2/n;
        double a=0.0;
        a=sqrt(a2);
        printf("%.10f\n",a);
    }
}
