#include <stdio.h>

int main()
{
    int n[999],x[999];
    int sum=0;
    for(int i=0;i<999;i++){
        scanf("%d %d",&n[i],&x[i]);
        if(n[i]==0 && x[i]==0) break;
    }

    for(int i=0;i<999;i++){
        if(n[i]==0 && x[i]==0) break;
        for(int j=1;j<=n[i];j++){
            for(int k=1;k<=n[i];k++){
                if(j==k || j>k){
                    continue;
                }
                for(int l=1;l<=n[i];l++){
                    if(k==l || j==l || k>l){
                        continue;
                    }
                    else if(j+k+l==x[i]){
                        printf("%d+%d+%d=%d\n",j,k,l,x[i]);
                        sum++;
                    }
                }
            }
        }
        printf("%d\n",sum);
        sum=0;
    }
}
