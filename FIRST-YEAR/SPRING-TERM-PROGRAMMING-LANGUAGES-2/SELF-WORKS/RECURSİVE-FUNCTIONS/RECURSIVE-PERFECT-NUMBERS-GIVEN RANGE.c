#include<stdio.h>

void RecPerf(int num,int stop){
     static int div=1,sum=0;
    if(num==stop)
        return;
    
    if(div>=num){
        if(sum==num){
            printf("%d IS PERFECT NUMBER\n",num);
            div=1;
            sum=0;
            return RecPerf(num+1,stop);
        }
        else{
            div=1;
            sum=0;
            return RecPerf(num+1,stop);
        }
    }
    else{
        if(num%div==0){
            sum+=div;
            div+=1;
            return RecPerf(num,stop);
        }
        else{
            div+=1;
            return RecPerf(num,stop);
        }
        
    }
}
int main(){
    int stop,num=6;
    printf("TO SEE PERFECT NUMBERS 1 TO N NOT PLEASE ENTER N:");
    scanf("%d",&stop);
    RecPerf(num,stop);
    return 0;
}
