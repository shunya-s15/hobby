#include <stdio.h> //mitassei
int N[400];
int A[100];
int B[100];
int pattern = 0;

int set(int x,int y,int n){
    int i,j;
    A[x] = N[y];
    if(n==1){
        for(j=0;j<n;j++){
            printf("%d ",A[j]);
        }
    }
    for(i=1;i < 2*n-1;i++){
        set(x+1,y+i,n-1);
    }
}
int main(void){
    int i;
    for(i=1;i<400;i++){
        N[i] = i;
    }
    int n,k;
    scanf("%d%d",&n,&k);
    for(i=1;i<2*n-1;i++){
        set(0,i,n);
    }
}