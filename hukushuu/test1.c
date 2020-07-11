#include<stdio.h>
int main(){
    int t[7];
    int i,j,swap;
    int ans = 0;
    scanf("%d%d%d%d%d%d%d",&t[0],&t[1],&t[2],&t[3],&t[4],&t[5],&t[6]);
    for(i=0;i<7;i++){
        for(j=6;i<j;j--){
            if(t[j]<t[j-1]){
                swap = t[j-1];
                t[j-1] = t[j];
                t[j] = swap;
            }
        }
    }
    for(i=0;i<7;i++){
        printf("配列の中身%d\n",t[i]);
    }
    for(i=1;i<6;i++){
        ans = ans + t[i];
    }
    printf("%d\n",ans);
    ans = ans/5;
    printf("%d\n",ans);
    return 0;
}
