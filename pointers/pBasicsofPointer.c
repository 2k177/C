#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 150;
    int *pNum = NULL;

    pNum = &num;

    printf("num address is:  %p\n", &num);
    printf("Address of pNum: %p\n", &pNum);
    printf("value of the pNum: %p\n", pNum);
    printf("value of what pNum is pointing to: %d\n", *pNum);

    return 0;
}

//Output:
//num address is:  0x7ffe132cf75c
//Address of pNum: 0x7ffe132cf750
//value of the pNum: 0x7ffe132cf75c
//value of what pNum is pointing to: 150