#include <stdio.h>
#include <string.h>

int main(){
    char string[501];
    scanf("%s",string);
    int len = strlen(string);
    if(len%2!=0){
        printf("NO");
        return 0;
    }
    int ticker = 0;
    for(int i=0;i<len/2;i++){
        if(string[i] != string[len-1-i]){
             ticker = 1;
             break;
        }
    }
    if(!ticker){
        printf("YES\n");
        for(int i=0;i<len/2;i++){
            printf("%c",string[i]);
        }
    }else{
        printf("NO");
    }
    return 0;
}