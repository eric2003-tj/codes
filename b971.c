#include <stdio.h>

int main(){
    int first,final,diff;
    scanf("%d%d%d",&first,&final,&diff);
    int t = first;
    if(diff >=0){
       do{
      printf("%d ",first);
      first += diff;
        }while(first<final);
        if(final!=t){
            printf("%d",final);
        }
    }else{
       do{
      printf("%d ",first);
      first += diff;
        }while(first>final);
        if(final!=t){
            printf("%d",final);
        }
    }

}
