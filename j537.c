#include <stdio.h>
void bubble(int num,int array[num][2]){
    for(int i=0;i<num-1;i++){
        for(int j=i+1;j<num;j++){
            if(array[i][0]>array[j][0]){
                int temp;
                temp = array[i][0];
                array[i][0] = array[j][0];
                array[j][0] = temp;
                temp = array[i][1];
                array[i][1] = array[j][1];
                array[j][1] = temp;
            }
        }
    }
}
int main(){
    int num;
    scanf("%d",&num);
    int factory[num][2];
    for(int i=0;i<num;i++){
        scanf("%d%d",&factory[i][0],&factory[i][1]);
    }
    int people;
    scanf("%d",&people);
    int count = 0;
    bubble(num,factory);
    for(int i=num-1;i>=0;i--){
        if(people >0){
            people -= factory[i][1];
            count++;
        }else{
            break;
        }
    }
    printf("%d",count);
    
}