#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int var;
    struct Node * next;
} node;

node * makeNew(int a)
{
    node * temp = malloc(sizeof(node));
    temp->var=a;
    temp->next=NULL;
    return temp;
}

void insertNode(int n, node ** head)
{
    node * current = NULL;
    if(n>(*head)->var)
    {
        current = makeNew(n);
        current->next=*head;
        *head=current;
        return;
    }
    current = *head;
    while (current!=NULL)
    {
        if(current->next==NULL) break;
        if(n<current->var && n>current->next->var)
        {
            node * temp = NULL;
            temp = makeNew(n);
            temp->next = current->next;
            current->next=temp;
            return;
        }
        current = current->next;
    }
    current->next=makeNew(n);
}

int main() {
    node *head= makeNew(45);
    node *current = head;
    current->next=makeNew(34);
    current = current->next;
    current->next=makeNew(27);
    current=current->next;
    current->next=makeNew(19);
    current=current->next;

    insertNode(47, &head);
    insertNode(20, &head);
    insertNode(18, &head);

    current = head;
    while (current!=NULL)
    {
        printf("%d\n", current->var);
        current = current->next;
    }
    node *p = head;
    current = head;
    while(current!=NULL)
    {
        p = current->next;
        free(current);
        current = p;
    }


    return 0;
}