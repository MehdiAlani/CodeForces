// https://codeforces.com/problemset/problem/41/A

#include <stdio.h>

int main(){
    char s[100];
    char t[100];
    short int V , Found = 1;
    for(int i = 0; i < 100; i++){
        s[i]='\0';
        t[i]='\0';
    }
    scanf("%s \n %s",&s,&t);
    for(int i = 0; i <= V;i++) {
        if(s[i] != t[V-i]) Found = 0;
    }
    if(Found) printf("YES");
    else printf("NO");
    return 0;
}