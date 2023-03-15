/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
//declaring variables
  int m1,m2,sum;
  float average;
  
// get user input 
  printf("Enter mark 1 : ");
  scanf("%d",&m1);

  printf("Enter mark 2 : ");
  scanf("%d",&m2);
//Calculating sum
  sum = m1 + m2;
//calculating average
  average = sum/2.0;
//display average
  printf("The average is %.2f",average);
  

  
  return 0;
}

