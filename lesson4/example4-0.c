/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : 4-0.c
 *
 *      Author     : X h y
 *
 *      Version    : 1.0
 *
 *      Date       : 07-08-2015
 *
 *      Description:
 ********************************************************************************
 */
 
/**
 * \file
 * \brief  summation
 */

#include <stdio.h>

int func(int a[], int len)
{
    int i = 0;
    int j = 0;
    int s = 0;
    
    for (i=0; i<len; i++) {
        for (j=0; j<len; j++) {
            s += i*j;
        }
    }
    
    return s;
}

/**
 * \brief main entry
 */      
 
int main(void)
{
    int array[] = {1, 2, 3, 4, 5};
    
    printf("%d\n", func(array, 5));
    
    return 0;
}

/* end of file */
