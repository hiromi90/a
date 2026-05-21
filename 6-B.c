#include <stdio.h>

int main(int argc,const char * argv[])
{
    int n;
    scanf("%d",&n);
    int a[n],S[13],H[13],C[13],D[13];
    char s[n],ss[n];
    for(int i=0;i<n;i++){
        scanf("%c",&ss[i]);
        scanf("%c %d",&s[i],&a[i]);
    }
    for(int i=0;i<13;i++){
        S[i]=0,H[i]=0,C[i]=0,D[i]=0;
    }
    for(int i=0;i<n;i++){
        if(s[i]=='S'){
            for(int k=1;k<14;k++){
                if(a[i]==k){
                    S[k-1]=1;
                }
            }
        }
        else if(s[i]=='H'){
            for(int k=1;k<14;k++){
                if(a[i]==k){
                    H[k-1]=1;
                }
            }
        }
        else if(s[i]=='C'){
            for(int k=1;k<14;k++){
                if(a[i]==k){
                    C[k-1]=1;
                }
            }
        }
        else if(s[i]=='D'){
            for(int k=1;k<14;k++){
                if(a[i]==k){
                    D[k-1]=1;
                }
            }
        }
    }

    
    
    for(int i=1;i<14;i++){
        if(S[i-1]==0){
            printf("S %d\n",i);
        }
    }
    for(int i=1;i<14;i++){
        if(H[i-1]==0){
            printf("H %d\n",i);
        }
    }
    for(int i=1;i<14;i++){
        if(C[i-1]==0){
            printf("C %d\n",i);
        }
    }
    for(int i=1;i<14;i++){
        if(D[i-1]==0){
            printf("D %d\n",i);
        }
    }
    return 0;
}
