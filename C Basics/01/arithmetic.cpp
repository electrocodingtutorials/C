//calculate arithmetic mean of two integers
#include <stdio.h>

// functions prototypes

int read_int(void);
float mean_a(int, int);

int main(void){
    // local variables
    float ma; //arithmetic mean variable
    int n1, n2; //integers variables

    // call the function to read the integer
    n1 = read_int();
    n2 = read_int();

    // call the arithmetic mean function
    ma = mean_a(n1, n2);

    // print arithmetic mean result
    printf("\n Arithmetic mean is : %f \n", ma);

}

// function to calculate the arithmetic meean

float mean_a(int n1, int n2){
    //local variables
    float mean;

    mean = (n1 + n2)/2.0;

    //return the result
    return(mean);
}

// function to read the integer
int read_int(){
    //local variables
    int nr; // integer variable

    // print message to type an integer
    printf("\n\t Enter an integer: ");
    scanf("%d", &nr);

    //return the number
    return(nr);
}