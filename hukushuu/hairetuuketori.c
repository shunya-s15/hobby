#include<stdio.h>
int main(void){
    int a[100][100];
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            printf("%d ",a[i][j]);
        }
        printf("%d\n",a[i][n-1]);
    }
}