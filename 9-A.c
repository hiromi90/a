#include <stdio.h>
#include <string.h>

int main()
{
    char w[11];
    scanf("%s", w);
    char t[1000];
    int sum=0;

    while(1){
        scanf("%s",t);
        int len = strlen(t);
        if(strcmp(t,"END_OF_TEXT") == 0) break;
        for(int i=0;i<len;i++){
            t[i]=tolower(t[i]);
        }
        if(strcmp(t,w) == 0) sum++;
    }
    printf("%d\n", sum);
    return 0;
}