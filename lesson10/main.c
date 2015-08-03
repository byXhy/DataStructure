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
 * \brief  CircleList operation
 */
 
#include <stdio.h>
#include "CircleList.h"

struct Value
{
    CircleListNode header;
    int v;
};
 
/**
 * \file
 * \brief  main entry
 */

int main(void)
{
    int i = 0;

    CircleList* list = CircleList_Create();

    struct Value v1;
    struct Value v2;
    struct Value v3;
    struct Value v4;
    struct Value v5;
    struct Value v6;
    struct Value v7;
    struct Value v8;

    v1.v = 1;
    v2.v = 2;
    v3.v = 3;
    v4.v = 4;
    v5.v = 5;
    v6.v = 6;
    v7.v = 7;
    v8.v = 8;

    CircleList_Insert(list, (CircleListNode*)&v1, CircleList_Length(list));
    CircleList_Insert(list, (CircleListNode*)&v2, CircleList_Length(list));
    CircleList_Insert(list, (CircleListNode*)&v3, CircleList_Length(list));
    CircleList_Insert(list, (CircleListNode*)&v4, CircleList_Length(list));
    CircleList_Insert(list, (CircleListNode*)&v5, CircleList_Length(list));
    CircleList_Insert(list, (CircleListNode*)&v6, CircleList_Length(list));
    CircleList_Insert(list, (CircleListNode*)&v7, CircleList_Length(list));
    CircleList_Insert(list, (CircleListNode*)&v8, CircleList_Length(list));

    //CircleList_Insert(list, (CircleListNode*)&v5, 5);
    
    for (i=0; i<CircleList_Length(list); i++) {
        struct Value* pv = (struct Value*)CircleList_Next(list);

        printf(" %d\n", pv->v);
    }
    printf("\n");

    CircleList_Reset(list);

    while (CircleList_Length(list) > 0) {
        struct Value* pv = NULL;

        for (i=1; i<3; i++) {
            CircleList_Next(list);
        }

        pv = (struct Value*)CircleList_Current(list);

        printf(" %d\n", pv->v);

        CircleList_DeleteNode(list,(CircleListNode*)pv);
    }

    CircleList_Destroy(list);

    return 0;
}

/* end of file */

