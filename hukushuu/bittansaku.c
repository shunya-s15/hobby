#include<stdio.h>
int main(){
    int n;//集合の要素の数 とりあえず変更しました。
    int bit;
    int i,j;
    int shugou[100];
    int kakunou[100];
    scanf("%d",&n);
    /*cout << n;*/
    for(i=0;i<n;i++){
        scanf("%d",&shugou[i]);
    }
    /*for(i=0;i<n;i++){
        printf("%d ",shugou[i]);
    }
    printf("\n");*/
    for(bit = 0;bit<(1<<n);bit++){
        j = 0;
        for(i=0;i<n;i++){
            if(bit & (1<<i)){ //(1<<i)は１をi桁目まで移すということなので例えばbit = 0101のときifはi=0,2でうごく。
                kakunou[j] = shugou[i];
                //printf("%d\n",kakunou[j]);
                j++;
                //printf("%d\n",j);
            }
        }
        if(j==0){
            printf("{}\n");
        }else{
            printf("{");
            for(i=0;i<j;i++){
                printf("%d",kakunou[i]);
                if(i != j-1){
                    printf(",");
                }
            }
            printf("}\n");
        }
    }
    return 0;
}