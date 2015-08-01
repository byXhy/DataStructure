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
 *      Date       : 08-01-2015
 *
 *      Description:
 ********************************************************************************
 */
 
/**
 * \file
 * \brief  LinkList operation
 */
 
#include <stdio.h>
#include <stdlib.h>
#include "LinkList.h"

struct Value
{
    LinkListNode header;
    int v;
};
 
/**
 * \file
 * \brief  main entry
 */

int main(void)
{
    int i = 0;

    LinkList* list = LinkList_Create();

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

    LinkList_Insert(list, (LinkListNode*)&v1, LinkList_Length(list));
    LinkList_Insert(list, (LinkListNode*)&v2, LinkList_Length(list));
    LinkList_Insert(list, (LinkListNode*)&v3, LinkList_Length(list));
    LinkList_Insert(list, (LinkListNode*)&v4, LinkList_Length(list));
    LinkList_Insert(list, (LinkListNode*)&v5, LinkList_Length(list));

    for (i=0; i<LinkList_Length(list); i++) {
        struct Value* pv = (struct Value*)LinkList_Get(list, i);

        printf("%d\n", pv->v);
    }
    printf("\n");

    while (LinkList_Length(list) > 0) {
        struct Value* pv = (struct Value*)LinkList_Delete(list, LinkList_Length(list) -1);

        printf("%d, %d\n", pv->v, LinkList_Length(list));
    }

    LinkList_Destroy(list);

    return 0;
}

/* end of file */

