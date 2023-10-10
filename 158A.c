#include <stdio.h>

int main(){

    int k, n;
    do{
        scanf("%d %d",&n,&k);
    }while(k < 1 || n < k || n > 50);
    for(int i =0;i<n ;i++){
        printf("%d",i);
    }


    return 0;
}