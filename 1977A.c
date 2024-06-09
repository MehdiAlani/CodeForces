// https://codeforces.com/problemset/problem/1977/A
#define MAX_SIZE 100
#include <stdio.h>
#include <stdlib.h>

int main(){
    int t = 0;
    scanf("%d ",&t);
    
    char * Msg = (char *) malloc(MAX_SIZE);
    int i,j,m,n;
    for(i = 0; i < t; i++){
        gets(Msg);
        j = 0,m = 0,n = 0;
        while(Msg[j] != ' '){
            n = n * 10 + Msg[j] - '0';
            j++; 
        }
        j++;
        while(Msg[j] != '\0'){
            m = m * 10 + Msg[j] - '0';
            j++; 
        }
        if(n >= m && (n - m) % 2 == 0) printf("Yes\n");
        else printf("No\n");
    }

    return 0;
}
