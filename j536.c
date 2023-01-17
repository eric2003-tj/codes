#include <stdio.h>
#include <stdbool.h>
int main(){
    long long int N,A;
    while( scanf("%lld%lld",&N,&A)!=EOF){
       long long int power[N];
    long long int max = -1;
    int ticker;
    long long int sum = 0;
    for(int i = 0;i<N;i++){
        scanf("%lld",&power[i]);
        if(power[i] > max){
            max = power[i];
            ticker = i;
        }
        sum += power[i];
    }
    int left_count = A/2;
    int right_count = A/2;
    bool check_right = (ticker+right_count)<N;
    bool check_left = (ticker-left_count)>=0;
    if(check_left && check_right){
        for(int i = left_count;i>0;i--){
            max += power[ticker+i];
            power[ticker+i] = 0;
            max += power[ticker-i];
            power[ticker-i] = 0;
        }
    }else if(check_left){
        for(int i=ticker+1;i<N;i++){
            max += power[i];
            power[i] = 0;
            right_count--;
        }
        for(int i=1;i<=left_count+right_count;i++){
            if((ticker-i)<0){
                break;
            }
            max += power[ticker-i];
            power[ticker-i] = 0;
        }
    }else if(check_right){
        for(int i=ticker-1;i>=0;i--){
            max += power[i];
            power[i] = 0;
            left_count--;
        }
        for(int i=1;i<=left_count+right_count;i++){
            if((ticker+i)>=N){
                break;
            }
            max += power[ticker+i];
            power[ticker+i] = 0;
        }
    }else{
        for(int i=ticker+1;i<N;i++){
            max += power[i];
            power[i] = 0;
            right_count--;
        }
        for(int i=ticker-1;i>=0;i--){
            max += power[i];
            power[i] = 0;
            left_count--;
        }
    }
    power[ticker] = max;
    printf("%lld %lld\n",max,sum-max);
    }
    
}