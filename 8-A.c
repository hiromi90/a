#include <stdio.h>
#include <string.h>

int main(){
    char s;
    
    while(1){
        scanf("%c",&s);
        if(s=='\n'){
            break;
        }
        if(s>=65&&s<=90){
            s=s+32;
        }
        else if(s>=97&&s<=122){
            s=s-32;
        }
        else{
            s=s;
        }
        printf("%c",s);
    }
    puts("");
}
