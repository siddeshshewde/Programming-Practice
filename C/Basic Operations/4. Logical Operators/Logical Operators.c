#include <stdio.h> 
  
int main() 
{ 
    int a=10, b=4, c = 10, d = 20; 
  
    // logical operators 
  
    // logical AND example 
    if (a>b && c==d) 
        printf("a is greater than b AND c is equal to d\n"); 
    else printf("AND condition not satisfied\n"); 
  
    // logical AND example 
    if (a>b || c==d) 
        printf("a is greater than b OR c is equal to d\n"); 
    else printf("Neither a is greater than b nor c is equal "
                " to d\n"); 
  
    // logical NOT example 
    if (!a) 
        printf("a is zero\n"); 
    else printf("a is not zero"); 
  
    return 0; 
}
