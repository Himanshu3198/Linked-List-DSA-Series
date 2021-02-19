#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void push(node **head, int data)
{
    node *newnode = new node();
    newnode->data = data;
    newnode->next = *head;
    *head = newnode;
}

node *reverseInGroupOfK(node *head,int k)
{
    struct node *prev = NULL, *curr = head, *nex = head;
    int count=0;

    while (curr != NULL && count<k)
    {
        nex = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nex;
        count++;
    }

       if(nex!=NULL){
           head->next=reverseInGroupOfK(nex,k);
       }
       head=prev;

       return head;
}

void display(node *head)
{

    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n";
}
int main()
{

    node *head = NULL, *head1;

    push(&head, 9);
    push(&head, 8);
    push(&head, 7);
    push(&head, 6);
    push(&head, 5);
     push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);
    display(head);

    head1 = reverseInGroupOfK(head,3);
    display(head1);

    return 0;
}