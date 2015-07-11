/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : 4-1.c
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
 * \brief  search a number from array
 */

#include <stdio.h>

int search(int array[], int length, int n)
{
    int ret = -1;
    int i = 0;
    
    for (i=0; i<length; i++) {
        if (array[i] == n) {
            ret = i;
            break;
        }
    }
    
    return ret;
}

/**
 * \brief main entry
 */      
 
int main(void)
{
    int array[5] = {1, 2, 3, 4, 5};
    
    printf("%d\n", search(array, 5, 1));
    printf("%d\n", search(array, 5, 5));
    
    return 0;
}

/* end of file */
