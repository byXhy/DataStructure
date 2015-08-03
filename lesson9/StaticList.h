#ifndef _EG_STATICLINST_H_
#define _EG_STATICLINST_H_

typedef void StaticList;
typedef void StaticListNode;

/* create list */
StaticList* StaticList_Create(int capacity);

/* destroy list */
void StaticList_Destroy(StaticList* list);

/* clear all of node */
void StaticList_Clear(StaticList* list);

/* get the length of the list */
int StaticList_Length(StaticList* list);

/* get the capacity of the list */
int StaticList_Capacity(StaticList* list);

/* insert a node */
int StaticList_Insert(StaticList* list, StaticListNode* node, int pos);

/* get the node by pos from list */
StaticListNode* StaticList_Get(StaticList* list, int pos);

/* delete the node by pos from list */
StaticListNode* StaticList_Delete(StaticList* list, int pos);

#endif
