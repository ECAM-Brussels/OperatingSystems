// utils.c
// Author: Sébastien Combéfis
// Version: November 27, 2016

#include "utils.h"

int fact_aux(int n, int res)
{
    if (n == 0)
        return res;
    return fact_aux(n-1, n*res);
}

int fact (int n)
{
    assert(n >= 0);
    return fact_aux(n, 1);
}

int power2_aux(int n, int res)
{
    if (n == 0)
        return res;
    return power2_aux(n-1, 2*res);
}

int power2 (int n)
{
    assert(n >= 0);
    return power2_aux(n, 1);
}
