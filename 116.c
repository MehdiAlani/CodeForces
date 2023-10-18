// https://codeforces.com/problemset/problem/116/A

#include <stdio.h>

int main(){
    int n, NumberOfPepole = 0, Min=0;
    scanf("%d",&n);
    char s[100];
    for(int i = 0; i < n ; i++){
        fflush(stdin);
        scanf("%s",&s);
        printf("%s",)
        NumberOfPepole = NumberOfPepole - (int)(s[0] -'0') + (int)(s[2]-'0');
        printf("%d\n",NumberOfPepole);
        if(NumberOfPepole > Min) Min = NumberOfPepole;
    }
    printf("%d",Min);
    return 0;
}