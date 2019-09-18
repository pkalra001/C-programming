#include<stdio.h>
#include<stdlib.h>

void rotate(char matrix[10][10]){
  for(int i = 0; i< 10; i++){
    int k = 9;
    for (int j = 0; j<10; j++){
      printf("%c", matrix[k][i]);
      k--;}
    printf("\n");
  } 
}

