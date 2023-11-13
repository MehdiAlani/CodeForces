// https://codeforces.com/problemset/problem/1895/B


#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 1000

int main(){
    int t , n , j = 0 , k = 0;
    char MSG[MAXSIZE];
    scanf("%d",&t);
    for(int i = 0; i < t ; i++){
        scanf("%d",&n);
        fflush(stdin);
        scanf("%s",&MSG);
        fflush(stdin);
        int A[n * 2];
        k = 0;
        printf("%s\n",MSG);
        for(int j = 0; j < n * 2; j++) A[j] = 0; 
        for(int j = 0; j < MAXSIZE; j++){
            if(MSG[j] == ' '){
                k++;
                continue;
            }
            A[k] = A[k] * 10 + ( MSG[j] - '0');
        }
        for(int j = 0; j < n * 2; j++) printf("%d ",A[j]); 
        printf("\n");
    }


    return 0;
}