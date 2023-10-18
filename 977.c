// https://codeforces.com/problemset/problem/977/A

#include <stdio.h>

int main(){
    int k,n;
    scanf("%d %d",&n,&k);
    while(k!=0){
        if(n % 10 == 0) n = n / 10;
        else n--;
        k--;
    }
    printf("%d",n);

    return 0;
}