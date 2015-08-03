#ifndef _EG_CIRCLELIST_H_
#define _EG_CIRCLELIST_H_

typedef void CircleList;
typedef struct _tag_CircleListNode CircleListNode;
struct _tag_CircleListNode {
    CircleListNode* next;
};

/* create list */
CircleList* CircleList_Create(void);

/* destroy list */
void CircleList_Destroy(CircleList* list);

/* clear all of node */
void CircleList_Clear(CircleList* list);

/* get the length of the list */
int CircleList_Length(CircleList* list);

/* insert a node */
int CircleList_Insert(CircleList* list, CircleListNode* node, int pos);

/* get the node by pos from list */
CircleListNode* CircleList_Get(CircleList* list, int pos);

/* delete the node by pos from list */
CircleListNode* CircleList_Delete(CircleList* list, int pos);

/* delete the node by slider */
CircleListNode* CircleList_DeleteNode(CircleList* list, CircleListNode* node);

/* reset the slider */
CircleListNode* CircleList_Reset(CircleList* list);

/* get the node by slider */
CircleListNode* CircleList_Current(CircleList* list);

/* move slider to next node */
CircleListNode* CircleList_Next(CircleList* list);

#endif
