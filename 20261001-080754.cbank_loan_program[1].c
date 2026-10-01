#include<stdio.h>
#include<stdlib.h>
/*
    name:alex
    reg no:30750
    date:24th sep 2026
    */
    int main()
    {
   int age;
   float income;
   
    printf("enter your age:");
    scanf("%d",& age);
    
    printf("enter your annual income(ksh):");
    scanf("%f",& income);
    
  if(age>=21 &&income>=21000)  
  {
  printf("\n congratulation! you qualify for the loan\n"); 
  }
  else
  {
  printf("\n sorry, you didn't qualify for the loan\n");
    }
    
    return 0;
    
    }
    
    
    
    
    