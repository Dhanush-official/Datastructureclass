#include <stdio.h>
#include <stdlib.h>


struct Node
{
    int data;
    struct Node * next;


};


void LinkedListTraversal(struct Node  *ptr)
{
    while(ptr != NULL)
    {
        printf("Element : %d\n",ptr->data);
        ptr = ptr->next;
    }
}
void SearchValue(struct Node * ptr,int data)
{
    int i = 0;
    while(ptr->data != data)
    {
        ptr = ptr->next;
        i++;
    }
    printf("Element[%d] Found in Node at index[%d]",ptr->data,i);
}
struct Node * insertAtfirst(struct Node * head, int data)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}
struct Node * insertAtIndex(struct Node *head,int data,int index)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node * p = head;
    int i = 0;

    while(i != index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data; 
    ptr->next = p->next;
    p->next   = ptr;
    return head;

}
struct Node * insertAtEnd(struct Node * head,int data)
{
        struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
        ptr->data = data;
        struct Node * p = head;
        while(p->next != NULL)
        {
            p = p->next;
        }
        p->next = ptr;
        ptr->next = NULL;

        return head;
}
struct Node * insertAtNode(struct Node * head, struct Node *prevNode,int data)
{
    struct Node * ptr = (struct Node * )malloc(sizeof(struct Node));
    ptr->data =data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;

    return head;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data=20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = NULL;

    LinkedListTraversal(head);
    //If you wanted to use them just uncomment t
    // head = insertAtfirst(head,15);
    // head = insertAtIndex(head,56,3);
    // head = insertAtEnd(head,33);
    // SearchValue(head,20);
    // insertAtNode(head,second,35);
    printf("\n\n");
    LinkedListTraversal(head);

}