#include<stdio.h>

int main(){
    struct yahoo{
        int C;
        char A[64];
    };
    struct yahoo ca[7];
    int i,ans = 0;
    char key[64] = "Alice";
    scanf("%d%d%d%d%d%d",&ca[1].C,&ca[2].C,&ca[3].C,&ca[4].C,&ca[5].C,&ca[6].C);
    //printf("%d\n",ca[1].C);
    scanf("%s%s%s%s%s%s",&ca[1].A,&ca[2].A,&ca[3].A,&ca[4].A,&ca[5].A,&ca[6].A);
    //printf("%s\n",ca[1].A);
    for(i=1;i <= 6;i++){
        if(strcmp(key,ca[i].A) == 0){
            ans = ans + ca[i].C;
        }
    }
    printf("%d",ans);
    return 0;
}
