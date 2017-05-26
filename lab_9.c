//
// Created by user on 3/29/2017.
//
#include<stdio.h>
#include<stdlib.h>
int* multiply(int* arr, int n) {
    int *arr_2;
    arr_2 = (int *) malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        arr_2[i] = arr[i] * 2;
    }
    for (int i = 0; i < n; i ++){
        printf("%d", arr_2[i]);
    }
    printf("\n");
    return arr_2;
}
int parse(int* arr, int n){
    int m = 0;
    int a = 0;
    for( int i = 0; i < n; i++){
        if(arr[i] >= 0){
            m += 1;
        }
    }
    int *arr_3;
    arr_3 = (int *) malloc(sizeof(int) * m);
    for (int i = 0; i < n; i++){
        if(arr[i] >= 0){
            arr_3[a] = arr[i];
            a += 1;
        }
    }
    for(int i = 0; i < m; i++){
        printf("%d", arr_3[i]);
    }
    printf("\n");
}
int main() {
    int n;
    scanf("%d", &n);
    int *arr;
    arr = (int *) malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    multiply(arr, n);
    parse(arr, n);
    return 0;
}


