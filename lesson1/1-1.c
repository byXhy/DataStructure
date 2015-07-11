/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : 1-1.c
 *
 *      Author     : X h y
 *
 *      Version    : 1.0
 *
 *      Date       : 07-07-2015
 *
 *      Description:
 ********************************************************************************
 */
 
/**
 * \file
 * \brief  summation
 */

#include <stdio.h>
#include <malloc.h>

long sum1(int n)
{
    long ret = 0;
    int* array = (int*)malloc(n * sizeof(int));
    int i = 0;
    
    for (i=0; i<n; i++) {
        array[i] = i + 1;
    }
    
    for (i=0; i<n; i++) {
        ret += array[i];
    }
    
    free(array);
    
    return ret;
}

long sum2(int n)
{
    long ret = 0;
    int i = 0;
    
    for (i=1; i<=n; i++) {
        ret += i;
    }
    
    return ret;
}

long sum3(int n)
{
    long ret = 0;
    
    if (n > 0) {
        ret = (1 + n) * n / 2;
    }
    
    return ret;
}

/**
 * \brief main entry
 */      
 
int main(void)
{
    printf("%d\n", sum1(100));
    printf("%d\n", sum2(100));
    printf("%d\n", sum3(100));
    
    return 0;
}

/* end of file */