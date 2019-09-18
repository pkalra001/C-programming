#include<stdio.h>
#include<stdlib.h>

unsigned power (unsigned x, unsigned y);

int main(void){

  if(power(0,0) != 1){
    printf("Failed when 0 is raised to the power 0\n");
    exit(EXIT_FAILURE);}
  else if(power(2,0) != 1){
    printf("Failed when a number is raised to a 0 power\n");
    exit(EXIT_FAILURE);}
  else if(power(-2,2) != 4){
    printf("Failed when a negative number is raised to a  power\n");
    exit(EXIT_FAILURE);}
  else if(power(0,5) != 0){
    printf("Failed when 0 is raised to a power\n");
    exit(EXIT_FAILURE);}
  else if(power(10000000,1) != 10000000 ){
    printf("Failed when a very large number is raised to a power\n");
    exit(EXIT_FAILURE);}
  else{
    printf("Passed all test cases\n");}
  exit(EXIT_SUCCESS);}
