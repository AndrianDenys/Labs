//
// Created by user on 3/22/2017.
//

#include<stdio.h>
#include<string.h>
int main(){
    char n[20];
    scanf("%[A-Za-z ]", n);
    int i = 0;
    for(int j = i; j < strlen(n); j ++){
        printf("%c", n[j]);

    }
}