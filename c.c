#include <stdio.h>

int setfixed(int i){
    int ii=0;
    ii=i;
    ii=ii*100;
    return ii;
}
void printfixed(int i){
    int ii=0;
    int iii=0;
    ii=i;
    ii=ii/100;
    iii=i-(ii*100);
    printf("%d.%d ",ii,iii);
    
}
int main(){
    int fixed=0;
    int n=0;
    printf("\e[43;37m\n");
    for(n=0;n<16;n++){
        fixed=setfixed(n);
        printfixed(fixed);
    }
    return 0;
}
