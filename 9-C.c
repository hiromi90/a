#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n,P1score=0,P2score=0;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        char temp1[101],temp2[101];
        scanf("%s %s",temp1,temp2);
        if(strcmp(temp1,temp2)==0){
            P1score=P1score+1;
            P2score=P2score+1;
        }
        else if(strcmp(temp1,temp2)>0){
            P1score=P1score+3;
        }
        else if(strcmp(temp1,temp2)<0){
            P2score=P2score+3;
        }
    }
    printf("%d %d\n",P1score,P2score);
    return 0;
}
