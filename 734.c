// https://codeforces.com/problemset/problem/734/A

#include <stdio.h>

int main(){
    int Number;
    int Antone=0 , Danik = 0;
    scanf("%d",&Number);
    char s[Number];
    scanf("%s",&s);
    for(int i = 0 ; i < Number ; i++){
        if(s[i]=='A') Antone++;
        else Danik++;
    }
    if(Antone>Danik) printf("Anton");
    else if (Antone<Danik) printf("Danik");
    else printf("Friendship");
    return 0;
}