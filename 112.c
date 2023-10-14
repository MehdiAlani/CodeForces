// https://codeforces.com/problemset/problem/112/A


#include <stdio.h>


int main(){
    char Str1[100],Str2[100];
    scanf("%s",&Str1);
    scanf("%s",&Str2);
    short int State = 1;
    for(int i = 0; Str1[i]!='\0'; i++){
        if(Str1[i]==Str2[i] || Str1[i]==Str2[i]+32 || Str1[i]==Str2[i]-32) continue;
        else if(Str1[i] > Str2[i]) {
            State = 0;
            break;
        }
        else{
            State = -1;
            break;
        }
    }
    printf("%d",State);
    return 0;
}