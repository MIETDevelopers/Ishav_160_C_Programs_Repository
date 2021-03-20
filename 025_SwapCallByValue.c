//A C Program to swap two numbers using call by value.              © Ishav Verma 20/March/2021
#include <stdio.h> 
  
int main() 
{ 
    int x, y; 
    printf("Enter Value of x "); 
    scanf("%d", &x); 
    printf("\nEnter Value of y "); 
    scanf("%d", &y); 
    
    //Here swapping of number occurs.
    int temp = x; 
    x = y; 
    y = temp; 
  
    printf("\nAfter Swapping: x = %d, y = %d", x, y); 
    return 0; 
}