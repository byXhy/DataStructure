#ifndef _EG_LIST_H_
#define _EG_LIST_H_

typedef void List;
typedef void ListNode;

/* create list */
List* List_Create();

/* destroy list */
void List_Destroy(List* list);

/* clear all of node */
void List_Clear(List* list);

/* get the number of the node */
int List_Length(List* list);

/* insert a node */
int List_Insert(List* list, ListNode* node, int pos);

/* get the node by pos from list */
ListNode* List_Get(List* list, int pos);

/* delete the node by pos from list */
ListNode* List_Delete(List* list, int pos);

#endif
