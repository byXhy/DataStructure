/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : StaticList.c
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
#include <malloc.h>
#include "StaticList.h"

#define AVALIBALE -1

typedef struct _tag_StaticListNode
{
    unsigned int data;
    int next;
} TStaticListNode;

typedef struct _tag_StaticList
{
    int capacity;
    TStaticListNode header;
    TStaticListNode node[];
} TStaticList;

StaticList* StaticList_Create(int capacity)
{
    TStaticList* ret = NULL;
    int i = 1;

    if (capacity >= 0) {
        ret = (TStaticList*)malloc(sizeof(TStaticList) + sizeof(TStaticListNode) * (capacity + 1));
    }

    if (ret != NULL) {
        ret->capacity    = capacity;
        ret->header.data = 0;
        ret->header.next = 0;

        for (i=1; i<=ret->capacity; i++) {
            ret->node[i].next = AVALIBALE;
        }
    }

    return ret;
}

void StaticList_Destroy(StaticList* list)
{
    free(list);
}

void StaticList_Clear(StaticList* list)
{
    TStaticList* sList = (TStaticList*)list;
    int i = 1;

    if (sList != NULL) {
        sList->header.data = 0;
        sList->header.next = 0;

        for (i=1; i<=sList->capacity; i++) {
            sList->node[i].next = AVALIBALE;
        }       
    }
}

int StaticList_Length(StaticList* list)
{
    TStaticList* sList = (TStaticList*)list;
    int ret = -1;

    if (sList != NULL) {
        ret = sList->header.data;
    } 

    return ret;
}

int StaticList_Capacity(StaticList* list)
{
    TStaticList* sList = (TStaticList*)list;
    int ret = -1;

    if (sList != NULL) {
        ret = sList->capacity;
    } 

    return ret;
}

int StaticList_Insert(StaticList* list, StaticListNode* node, int pos)
{
    TStaticList* sList   = (TStaticList*)list;
    int ret     = (sList != NULL);
    int index   = 0;
    int current = 0;
    int i = 0;
    
    ret = ret && ((sList->header.data + 1) <= (sList->capacity));
    ret = ret && (0 <= pos) && (node != NULL);

    if (ret) {
        for (i=1; i<=sList->capacity; i++) {
            if (sList->node[i].next == AVALIBALE) {
                index = i;
                break;
            }            
        }

        sList->node[index].data = (unsigned int)node;

        sList->node[0] = sList->header;

        for (i=0; (i<pos) && (sList->node[current].next != 0); i++) {
            current = sList->node[current].next;
        }

        sList->node[index].next   = sList->node[current].next;
        sList->node[current].next = index;

        sList->node[0].data++;
        sList->header = sList->node[0];
    }

    return ret;
}

StaticListNode* StaticList_Get(StaticList* list, int pos)
{
    TStaticList* sList   = (TStaticList*)list;
    TStaticListNode* ret = NULL;
    int current = 0;
    int object  = 0;
    int i = 0;

    if ((sList != NULL) && (0 <= pos) && (pos <= sList->header.data)) {
        sList->node[0] = sList->header;

        for (i=0; i<pos; i++) {
            current = sList->node[current].next;
        }

        object = sList->node[current].next;
        
        ret = (TStaticListNode*)(sList->node[object].data);
    }

    return ret;
}

StaticListNode* StaticList_Delete(StaticList* list, int pos)
{
    TStaticList* sList   = (TStaticList*)list;
    TStaticListNode* ret = NULL;
    int current = 0;
    int object  = 0;
    int i = 0;

    if ((sList != NULL) && (0 <= pos) && (pos <= sList->header.data)) {
        sList->node[0] = sList->header;

        for (i=0; i<pos; i++) {
            current = sList->node[current].next;
        }

        object = sList->node[current].next;

        sList->node[current].next = sList->node[object].next;

        sList->node[0].data--;

        sList->header = sList->node[0];

        sList->node[object].next = AVALIBALE;
        
        ret = (TStaticListNode*)(sList->node[object].data);
    }

    return ret;
}

/* end of file */