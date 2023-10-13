#include <stdio.h>
#include <stdlib.h>
// https://codeforces.com/problemset/problem/71/A
int main(){
    int N , SizeOfWord,j,i=0;
    do{
        scanf(" %d",&N);
    }while(N<0 || N > 100);

    unsigned char c;
    unsigned char ListWord[100][N];

    for(j=0; j < N ;j++)
        for(int i = 0; i < 100; i++) ListWord[j][i]='\0';

    for(int j =0; j <= N; j++){
    i=0;
    c = getchar();
    while(c !='\n'){
        ListWord[j][i]= c;
        c = getchar();
        i++;
    }
    }
    printf("\nYour Output1:\n");
    for(j=0; j <= N ;j++) {
        for(int i = 0; ListWord[j][i] != '\0'; i++) {
        printf("%c",ListWord[j][i]);
        }
        printf("\n");
    }
    printf("\nYour Output2:\n");

    for(j=0; j <= N ;j++){
        for(int i = 0; ListWord[j][i] != '\0'; i++);
        SizeOfWord = i-1;
        if(SizeOfWord > 10) printf("%c%d%c",ListWord[j][0],SizeOfWord-2,ListWord[j][SizeOfWord-2]);
        else{
            for(int k = 0; k <= i ; k++){
                printf("%c",ListWord[j][i]);
            }
        }
        printf("    :%d",SizeOfWord);
        printf("\n");
    }
    return 0;
}