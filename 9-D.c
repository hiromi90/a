#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[1001];
    char temp[1001];
    scanf("%s",str);
    strcpy(temp,str);
    int q;
    scanf("%d",&q);
    int a,b;
    int p=0;
    for(int i=0;i<q;i++){
        char order[10];
        scanf("%s",order);
        if(strcmp(order,"print")==0){
            scanf("%d %d",&a,&b);
            for(int j=a;j<=b;j++){
                printf("%c",str[j]);
            }
            printf("\n");
        }
        else if(strcmp(order,"reverse")==0){
            scanf("%d %d",&a,&b);
            for(int j=a;j<=b;j++){
                temp[j]=str[b-(j-a)];
            }
            strcpy(str,temp);
        }
        else if(strcmp(order,"replace")==0){
            scanf("%d %d",&a,&b);
            p=b-a+1;
            char c[p+1];
            scanf(" %s",c);
            for(int j=a;j<=b;j++){
                str[j]=c[j-a];
            }
            strcpy(temp, str);
        }
    }
    return 0;
}
