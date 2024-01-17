/*
 Question : Write a C program to read two numbers from user and add them using pointers. How to find sum of two number using pointers in C programming. Program to perform arithmetic operations on number using pointers.
 */

/* Example Output :
 Enter any two real numbers: 20
 5
 Sum = 25.00
 Difference = 15.00
 Product = 100.00
 Quotient = 4.00
 ! ! ! THE PROGRAM ENDS ! ! !
 */

// Created by Mehmet Akif Duran January 14, 2024.

#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    // Variable Decleration(s).
    
    float number1, number2; // normal variables.
    float *numb1, *numb2; //pointer variable.
    
    float sum, diff , multiplication , divison ; // defining the operations
    
    numb1 = &number1;
    numb2 = &number2;
   
    
    //Executable Statement(s).
    
    //getting inputs from the user
    
    printf("Enter the two numbers that you want to use: ");
    scanf("%f%f",numb1,numb2);
    
    // arithmethic operations
    
    sum = *numb1 + *numb2;
    diff = *numb1 - *numb2;
    multiplication = (*numb1)*(*numb2);
    divison = *numb1 / * numb2;
    
    printf("Sum = %.2f\n",sum);
    printf("Diff = %.2f\n",diff);
    printf("Product = %.2f\n",multiplication);
    printf("Quotient = %.2f\n",divison);
    
   
    
    return 0;
}
