// https://codeforces.com/problemset/problem/1894/B


#include <stdio.h>
#include <stdlib.h>


int main(){
    int n, count;
    char c ;
    int Numbers;
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&Numbers);
        fflush(stdin);
        int a[Numbers];
        count = 0;
        while((c = getchar()) != '\n'){
            if(c != ' ') {
                a[count] = (int) (c - '0');
                count++;
            }
        }
        for(int i = 0; i < ){
            
        }
    } 

    return 0;
}
