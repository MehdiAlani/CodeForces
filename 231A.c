#include <stdio.h>
#include <stdlib.h>
int main(){
    int N;
    char Problem[6];
    int choice = 1;
    int count=0 ,max = 0;
    do{
        scanf("%d",&N);
    }while(N < 1 || N > 100);

    fflush(stdin);
    for(int i = 1; i <= N; i++){
        scanf(Problem, sizeof(Problem), stdin);
        count = 0;
        for(int j = 0 ;j < 5; j++) if(Problem[j]=='1') count++;
        if(count > max){
            max = count;
            choice=i;
        }
        fflush(stdin);
    }
    printf("%d\n",choice);

}