#include<stdio.h>
int ans = 0;
int count = 0;
int remember[300];
int main(void){
    int n,i,j;
    char add[64] = "add";
    char print[64] = "print";
    char pin[64] = "pin";
    char rollback[64] = "rollback";
    struct meirei{
        char moji[20];
    };
    struct meirei q[300]; 
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",&q[i].moji);
    }
    for(i=0;i<n;i++){
        if(strcmp(add,q[i].moji) == 0){
            ans++;
        }else if(strcmp(print,q[i].moji) == 0){
            printf("%d\n",ans);
        }else if(strcmp(pin,q[i].moji) == 0){
            remember[count] = ans;
            count++;
        }else if(strcmp(rollback,q[i].moji) == 0){
            count--;
            ans = remember[count];
        }
    }
    return 0;
}