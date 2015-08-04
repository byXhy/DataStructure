#ifndef _EG_DLINKLINST_H_
#define _EG_DLINKLINST_H_

typedef void DLinkList;
typedef struct _tag_DLinkListNode DLinkListNode;
struct _tag_DLinkListNode {
    DLinkListNode* pre;
    DLinkListNode* next;
};

/* create list */
DLinkList* DLinkList_Create(void);

/* destroy list */
void DLinkList_Destroy(DLinkList* list);

/* clear all of node */
void DLinkList_Clear(DLinkList* list);

/* get the length of the list */
int DLinkList_Length(DLinkList* list);

/* insert a node */
int DLinkList_Insert(DLinkList* list, DLinkListNode* node, int pos);

/* get the node by pos from list */
DLinkListNode* DLinkList_Get(DLinkList* list, int pos);

/* delete the node by pos from list */
DLinkListNode* DLinkList_Delete(DLinkList* list, int pos);

/* delete the node by slider */
DLinkListNode* DLinkList_DeleteNode(DLinkList* list, DLinkListNode* node);

/* reset the slider */
DLinkListNode* DLinkList_Reset(DLinkList* list);

/* get the node by slider */
DLinkListNode* DLinkList_Current(DLinkList* list);

/* move slider to next node */
DLinkListNode* DLinkList_Next(DLinkList* list);

/* move slider to pre node */
DLinkListNode* DLinkList_pre(DLinkList* list);

#endif
