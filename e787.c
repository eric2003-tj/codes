#include <stdio.h>
int main(){
    int row,col;
    scanf("%d%d",&row,&col);
    int map[row][col];
    int search[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&map[i][j]);
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&search[i][j]);
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            int sum = 0;
            for(int k1 = 0;k1<row;k1++){
                sum += search[k1][j];
            }
            for(int k2 = 0;k2<col;k2++){
                sum += search[i][k2];
            }
            sum -= search[i][j];
            if(sum %2 ==1){
                map[i][j] = !map[i][j];
            }
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",map[i][j]);
        }
        printf("\n");
    }
}