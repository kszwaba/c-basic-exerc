//Program to implement call function by value in C programming language.

#include <stdio.h>
#include <stdint.h>

int sum(int x, int y);

int main(){

    int a, b, c;

    a = 2;
    b = 3;
    c = sum(a, b); //Call function sum() by value and passing a and b as arguments to the function sum().
    
    printf("Sum of %d + %d is: %d\n", a, b, c);

    return 0;
}

int sum(int x, int y){

    int c;      // Local variable to sum() function, it is not the same as the c in main(). Scope of c is limited to sum() function only.

    c = x + y;

    return c; // Functions returns the value of c to the calling function main().
}

/*
Console output:
Sum of 2 + 3 is: 5

Notes:
In C, function arguments are passed by value. 
This means that a copy of the value of each argument is passed to the corresponding function parameter. 
The function operates on these parameter values, so modifying a parameter does not change the value of the original variable passed by the calling function.

In this example, the values of `a` and `b` are copied to the parameters `x` and `y` of the `sum()` function. The function calculates their sum and returns the result to `main()`. 
The original variables `a` and `b` remain unchanged.

The way arguments and local variables are stored in memory depends on the implementation and compiler; they are not necessarily stored on the stack.

*/