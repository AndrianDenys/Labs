//
// Created by user on 3/22/2017.
//

#include<stdio.h>
#include<string.h>
int main(){
//    char name[25];
  //  scanf("%[A-Za-z ]", name);
    //int i = 0;

    //for(int j = i, n = strlen(name); j < n; j++){
      //  printf("%c", name[j]);
    //}
    char name[30];
    scanf("%s", name);
    if(name == "\0" || name == ""){
        printf("0");
    }
}