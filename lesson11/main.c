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
 *      Date       : 08-04-2015
 *
 *      Description:
 ********************************************************************************
 */
 
/**
 * \file
 * \brief  DLinkList operation
 */
 
#include <stdio.h>
#include "DLinkList.h"

struct Value
{
    DLinkListNode header;
    int v;
};
 
/**
 * \file
 * \brief  main entry
 */

int main(void)
{
    int i = 0;
    struct Value* pv = NULL;

    DLinkList* list = DLinkList_Create();

    struct Value v1;
    struct Value v2;
    struct Value v3;
    struct Value v4;
    struct Value v5;

    v1.v = 1;
    v2.v = 2;
    v3.v = 3;
    v4.v = 4;
    v5.v = 5;

    DLinkList_Insert(list, (DLinkListNode*)&v1, DLinkList_Length(list));
    DLinkList_Insert(list, (DLinkListNode*)&v2, DLinkList_Length(list));
    DLinkList_Insert(list, (DLinkListNode*)&v3, DLinkList_Length(list));
    DLinkList_Insert(list, (DLinkListNode*)&v4, DLinkList_Length(list));
    DLinkList_Insert(list, (DLinkListNode*)&v5, DLinkList_Length(list));

    for (i=0; i<DLinkList_Length(list); i++) {
        pv = (struct Value*)DLinkList_Get(list, i);

        printf(" %d\n", pv->v);
    }
    printf("\n");

    DLinkList_Reset(list);
    DLinkList_Next(list);
    pv = (struct Value*)DLinkList_Current(list);
    printf(" %d\n", pv->v);

    DLinkList_DeleteNode(list, (DLinkListNode*)pv);
    pv = (struct Value*)DLinkList_Current(list);
    printf(" %d\n", pv->v);

    DLinkList_Pre(list, (DLinkListNode*)pv);
    pv = (struct Value*)DLinkList_Current(list);
    printf(" %d\n", pv->v);

    DLinkList_Destroy(list);

    return 0;
}

/* end of file */

