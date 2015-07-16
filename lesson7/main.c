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
 *      Date       : 07-14-2015
 *
 *      Description:
 ********************************************************************************
 */
 
/**
 * \file
 * \brief  SeqList operation
 */
#include <stdio.h>
#include "SeqList.h"
 
/**
 * \file
 * \brief  main entry
 */
 
int main(void)
{
    SeqList* list = SeqList_Create(10);

    int capacity = 0;
    int length   = 0;

    int i = 0;
    int j = 1;
    int k = 2;
    int x = 3;
    int y = 4;
    int z = 5;
    int index = 0;

    /* insert a node to the list */
    SeqList_Insert(list, &i, 0);
    SeqList_Insert(list, &j, 0);
    SeqList_Insert(list, &k, 0);
    SeqList_Insert(list, &x, 0);
    SeqList_Insert(list, &y, 0);
    SeqList_Insert(list, &z, 0);

    /* get capacity of the list */
    capacity = SeqList_Capacity(list);
    printf("capacity = %d\n", capacity);

    /* get the length of the list */
    length = SeqList_Length(list);
    printf("length   = %d\n", length);

    printf("\n");
    
    /* print all of the node */
    for (index=0; index<SeqList_Length(list); index++) {
        int* p = (int*)SeqList_Get(list, index);

        printf("index = %d   p = %d\n", index, *p);  
    }

    printf("\n");

    /* get the node by pos = 4 */
    int* p = (int*)SeqList_Get(list, 4);
    printf("index_4  = %d\n", *p);
    
    /* delete the node by = 4 */
    SeqList_Delete(list, 4);

    /* get the length of the new list(delete a node) */
    length = SeqList_Length(list);
    printf("\nlength   = %d\n", length);

    printf("\n");

    /* print all of the node */
    for (index=0; index<SeqList_Length(list); index++) {
        int* p = (int*)SeqList_Get(list, index);

        printf("index = %d   p = %d\n", index, *p);
    }

    /* clear all of node */
    SeqList_Clear(list);

    printf("\n");

    /* get capacity of the list */
    capacity = SeqList_Capacity(list);
    printf("capacity = %d\n", capacity);

    /* get the length of the list */
    length = SeqList_Length(list);
    printf("length   = %d\n", length);

    SeqList_Destroy(list);

    return 0;
}

/* end of file */

