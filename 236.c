// https://codeforces.com/problemset/problem/236/A


#include <stdio.h>


int main(){
    char UserName[100];
    char Distinct[100];
    short int Found = 0;
    int k = 0;
    scanf("%s",&UserName);
    for(int i = 0; UserName[i]!='\0'; i++){
        Found = 0;
        for(int j=0 ; Distinct[j]!='\0' ;j++){
            if(Distinct[j] == UserName[i]){
                Found = 1;
                break;
            }
        }
        if(Found == 0){
            Distinct[k]=UserName[i];
            k++;
        }
    }
    if(k%2==0) printf("CHAT WITH HER!");
    else printf("IGNORE HIM!");

    return 0;
}