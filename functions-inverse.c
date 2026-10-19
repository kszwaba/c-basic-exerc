#include <stdio.h>


float inv_f(float number); // function prototype for later use

float number;

int main(void)
{

    printf("Enter number:\n");
    scanf("%f", &number);

    float inv = inv_f(number);
    
    if(number != 0){ // only print the inverse if the number is not zero
        printf("Inverse of %0.2f is: %0.2f\n", number, inv);
    }
    
    return 0;
}

float inv_f(float number)
{
    if(number == 0){
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    else{
        float result = 1/number; 
        return result;              // return the inverse of the number as a function result for given argument
    }
}

