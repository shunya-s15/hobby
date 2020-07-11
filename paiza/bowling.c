#include <stdio.h>
int point[100];
int pin[100];
int strikejudge(int i,int n,int b){
    int j,swap;
    if(pin[i] == b){
        pin[n] = pin[i+1];
        pin[i+1] = 0;
        for(j=n;j>i+2;j--){
            swap = pin[j-1];
            pin[j-1] = pin[j];
            pin[j] = swap;
        }
        return 1;
    }else if(pin[i]<b && pin[i]+pin[i+1] == b){
        return 0;
    }else{
        return -1;
    }
}

int main(void){
    int a,b,n,i,j;
    scanf("%d%d%d",&a,&b,&n);
    for(i=0;i<100;i++){
        pin[i] = 0;
        point[i] = 0;
    }
    for(i=0;i<n;i++){
        scanf("%d",&pin[i]);
        printf("pin[%d] = %d\n",i,pin[i]);
        /*if(pin[i] < 1 || b < pin[i]){
            pin[i] = 0;
            printf("G=%d\n",pin[i]);
        }*/
    }
    for(i=0;i<a+1;i++){
        j = strikejudge(2*i,n,b);
        if(j == -1){
            point[i] = pin[2*i]+pin[2*i+1];
        }else if(j == 0){
            point[i] = b+pin[2*(i+1)];
        }else if(j == 1){
            n = n+1;
            point[i] = b+pin[2*(i+1)]+pin[2*(i+1)+1];
            printf("point[%d] = %d\n", i,point[i]);
        }
    }
    int ans = 0;
    for(i=0;i<a+1;i++){
        printf("point[%d] = %d\n",i,point[i]);
        ans = ans + point[i];
    }
    printf("%d",ans);
    return 0;
}