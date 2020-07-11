#include <stdio.h>
int yotei[100050];
int ans = 0;
int judge(int x){
    int i;
    int key = 0;
    for(i=0;i<7;i++){
        key = key + yotei[x+i];
    }
    if(key<6){
        ans++;
    }
    return 0;
}
int main(void){
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&yotei[i]);
    }
    for(i=n;i<n+7;i++){
        yotei[i] = yotei[i-n];
    }
    for(i=0;i<n;i++){
        judge(i);
    }
    printf("%d\n",ans);
    return 0;
}