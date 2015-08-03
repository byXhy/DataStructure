/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : main.c
 *
 *      Author     : X h y
 *
 *      Version    : 1.0
 *
 *      Date       : 08-03-2015
 *
 *      Description:
 ********************************************************************************
 */
 
/**
 * \file
 * \brief  StaticList operation
 */
 
#include <stdio.h>
#include <stdlib.h>
#include "StaticList.h"

 
/**
 * \file
 * \brief  main entry
 */

int main(void)
{
    StaticList* list = StaticList_Create(10);
    int index = 0;

    int i = 0;
    int j = 1;
    int k = 2;
    int x = 3;
    int y = 4;
    int z = 5;

    StaticList_Insert(list, &i, 0);
    StaticList_Insert(list, &j, 0);
    StaticList_Insert(list, &k, 0);

    printf("Capacity = %d, Length = %d\n", StaticList_Capacity(list), StaticList_Length(list));
    printf("\n");

    for (index=0; index<StaticList_Length(list); index++) {
        int* p = (int *)StaticList_Get(list, index);

        printf("%d\n", *p);
    }
    printf("\n");

    StaticList_Clear(list);
    printf("Capacity = %d, Length = %d\n", StaticList_Capacity(list), StaticList_Length(list));
    printf("\n");

    StaticList_Insert(list, &x, 0);
    StaticList_Insert(list, &y, 0);
    StaticList_Insert(list, &z, 0);
    while (StaticList_Length(list) > 0) {
        int *p = (int*)StaticList_Delete(list, 0);

        printf("Capacity = %d, Length = %d\n", StaticList_Capacity(list), StaticList_Length(list));
        printf("index_0  = %d\n", *p);
        printf("\n");
    }

    StaticList_Destroy(list);

    return 0;
}

/* end of file */

