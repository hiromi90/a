#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char n[201];
    int m;
    char temp1[201];
    char temp2[201];
    while (scanf("%s", n) != EOF) {
         if (strcmp(n, "-") == 0) {
            break;
        }
        scanf("%d", &m);
        int h[m];
        for(int i=0;i<m;i++){
            scanf("%d", &h[i]);
            int j;
            for(j=0;j<h[i];j++){
                temp1[j] = n[j];
            }
            temp1[j] = '\0';
            for(j=0;n[h[i]+j]!='\0';j++){
                temp2[j] = n[h[i]+j];
            }
            temp2[j] = '\0';
            strcat(temp2,temp1);
            strcpy(n,temp2);
        }
        printf("%s\n", n);
    }
    return 0;
}
