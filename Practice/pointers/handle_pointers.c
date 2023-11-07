#include <stdio.h>
int main(void){
    // Here your code !
    int m;
    m = 29;
    printf("Address of m : %p\n", &m);
    printf("Value of m : %d\n", m);
    int *ab;
    
    ab = &m;
    printf("Address of pointer ab : %p\n", &ab);
    printf("Address of pointer ab : %d\n", *ab);
    
    //The value of m assigned to 34 now.
    m = 34;
    printf("Changing the value of m to 34\n");
    printf("Address of pointer ab : %p\n", &ab);
    printf("Address of pointer ab : %d\n", *ab);
    
    //The pointer variable ab is assigned with the value 
    *ab = 7;
    printf("update variable ab with a value...");
    printf("Address of m : %p\n", &m);
    printf("Value of m : %d\n", m);
    
}

//Output
// Address of m : 0x7fff692fae3c
// Value of m : 29
// Address of pointer ab : 0x7fff692fae40
// Address of pointer ab : 29
// Changing the value of m to 34
// Address of pointer ab : 0x7fff692fae40
// Address of pointer ab : 34
// update variable ab with a value...Address of m : 0x7fff692fae3c
// Value of m : 7
