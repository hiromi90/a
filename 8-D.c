#include <stdio.h>
#include <string.h>

int main()
{
    char s[101],p[101];

    scanf("%s",s);
    scanf("%s",p);

    char temp[202];

    strcpy(temp, s);
    strcat(temp,s);

    if(strstr(temp,p)==NULL){
        printf("No\n");
    }
    else{
        printf("Yes\n");
    }
    return 0;
}