#include<stdio.h>
#include<stdlib.h>

size_t max(size_t p,size_t k){
  if(p >= k){
    return p;}
  else{
    return k;}
}

size_t maxSeq(int * array, size_t n){
  int output = 1;
  int temp_out = 0;
  size_t r;
  if(n == 1){
    r = 1;}
  else if (n == 0){
    r = 0;}
  else {
    for(int i = 0;i<(n-1);i++){
      if(array[i] < array[i+1]){
	output+=1;}
      else{
	if(temp_out<output){
	  temp_out = output;}
	output = 1;}
    }
    r = max(output,temp_out);}
  return r;}

