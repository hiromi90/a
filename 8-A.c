#include <stdio.h>
#include <string.h>

int main(){
    char s[1200];
    scanf("%s",s);

    for(int i=0;i<1200;i++){
        if(s[i]>=65&&s[i]<=90){
            s[i]=s[i]+32;
        }
        else if(s[i]>=97&&s[i]<=122){
            s[i]=s[i]-32;
        }
        else{
            s[i]=s[i];
        }
    }
    printf("%s",s);
}
