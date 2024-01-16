// https://codeforces.com/problemset/problem/1903/A

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE_MAX 100

int main(){
    int t , n , k;
    int CountNumbers;
    char S1[SIZE_MAX];
    char S2[SIZE_MAX];
    int i ,j;
    scanf("%d",&t);
    for(i = 0; i < t; i++){
        fgets(S1,SIZE_MAX,stdin);
        fflush(stdin);
        fgets(S2,SIZE_MAX,stdin);
        fflush(stdin);
        n = 0;
        k = 0;
        j = 0;
        while(S1[j] != ' '){
            n = n * 10 + S1[j] - '0';
            j++;
        }
        j++;
        while(S1[j] != '\n'){
            k = k * 10 + S1[j] - '0';
            j++;
        }
        printf("n = %d , k = %d\n",n,k);
        int * Box_Array = (int *) malloc(sizeof(int) * n);
        CountNumbers = 0;
        for(j = 0; S2[j] != '\0'; j++){
            if (S2[j] >= '0' && S2[j] >= '9'){
                Box_Array[CountNumbers] = S2[j] - '0';
                CountNumbers++; 
            }
        }



    } 

}