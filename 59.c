// https://codeforces.com/problemset/problem/59/A

#include <stdio.h>

int main(){
    char s[100];
    int numberLowerCase = 0, numberUpperCase = 0;
    for(int i = 0; i < 100 ; i++){
        s[i]='\0';
    }
    scanf("%s",&s);
    for(int i = 0; i < 100 ; i++){
        if(s[i] >= 'A' && s[i] <= 'Z')  numberUpperCase++;
        else if(s[i] >= 'a' && s[i] <= 'z')  numberLowerCase++;
    }
    if(numberLowerCase >= numberUpperCase){
        for(int i = 0; i < 100 ; i++){
            if(s[i] >= 'A' && s[i] <= 'Z')  s[i] = s[i] + 32;
        }
    }
    else{
         for(int i = 0; i < 100 ; i++){
            if(s[i] >= 'a' && s[i] <= 'z')  s[i] = s[i] - 32;
        }
    }
    printf("%s",s);
    return 0;
}