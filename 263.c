// https://codeforces.com/problemset/problem/263/A

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int Martix[5][5];
    char Line[20];
    short int index , X ,Y;
    for(int i = 0; i < 5;i++){
        index = 0;
        fgets(Line,sizeof(Line),stdin);
        for(int j = 0; j < sizeof(Line);j++){
            if(Line[j]=='0' || Line[j]=='1') {
                Martix[i][index] = Line[j] - '0';
                index++;
            }
        }
    }
    for(int i = 0; i < 5;i++){
        for(int j = 0; j < 5;j++){
            if(Martix[i][j] == 1){
                printf("%d",abs(i-2)+abs(j-2));
                return 0;
            }
        }
    }
}