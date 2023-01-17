#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char inventory[101];
    char num[101];
    scanf("%s%s",inventory,num);
    int len = strlen(inventory);
    int number[26] = {0};
    int loc[26] = {0};
    int final[len];
    for(int i=0;i<len;i++){
        char temp = tolower(inventory[i]);
        number[temp-'a']+=(num[i]-'0');
        loc[temp-'a']++;
        final[i] = 0;
    }
   for(int i=0;i<26;i++){
        if(loc[i] == 0){
            continue;
        }else{
            char temp = ('a'+i);
            if(number[i]%loc[i] == 0){
                int avg = number[i]/loc[i];
                for(int j=0;j<len;j++){
                    if(tolower(inventory[j]) == temp){
                        final[j] = avg;
                    }
                }
            }else{
                int avg = number[i]/loc[i];
                int remain = number[i]%loc[i];
                for(int j=0;j<len;j++){
                    if(tolower(inventory[j]) == temp){
                        final[j] = avg;
                    }
                }
                for(int j=len-1;j>=0;j--){
                    if((tolower(inventory[j]) == temp) && remain>0){
                        final[j]++;
                        remain--;
                    }
                }
            }
        }
   }
   for(int i=0;i<len;i++){
    printf("%d",final[i]);
   }
}
