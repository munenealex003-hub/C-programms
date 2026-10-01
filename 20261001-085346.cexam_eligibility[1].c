#include<stdio.h>
#include<stdlib.h>
/*
    name:alex
    reg no:30750
    date:24th sep 2026
    */
    int main()
    {
   int attendance;
   float averagemarks;
   
    printf("enter attendace%:");
    scanf("%d",& attendance);
    
    printf("enter averagemarks:");
    scanf("%f",& averagemarks);
    
  if(attendance>=75&& averagemarks>=40)  
  {
  printf("eligible for finalexams\n"); 
  }
  else
  {
  printf("not eligible for finalexam\n");
    }
    
    return 0;
    
    }
    
    
    
    
    