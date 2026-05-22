#include <stdio.h>

int main()
{
    int n;
    int a[4][3][10];
    int b[n],f[n],r[n],v[n];
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d %d %d %d",&b[i],&f[i],&r[i],&v[i]);
    }


    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<10;k++)
            {
                for(int l=0;l<9;l++)
                {
                    a[i][j][k]= 0;
                }
            }
        }
    }

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<10;k++)
            {
                for(int l=0;l<n;l++){
                    if(b[l]==i+1 && f[l]==j+1 && r[l]==k+1)
                    {
                        a[i][j][k] = v[l]+a[i][j][k];
                    }
                }
                printf(" %d",a[i][j][k]);
            }
            puts("");
        }
        if(i!=3){
            for(int j=0;j<20;j++)
            {
                printf("#");
            }
            puts("");
        }
    }
}