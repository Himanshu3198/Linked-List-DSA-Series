//  detect cycle in  a Linked List using c++
//  Time Complexity O(n)  where n is no of nodes in linked list

#include <iostream>
using namespace std;

struct Node
{

    struct Node *next;
    int data;
};

void insert(Node *head, int value)
{

    struct Node *newnode = new Node;

    newnode->data = value;
    newnode->next = head;
    head = newnode;
}

bool detectCycle(Node *head)
{
    Node *fast = head,*slow=head;
     bool iscycle=false;
    
    while (fast->next != NULL && fast->next->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            iscycle=true;
            return iscycle;
        }
    }
      return iscycle;
}

int main()
{
    Node *head = NULL;

    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);
    insert(head, 6);
    // createLoop(head);
    head->next->next->next->next = head;
    if (detectCycle(head))
    {
        cout << " cycle is found\n";
    }
    else
    {
        cout << "cycle is not found\n";
    }

    return 0;
}
  
