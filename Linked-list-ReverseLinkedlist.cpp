//  Reverse a Linked List using c++
//  Time Complexity O(n)  where n is no of nodes in linked list
     
#include <iostream>
using namespace std;

struct Node
{

    struct Node *next;
    int data;
};
struct Node *head = NULL;

void insert(int value)
{

    struct Node *newnode = new Node();

    newnode->data = value;
    newnode->next = head;
    head = newnode;
}

void reverse()
{
    struct Node *currentnode, *prevnode, *nextnode;

    prevnode = NULL;
    currentnode = head;
    while (currentnode != NULL)
    {
        nextnode = nextnode->next;
        currentnode->next = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    }
    head = prevnode;
}
void display()
{

    struct Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    // display();
    reverse();
    display();
    return 0;
}
