#include <stdio.h> //完成しました。
int N[200];
int A[100];
int B[100];
int bit;
int ans;
int count=0;

int zettaiti(int x){
    if(x>0){
        return x;
    }else{
        return -x;
    }
}

int main(void){
    int i,j,l;
    int x;
    for(i=0;i<200;i++){
        N[i] = i+1;
    }
    int n,k;
    scanf("%d%d",&n,&k);
    for(bit=0;bit<(1<<2*n);bit++){
        j = 0;
        l = 0;
        ans = 0;
        /*for(i=0;i<100;i++){
            A[i]=0;
            B[i]=0;
        }*/
        for(i=0;i<2*n;i++){
            if(bit & (1<<i)){
                A[j] = N[i];
                j++;
            }else{
                B[l] = N[i];
                l++;
            }
        }
        if(j == l){
            for(i=0;i<j;i++){
                x = A[i]-B[i];
                ans = ans + zettaiti(x);
            }
            if(ans < k+1){
                count++;
            }
        }
    }
    printf("%d\n",count);
    return 0;
}