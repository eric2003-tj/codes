#include <stdio.h>

int main(void){
   int base;
   scanf("%d",&base);
   int inventory;
   scanf("%d",&inventory);
   while(inventory != 0){
      if(inventory % base == 0){
        printf("%d\n",inventory/base);
      }else{
        printf("%d\n",base - inventory%base);
      }
      scanf("%d",&inventory);
   }
   return 0;
}