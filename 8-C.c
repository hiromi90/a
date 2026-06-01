#include <stdio.h>

int main()
{
    int sum[26] = {0};
    char s;
    while(scanf("%c",&s)!=EOF){
        for(int i=65;i<=90;i++){
            if(s==i||s==i+32){
                sum[i-65]++;
            }
        }
    }
    for(int i=0;i<26;i++){
        printf("%c : %d\n",i+97,sum[i]);
    }
    return 0;
}