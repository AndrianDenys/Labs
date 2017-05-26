//
// Created by user on 4/5/2017.
//
#include<stdio.h>
int main() {
    struct student{
        int ID;
        char name[25];
    };
    struct student group[5];
    for(int i = 0; i < 5; i++){
        scanf("%s", group[i].name);
        group[i].ID = i;
    }
    for(int i = 0; i < 5; i++){
        printf("\n %s", group[i].name);
    }
}

