//LAB CLASS EXTRA QUESTÝIN-1
#include <stdio.h>

int f(int,int*,int**);
int main(void){
    int c,*b,**a;
    c=4;
    b=&c;
    a=&b;
    
    printf("%d",f(c,b,a));
}

int f(int x, int *py, int **ppz){
    
    **ppz+=1;
    x=*py***ppz;
    *py *= 2;
    x *=*py+3;
    
    return (x+*py+**ppz);
}
//ANSWER IS 345 BECAUSE *PY*=2 MAKES **PPZ=10 AT THE END 325 + 10+ 10= 345.
