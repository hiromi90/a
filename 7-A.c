#include <stdio.h>

int main()
{
    int m[50],f[50],r[50];
    for(int i=0;i<50;i++){
        scanf("%d %d %d",&m[i],&f[i],&r[i]); 
        if(m[i]==-1 && f[i]==-1 && r[i]==-1) break;
    }
    for(int i=0;i<50;i++){
        if(m[i]==-1 && f[i]==-1 && r[i]==-1) break;

        int sum = m[i]+f[i];

        if(m[i]==-1 || f[i]==-1){
            printf("F\n");
        }

        else if(sum>=80){
            printf("A\n");
        }

        else if(sum>=65&&sum<80){
            printf("B\n");
        }

        else if(sum>=50&&sum<65){
            printf("C\n");
        }

        else if(sum>=30&&sum<50){
            if(r[i]>=50){
                printf("C\n");
            }
            else{
                printf("D\n");
            }
        }

        else if(sum<30){
            printf("F\n");
        }
    }
}
