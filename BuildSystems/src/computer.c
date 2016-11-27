// computer.c
// Author: Sébastien Combéfis
// Version: November 27, 2016

#include <stdio.h>
#include "utils.h"

int main()
{
    int n;
    
    printf ("Compute factorial of n = ");
    scanf ("%d", &n);
    printf ("%d\n", fact(n));
    
    printf ("Compute power2 of n = ");
    scanf ("%d", &n);
    printf ("%d\n", power2 (n));
    
    return 0;
}
