//
// Created by user on 3/16/2017.
//
#include <stdio.h>
int main() {
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if (j % 2 == 1 || ((i == 0 || i == n-1))){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}