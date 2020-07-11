#include <stdio.h>
char buf[1000];
int main(void){
  int n;
  int s[1000];
  scanf("%d",&n);
  int i = 0;
  while(fgets(buf,sizeof(buf),stdin) != NULL){
        sscanf(buf,"%d ",&s[i]);
        ++i;
    }
    int j;
    for(j=0;3*j+2<i;j++){
        printf("%d %d %d\n",s[3*j],s[3*j+1],s[3*j+2]);
    }
  return 0;
}