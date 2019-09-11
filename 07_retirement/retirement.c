#include <stdio.h>
#include <stdlib.h>

// structure for basic information of savings and expenditure
struct _retire_info{
  int months;
  double contribution;
  double rate_of_return;
};
typedef struct _retire_info retire_info;

// structure for the transformation of age  months to years & months
struct transform{
  int y;
  int m;
} typedef t;


// function to transform the age from months to years & months
t transform(int monthss){
  t age;
  age.y = monthss/12;
  age.m = monthss % 12;
  return age;}

// Function to return the new amount for every new month while considering the rat of return and contribution
double finalamount(double initiall, retire_info work){
  double value;
  value = (initiall*(1+work.rate_of_return)) + work.contribution;
  return value;}

// function which prints the amount every month
void retirement(int startAge, double initial, retire_info working, retire_info retired){
  t finalAge;
  finalAge = transform(startAge);
  printf("Age %3d month %2d you have $%.2f\n",finalAge.y,finalAge.m,initial);
  for(int age = startAge+1;age <= startAge + working.months; age++){
    finalAge = transform(age);
    initial = finalamount(initial,working);
    printf("Age %3d month %2d you have $%.2f\n",finalAge.y,finalAge.m,initial);
  }
  for(int age = startAge + working.months +1; age <= startAge + working.months + retired.months-1;age++){
    finalAge = transform(age);
    initial = finalamount(initial,retired);
    printf("Age %3d month %2d you have $%.2f\n",finalAge.y,finalAge.m,initial);}
  
}

int main(void){
  retire_info w;
  retire_info r;
  w.months = 489;
  w.contribution = 1000;
  w.rate_of_return = (0.045/12);
  r.months = 384;
  r.contribution = -4000;
  r.rate_of_return = (0.01/12);
  int s = 327;
  double i = 21345;
  retirement(s,i,w,r);
  return EXIT_SUCCESS;
}
