#include <stdio.h>
int H,W,N;
char* field[100][100];
int judge(int i,int w,int x){
    int j;
    for(j=x;j<x+w;j++){
        if(field[i][j] != '.'){
            return -1;
        }
    }
    return 0;
}
int tetolis(int h,int w,int x,int H,int W){
    int i,j,a,b;
    for(i=0;i<H;i++){
        if(i+1 == H){
            for(a=H-h;a<H;a++){
                for(b=x;b<x+w;b++){
                    field[a][b] = '#';
                }
            }
            return 0;
        }else{
            if(judge(i+1,w,x) == -1){
                for(a=i-h+1;a<i+1;a++){
                    for(b=x;b<x+w;b++){
                        field[a][b] = '#';
                    }
                }
                return 0;
            }
        }
    }
}
int main(void){
    scanf("%d%d%d",&H,&W,&N);
    int i,j;
    for(i=0;i<H;i++){
        for(j=0;j<W;j++){
            field[i][j] = '.';
        }
    }
    int h,w,x;
    for(i=0;i<N;i++){
        scanf("%d%d%d",&h,&w,&x);
        tetolis(h,w,x,H,W);
    }
    for(i=0;i<H;i++){
        for(j=0;j<W;j++){
            printf("%c",field[i][j]);
        }
        printf("\n");
    }
    return 0;
}