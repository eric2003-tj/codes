#include <stdio.h>

int main(){
   int n;
   scanf("%d",&n);
   int array[n];
   for(int i=0;i<n;i++){
     scanf("%d",&array[i]);
   }
   int sum = 0;
   if(array[0] == 0){
    sum += array[1];
   }
   if(array[n-1] == 0){
    sum += array[n-2];
   }
   for(int i=1;i<=n-2;i++){
     if(array[i] != 0){
        continue;
     }else{
       int min = (array[i-1] >= array[i+1])? array[i+1]:array[i-1];
       sum += min;
     }
   }
   printf("%d",sum);
   return 0;
}
