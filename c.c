#include <stdio.h>

int setfixed(int i){
    int ii=0;
    ii=i;
    ii=ii*100;
    return ii;
}
int getfixed(int i){
    int ii=0;
    ii=i;
    ii=ii/100;
    return ii;
}
int setpart(int i,int i1){
    int ii=0;
    ii=i;
    ii=ii+i1;
    return ii;
}
void printfixed(int i){
    int ii=0;
    int iii=0;
    ii=i;
    ii=ii/100;
    iii=i-(ii*100);
    printf("%d.%02d ",ii,iii);
    
}
int fixadd(int i1,int i2){
    return i1+i2;
}
int fixsub(int i1,int i2){
    return i1-i2;
}
int fixmul(int i1,int i2){
    int tt=i2/100;
    return i1*tt;
}
int fixdiv(int i1,int i2){
    int tt=i2/100;
    return i1/tt;
}
int main(){
    int fixed1=0;
    int fixed2=0;
    int n=0;
    printf("\e[43;37m\n");
    for(n=0;n<16;n++){
        fixed1=setfixed(n);
        fixed2=setfixed(10);
        fixed1=setpart(fixed1,n);
        printfixed(fixed1);
        printf("+ ");
        printfixed(fixed2);
        printf("= ");
        fixed1=fixadd(fixed1,fixed2);
        printfixed(fixed1);
        printf(" \n");
        fixed1=setfixed(n);
        fixed2=setfixed(10);
        fixed1=setpart(fixed1,n);
        printfixed(fixed1);
        printf("- ");
        printfixed(fixed2);
        printf("= ");
        fixed1=fixsub(fixed1,fixed2);
        printfixed(fixed1);
        printf(" \n");
        fixed1=setfixed(n);
        fixed2=setfixed(10);
        fixed1=setpart(fixed1,n);
        printfixed(fixed1);
        printf("* ");
        printfixed(fixed2);
        printf("= ");
        fixed1=fixmul(fixed1,fixed2);
        printfixed(fixed1);
        printf(" \n");
        fixed1=setfixed(n);
        fixed2=setfixed(10);
        fixed1=setpart(fixed1,n);
        printfixed(fixed1);
        printf("/ ");
        printfixed(fixed2);
        printf("= ");
        fixed1=fixdiv(fixed1,fixed2);
        printfixed(fixed1);
        printf(" \n");
        
    }
    return 0;
}
