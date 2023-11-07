#include <stdio.h>
int main(void){
    // Here your code !
    int m = 10;
    int n, o;
    int *z;
    z = &m;
    printf("Z: %p\n", z);
    printf("Z address value : %d\n", *z);
    printf("M address: %p\n", &m);
    printf("N address: %p\n", &n);
    printf("o address: %p\n", &o);
    printf("Z address: %p\n", &z);
    
}

// Output
// Z: 0x7fff32cdfc5c
// Z address value : 10
// M address: 0x7fff32cdfc5c
// N address: 0x7fff32cdfc6c
// o address: 0x7fff32cdfc68
// Z address: 0x7fff32cdfc60
