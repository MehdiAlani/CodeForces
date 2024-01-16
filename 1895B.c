// https://codeforces.com/problemset/problem/1895/B


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAXSIZE 1000

int main(){
    int Sort = 0;
    int t , n , j = 0 , k = 0;
    char MSG[MAXSIZE];
    int Distnace;
    scanf("%d",&t);
    for(int i = 0; i < t ; i++){
    
    scanf("%d",&n);
    fflush(stdin);
    int Tab[2*n];

    fgets(MSG,sizeof(MSG)-1,stdin);
    k = 0;
    Tab[k] = 0;
    for(int j = 0; MSG[j] != '\n'; j++){
        if(MSG[j] != ' ') Tab[k] = Tab[k] * 10 + ( MSG[j] - '0' );
        else {
            k++;
            Tab[k] = 0;
        }
    }
    Sort = 0;
    while(!Sort){
        Sort = 1;
        for(int j = 0; j < 2 * n - 1; j++){
            if(Tab[j] > Tab[j+1]){
                Sort = 0;
                Tab[j] += Tab[j+1];
                Tab[j+1] = Tab[j] - Tab[j+1];
                Tab[j] = Tab[j] - Tab[j+1];
            }
        }
    }
    for(int j = 0; j < 2 * n; j++){
        printf("%d ",Tab[j]);
    }
    // Calculate Distance 
    Distnace = 0;
    for (int j = 0; j < n * 2; j = j + 2 ){
        Distnace = Distnace + abs(Tab[j] - Tab[j+1]);
    }
    printf("\n%d\n",Distnace);
    for (int j = 0; j < n ; j++){
        printf("%d %d\n",Tab[2* n - 1 - j],Tab[j]);
    }

}
    return 0;
}


// chat GPT SOLUTION 