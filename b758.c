#include <stdio.h>

int main(){
  int hour,min;
  scanf("%d%d",&hour,&min);
  hour += 2;
  min += 30;
  if(min >= 60){
     min -= 60;
     hour += 1;
  }
  hour %= 24;
  if(hour<=9){
    printf("0%d:",hour);
    if(min<=9){
       printf("0%d",min);
    }else{
       printf("%d",min);
    }
  }else{
    printf("%d:",hour);
    if(min<=9){
       printf("0%d",min);
    }else{
       printf("%d",min);
    }
  }






}

