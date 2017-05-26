//
// Created by user on 4/2/2017.
//
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a;
    int b;
    int **arr;
    int **arr2;
    printf("Input len of row");
    scanf("%d", &a);
    printf("Input len of column");
    scanf("%d", &b);
    arr = (int **) malloc(sizeof(int*) * a);
    for (int i = 0; i < a; i++){
        arr[i] = (int*) malloc(sizeof(int) * b);
    }

   /* character = (int *) malloc(sizeof(int) * b);
    printf("Input first row");
    for(int i = 0; i < a; i++){
        row[i] = character;
    }
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            scanf("%d", &row[i][j]);
        }
    }

}
