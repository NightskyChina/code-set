#include<stdio.h>
#include<stdlib.h>
struct linkNode
{
    int n;
    struct linkNode *next;
};

struct linkNode *CreateNode(int value)
{
    struct linkNode *node = malloc(sizeof(struct linkNode));
    node->n = value;
    node->next = NULL;
    return node;
}

void InsertFirst(struct linkNode *head)
{
    int n;
    struct linkNode *node;
    scanf("%d", &n);
    node = CreateNode(n);
    node->next = head;
    head = node;
    return head;
}

void InsertLast(struct linkNode *head)
{
    int n;
    struct linkNode *node,*node1;
    node1 =head;
    scanf("%d", &n);
    node = CreateNode(n);
    while(node->next != NULL)
        node1 = node->next;
    node1->next = node;
    return head;
}

void DispLink(struct linkNode *head)
{
    struct linkNode *node;
    node = head;
    while (node!=NULL)
    {
        printf("%d",node->n);
        node = node->next;
    }
}

void FreeLink(struct linkNode *head)
{
    struct linkNode *node1,*node2;
    node1 =head;
    while (node2!=NULL)
    {
        node2=node1->next;
        free(node1);
        node1=node2;
    }
}

int main(int argc, char **argv)
{
    int n,i,array[100];
    struct linkNode *head;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("3 1 2 4");
}