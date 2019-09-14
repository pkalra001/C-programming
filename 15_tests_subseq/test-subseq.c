#include<stdio.h>
#include<stdlib.h>

size_t maxSeq(int * array, size_t n);

int main(void){

  int array1[] = {1};
  if(maxSeq(array1,1) != 1){
    printf("Failed when the array has only one element\n");
    exit(EXIT_FAILURE);}
  int array2[] = {};
  if(maxSeq(array2,0) != 0){
    printf("Failed when the array has zero elements\n");
    exit(EXIT_FAILURE);}
  int array3[] = {2,3,0,1,2};
  if(maxSeq(array3,5) != 3){
    printf("Failed when the array has a zero\n");
    exit(EXIT_FAILURE);}
  int array4[] = {1,2,2,4,5,5,6,7,8,8,8,99};
  if(maxSeq(array4,12) != 4){
    printf("Failed when the array has twelve elements");
    exit(EXIT_FAILURE);}
  int array5[] = {-5,-4,-3,0,1,2};
  if(maxSeq(array5,6) != 6){
    printf("Failed when the array has negative elements");
    exit(EXIT_FAILURE);}
  int array6[] = {1,2,3,4,5,6,7,8,9,13,45,67,89,100,5000};
  if(maxSeq(array6,15) != 15){
    printf("Failed when the array has all increasing  elements");
    exit(EXIT_FAILURE);}
  return EXIT_SUCCESS;}

