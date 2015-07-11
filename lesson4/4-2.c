/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : 4-2.c
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

void search(int a[], int len)
{
    int sp[1000] = {0};
    int i = 0;
    int max = 0;
    
    for (i=0; i<len; i++) {
        int index = a[i] - 1;
        
        sp[index]++;
    }
    
    for (i=0; i<1000; i++) {
        if (max < sp[i]) {
            max = sp[i];
        }
    }
    
    for (i=0; i<1000; i++) {
        if (max == sp[i]) {
            printf("%d\n", i+1);
        }
    }
}

/**
 * \brief main entry
 */      
 
int main(void)
{
    int array[] = {1, 1, 3, 4, 5, 6, 6, 6, 2, 3};
    
    search(array, sizeof(array)/sizeof(*array));
    
    return 0;
}

/* end of file */
