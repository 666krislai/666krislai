#include<stdio.h>
int g1=30,g2=20;

int f1(int v){
    int g1=10;
    return g1+v;
}

int f2(int v){
    int c = g2;
    printf("v=%d c=%d g1=%d \n",v,c,g1);
    v = v+c+g1;

    g1 =10;
    c  =40;
    return v;
}

int main(){
    int tmp;
    g2 = 0;
    g2 = f1(g2);
    printf(" f1(g2) = %d \n",g2);
    tmp = f2(g2);
    printf(" f2(g2) = %d \n",tmp);
    printf("  %d \n",f2(tmp));
    return 0;
}

