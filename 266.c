// https://codeforces.com/problemset/problem/266/A


#include <stdio.h>


int main(){
    int n , Min_nb = 0;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",&s);
    s[n] = 'O';
    for(int i = 1; i < n; i++){
        if(s[i]==s[i-1] || s[i] == s[i+1]){
            s[i]=s[i-1];
            Min_nb++;
        }
    }
    printf("%d",Min_nb);
    return 0;
}