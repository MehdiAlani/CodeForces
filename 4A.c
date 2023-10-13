// https://codeforces.com/problemset/problem/4/A

#include <stdio.h>


int main(){
    int w;
    do{
        scanf("%d",&w);
    }while (w < 1 || w > 100);
    if(w==1 || w==2) printf("NO");
    else if(w % 2==0) printf("YES");
    else printf("NO");
    return 0;
}