#include<stdio.h>
int searchfee(int hk,int hu,int kk,int ku,int x){
    int ryoukin = 0;
    if(hk > x){
        ryoukin = hu;
        return hu;
    }else{
        ryoukin = hu;
        x = x-hk; 
        while(1){
            ryoukin = ryoukin + ku;
            if(x<kk){
                return ryoukin;
            }else{
                x = x-kk;
            }
        }
    }
}
void bubblesort(int a[],int n){
    int i,j;
    int swap;
    for(i=0;i<n;i++){
        for(j=n-1;i<j;j--){
            if(a[j]<a[j-1]){
                swap = a[j-1];
                a[j-1] = a[j];
                a[j] = swap;
            }
        }
    }
}
int main(void){
    int a[100][4];
    int ryoukin[100];
    int i,j,n,x;
    int max,min;
    scanf("%d%d",&n,&x);
    for(i=0;i<n;i++){
        for(j=0;j<4;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        ryoukin[i] = searchfee(a[i][0],a[i][1],a[i][2],a[i][3],x);
    }
    bubblesort(ryoukin,n);
    min = ryoukin[0];
    max = ryoukin[n-1];
    printf("%d %d\n",min,max);
    
}