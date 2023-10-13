// https://codeforces.com/problemset/problem/339/A

#include <stdio.h>

int main(){
    char S[100];
    for(int i =0;i<100;i++)S[i]='\0';
    int N1 = 0, N2 = 0, N3 = 0;
    scanf("%s",&S);
    for(int i = 0 ; S[i] != '\0'; i++){
        switch(S[i]){
            case '1':
                N1++;
                break;
            case '2':
                N2++;
                break;
            case '3':
                N3++;
                break;
        }
    }
    if(N1+N2+N3==1){
        printf("%s",S);
    }
    else{
    for(int i = 0; i < N1;i++)S[i]='1';
    for(int i = N1; i < N2 + N1;i++)S[i]='2';
    for(int i = N2 + N1 ; i < N3 + N2 + N1 ;i++)S[i]='3';
    int i = 0;
    for(i = 0; S[i+1] != '\0';i++){
        printf("%c+",S[i]);
    }
    printf("%c",S[i]);
    }
    return 0;
}