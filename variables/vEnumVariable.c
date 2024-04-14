#include <stdio.h>
#include <stdlib.h>

int main()
{
   enum Company { GOOGLE, FACEBOOK, NVDIA, YAHOO = 10, EBAY, MICROSOFT } ;

   enum Company nvdia = NVDIA;
   enum Company google = GOOGLE;
   enum Company ebay = EBAY;

   printf("The value of NVDIA is: %d\n", NVDIA);
   printf("The value of google is: %d\n", google);
   printf("The value of ebay is: %d\n", ebay);

    return 0;
}

/*
Output:
The value of NVDIA is: 2
The value of google is: 0
The value of ebay is: 11
*/

