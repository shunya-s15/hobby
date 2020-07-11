#include<stdio.h>
int dp[1001];
int fib(int n){
    if(dp[n] != -1){
        return dp[n];
    }else{
        dp[n] = fib(n-1)+fib(n-2);
        printf("%d\n",dp[n]);
        return dp[n];
    }
}
int main(){
    int i,n;
    for(i=0;i<1001;i++){
        dp[i] = -1;
    }
    dp[0] = 0;
    dp[1] = 1;
    scanf("%d",&n);
    printf("%d\n",dp[0]);
    printf("%d\n",dp[1]);
    //printf("%d\n",fib(n));
    fib(n);
    return 0;
}