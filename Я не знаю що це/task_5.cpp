//
// Created by user on 3/16/2017.
//
#include <stdio.h>
//#5
int main(){
    int a;
    scanf("%d", &a);
    if (n <= 23 && n >= 0){
        for(int i = 1; i < n; i++){
            for(int j = 1; j < n; j++){
                if( j < (n-i)){
                 printf(" ");
                }
            else{
                 prinf("#");
                }
            }
        }
    }
}