#include <stdio.h>

int main(){
    int number;
    scanf("%d",&number);
    int time,score;
    int max = -1;
    int max_time = -1;
    int error_num = 0;
    for(int i=0;i<number;i++){
        scanf("%d%d",&time,&score);
        if(score > max){
            max = score;
            max_time = time;
        }else if(score == -1){
            error_num++;
        }
    }
    int total = max-number-error_num*2;
    total = (total>=0)? total:0;
    printf("%d %d",total,max_time);
}