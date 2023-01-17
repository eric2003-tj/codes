#include <stdio.h>
#include <limits.h>
int main(){
   int n;
   scanf("%d",&n);
   int map[n][n];
   int max[100] = {0};
   int index[100];
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&map[i][j]);
        if(map[i][j]>=max[i]){
            max[i] = map[i][j];
            index[i] = j;
        }
    }
   }
  int index2[100];
  int min[100];
  for(int i=0;i<n;i++){
    min[i] = INT_MAX;
    for(int j=0;j<n;j++){
        if(map[j][i]<=min[i]){
            min[i] = map[j][i];
            index2[i] = j;
        }
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(j==index[i] && i==index2[j]){
            printf("%d %d",i,j);
            return 0;
        }
    }
  }
  printf("NO");
}
