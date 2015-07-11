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
 *      Date       : 07-11-2015
 *
 *      Description:
 ********************************************************************************
 */
 
/**
 * \file
 * \brief  list operation
 */
#include <stdio.h>
#include "list.h"
 
/**
 * \file
 * \brief  main entry
 */
 
int main(void)
{
    List* list = List_Create();

    int i = 0;
    int j = 1;
    int k = 2;

    List_Insert(list, &i, 0);
    List_Insert(list, &j, 1);
    List_Insert(list, &k, 2);

    List_Clear(list);

    List_Destroy(list);

    return 0;
}

/* end of file */

