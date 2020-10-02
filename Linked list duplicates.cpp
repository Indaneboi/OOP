#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *newNode(int data)
{
   Node *temp = new Node;
   temp->data = data;
   temp->next = NULL;
   return temp;
}

void removeDuplicates(struct Node *start)
{
    struct Node *ptr1, *ptr2, *dup;
    ptr1 = start;

    while (ptr1 != NULL && ptr1->next != NULL)
    {
        ptr2 = ptr1;

        while (ptr2->next != NULL)
        {
            if (ptr1->data == ptr2->next->data)
            {
                dup = ptr2->next;
                ptr2->next = ptr2->next->next;
                delete(dup);
            }
            else
                ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
}

void printList(struct Node *node)
{
    while (node!= NULL)
    {
        cout<<node->data<<" ";
        node = node->next;
    }
}

int main()
{
    struct Node *start = newNode(1);
    start->next = newNode(2);
    start->next->next = newNode(4);
    start->next->next->next = newNode(3);
    start->next->next->next->next = newNode(2);
    start->next->next->next->next->next = newNode(1);
    start->next->next->next->next->next->next = newNode(4);

    cout<<"Linked list before removing duplicates ";
    printList(start);

    removeDuplicates(start);

    cout<<"\nLinked list after removing duplicates ";
    printList(start);

    return 0;
}
