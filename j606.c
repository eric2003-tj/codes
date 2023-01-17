#include <stdio.h>
#include <string.h>
int main(){
    int len,number,loc;
    scanf("%d%d%d",&len,&number,&loc);
    char string[len+1];
    scanf("%s",string);
    char buffer[25][21];
    int array[len];
    for(int i=0;i<number;i++){
        char temp[len+1];
        for(int j=0;j<len;j++){
            scanf("%d",&array[j]);
        }
        for(int j=0;j<len;j++){
            temp[array[j]-1] = string[j];
        }
        strcpy(string,temp);
        strcpy(buffer[i],temp);
    }
    #ifdef DEBUG
    for(int i=0;i<number;i++){
        printf("%s\n",buffer[i]);
    }
    #endif
    //#ifdef DEBUG
    for(int i=0;i<loc;i++){
        for(int j=0;j<number;j++){
            printf("%c",buffer[j][i]);
        }
        if(i!=loc-1)
          printf("\n");
    }
    //#endif
}