#ifndef _EG_SEQLIST_H_
#define _EG_SEQLIST_H_

typedef void SeqList;
typedef void SeqListNode;

/* create list */
SeqList* SeqList_Create(int capacity);

/* destroy list */
void SeqList_Destroy(SeqList* list);

/* clear all of node */
void SeqList_Clear(SeqList* list);

/* get the length of the list */
int SeqList_Length(SeqList* list);

/* get capacity of the list */
int SeqList_Capacity(SeqList* list);

/* insert a node */
int SeqList_Insert(SeqList* list, SeqListNode* node, int pos);

/* get the node by pos from list */
SeqListNode* SeqList_Get(SeqList* list, int pos);

/* delete the node by pos from list */
SeqListNode* SeqList_Delete(SeqList* list, int pos);

#endif
