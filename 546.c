// https://codeforces.com/problemset/problem/546/A

#include <stdio.h>


int main(){

    int k,n,w,TotalPrize=0;
    scanf("%d %d %d",&k,&w,&n);
    for(int i = 1; i <= n; i++){
        TotalPrize = TotalPrize + k * i;  
    }
    if(w-TotalPrize < 0){
        printf("%d",TotalPrize-w);
    }
    else{
        printf("0");
    }
}