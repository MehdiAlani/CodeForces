// https://codeforces.com/problemset/problem/110/A

#include <stdio.h>

int main(){
    unsigned long long int Number;
    scanf("%lld",&Number);
    while(Number % 10 == 7 || Number % 10 == 4) Number = Number / 10; 
    if(Number == 0) printf("YES");
    else printf("NO");
    return 0;
}