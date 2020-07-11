#include <stdio.h>
struct tansu{
        char a[100];
        int usiro;
    };
struct tansu tango[100];

int saikoubi(int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;tango[i].a[j] != '\0';j++){

        }
        tango[i].usiro = j-1;
    }
}
int main(void){
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++){
        scanf("%s",&tango[i].a);
    }
    saikoubi(n);
    /*printf("%d\n",tango[0].usiro);*/
    int x;
    char saigo,nibanme;
    for(i=0;i<n;i++){
        x = tango[i].usiro;
        saigo = tango[i].a[x];
        nibanme = tango[i].a[x-1];
        if(saigo == 's' || saigo == 'o' || saigo == 'x' || (saigo == 'h' && (nibanme == 's' || nibanme == 'c'))){
            tango[i].a[x+1] = 'e';
            tango[i].a[x+2] = 's';
        }else if(saigo == 'f'){
            tango[i].a[x] = 'v';
            tango[i].a[x+1] = 'e';
            tango[i].a[x+2] = 's';
        }else if(nibanme == 'f' && saigo == 'e'){
            tango[i].a[x-1] = 'v';
            tango[i].a[x] = 'e';
            tango[i].a[x+1] = 's';
        }else if(saigo == 'y' && (nibanme != 'a' && nibanme != 'i' && nibanme != 'u' && nibanme != 'e' && nibanme != 'o')){
            tango[i].a[x] = 'i';
            tango[i].a[x+1] = 'e';
            tango[i].a[x+2] = 's';
        }else{
            tango[i].a[x+1] = 's';
        }
    }
    for(i=0;i<n;i++){
        printf("%s\n",tango[i].a);
    }
    return 0;
}