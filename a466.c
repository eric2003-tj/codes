#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
bool isOne(char *input){
    int len = strlen(input);
    if(len != 3){
        return false;
    }else{
        char one[3] = {'o','n','e'};
        bool check = true;
        int ticker;
        for(int i=0;i<3;i++){
            if(*(input+i) != one[i]){
               check = false;
               ticker = i;
               break;
            }
        }
        ticker++;
        if(check){
            return true;
        }else{
            for(int i = ticker;i<3;i++){
                if(*(input+i)!=one[i]){
                    return false;
                }
            }
            return true;
        }
    }
}
bool isTwo(char *input){
    int len = strlen(input);
    if(len != 3){
        return false;
    }else{
        char one[3] = {'t','w','o'};
        bool check = true;
        int ticker;
        for(int i=0;i<3;i++){
            if(*(input+i) != one[i]){
               check = false;
               ticker = i;
               break;
            }
        }
        ticker++;
        if(check){
            return true;
        }else{
            for(int i = ticker;i<3;i++){
                if(*(input+i)!=one[i]){
                    return false;
                }
            }
            return true;
        }
    }
}
bool isThree(char *input){
    int len = strlen(input);
    if(len != 5){
        return false;
    }else{
        char one[5] = {'t','h','r','e','e'};
        bool check = true;
        int ticker;
        for(int i=0;i<5;i++){
            if(*(input+i) != one[i]){
               check = false;
               ticker = i;
               break;
            }
        }
        ticker++;
        if(check){
            return true;
        }else{
            for(int i = ticker;i<5;i++){
                if(*(input+i)!=one[i]){
                    return false;
                }
            }
            return true;
        }
    }
}
int main(){
    int num;
    scanf("%d",&num);
    char input[11];
    for(int i=0;i<num;i++){
        scanf("%s",input);
        if(isOne(input)){
            printf("1\n");
            continue;
        }else if(isTwo(input)){
             printf("2\n");
            continue;
        }else if(isThree(input)){
             printf("3\n");
            continue;
        }
    }
}
