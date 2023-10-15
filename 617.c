// https://codeforces.com/problemset/problem/617/A


#include <stdio.h>


int main(){
    int CurrentPosition = 0;
    int FriendPosition;
    int NumberOfSteps = 0;
    scanf("%d",&FriendPosition);
    while(CurrentPosition!=FriendPosition){
        if(FriendPosition-CurrentPosition>=5) CurrentPosition += 5;
        else if(FriendPosition-CurrentPosition>=4) CurrentPosition += 4;
        else if(FriendPosition-CurrentPosition>=3) CurrentPosition += 3;
        else if(FriendPosition-CurrentPosition>=2) CurrentPosition += 2;
        else CurrentPosition++;
        NumberOfSteps++;
    }    
    printf("%d",NumberOfSteps);
    return 0;
}