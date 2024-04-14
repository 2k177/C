#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Variables of type char occupy %u bytes\n", sizeof(char));
    printf("Variables of type short occupy %u bytes\n", sizeof(short));
    printf("Variables of type int occupy %u bytes\n", sizeof(int));
    printf("Variables of type long occupy %u bytes\n", sizeof(long));
    printf("Variables of type long long occupy %u bytes\n", sizeof(long long));
    printf("Variables of type float occupy %u bytes\n", sizeof(float));
    printf("Variables of type double occupy %u bytes\n", sizeof(double));
    printf("Variables of type long double occupy %u bytes\n", sizeof(long double));

    return 0;
}

//Output:
//Variables of type char occupy 1 bytes
//Variables of type short occupy 2 bytes
//Variables of type int occupy 4 bytes
//Variables of type long occupy 8 bytes
//Variables of type long long occupy 8 bytes
//Variables of type float occupy 4 bytes
//Variables of type double occupy 8 bytes
//Variables of type long double occupy 16 bytes