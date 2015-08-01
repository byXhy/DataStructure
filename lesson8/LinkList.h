#ifndef _EG_LINKLINST_H_
#define _EG_LINKLINST_H_

typedef void LinkList;
typedef struct _tag_LinkListNode LinkListNode;
struct _tag_LinkListNode {
    LinkListNode* next;
};

/* create list */
LinkList* LinkList_Create(void);

/* destroy list */
void LinkList_Destroy(LinkList* list);

/* clear all of node */
void LinkList_Clear(LinkList* list);

/* get the length of the list */
int LinkList_Length(LinkList* list);

/* insert a node */
int LinkList_Insert(LinkList* list, LinkListNode* node, int pos);

/* get the node by pos from list */
LinkListNode* LinkList_Get(LinkList* list, int pos);

/* delete the node by pos from list */
LinkListNode* LinkList_Delete(LinkList* list, int pos);

#endif
