#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    long long int a,b;
    while(scanf("%lld%lld",&a,&b)!=EOF){
        long long int temp = a-b;
        if(temp<0){
            printf("%lld\n",-temp);
        }else{
            printf("%lld\n",temp);
        }
    }
}