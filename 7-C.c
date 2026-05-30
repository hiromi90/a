#include <stdio.h>

int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    int sumr=0;
    int sumc[c];
    int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<c;i++){
        sumc[i]=0;
    }

    for(int i=0;i<r;i++){
        sumr=0;
        for(int j=0;j<c;j++){
            if(j!=c){
                printf("%d ",a[i][j]);
            }
            sumr=sumr+a[i][j];
            if(j==c-1){
                printf("%d\n",sumr);
            }
            sumc[j]=sumc[j]+a[i][j];
        }
    }

    for(int i=0;i<c;i++){
        printf("%d ",sumc[i]);
        sum=sum+sumc[i];
    }

    printf("%d\n",sum);

}
