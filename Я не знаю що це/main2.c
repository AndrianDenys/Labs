//
// Created by user on 3/20/2017.
//
#include <stdio.h>
//#5
int main(){
    int n;
    scanf("%d", &n);
    if (n <= 23 && n >= 0){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if( j < (n-i)){
                    printf(" ");
                }
                else {
                    printf("#");
                }
            }
            printf("\n");

        }
    }
}
