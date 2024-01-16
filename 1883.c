// https://codeforces.com/problemset/problem/1883/B
#include <stdio.h>
#include <string.h>

#define MAXSIZE 100

typedef struct Letter{
    int nbocc;
    char c;
}Letter 


int main(){

    char s[MAXSIZE];
    int k , n , t; 
    int i , j ,v;
    scanf("%d",&t);
    for(i = 0; i < t; i++){
        // Getting User Input 
        fgets(s,MAXSIZE,stdin);
        fflush(stdin);
        k = 0;
        n = 0;
        j = 0;
        while(s[j] !=  ' '){
            n = n * 10 + (s[j] - '0');
            j++;
        }
        j++;
        while(s[j] != '\n'){
            k = k * 10 + (s[j] - '0');
            printf("n = %d k = %d\n",n,k);
            j++;
        }
        // Checking if Palandrome or not 
        j = 0;
        v = n - 1;
        int Tab[n - 1];        
        while(j != v){
            if(s[j] != s[v] && k == 0){
                printf("No\n");
                break;
            } 
            else if(s[j] != s[v] && k > 0){
                v--;
            }
    }

    return 0;
}