#include <stdio.h>
int main(void){
  int charji,n,point,ryoukinn[100];
  point = 0;
  scanf("%d%d",&charji,&n);
  int i;
  for(i=0;i<n;i++){
      scanf("%d",&ryoukinn[i]);
  }
  for(i=0;i<n;i++){
      if(point < ryoukinn[i]){
          charji = charji-ryoukinn[i];
          point = point + ryoukinn[i]*0.1;
      }else{
          point = point-ryoukinn[i];
      }
      printf("%d %d\n",charji,point);
  }
  return 0;
}