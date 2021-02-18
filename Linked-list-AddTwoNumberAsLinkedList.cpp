//  Add two numbers represented by linked lists
//  time and space complexity is (sizeofarray1+sizeofarray2)
#include <bits/stdc++.h>
#define SIZE(arr) (sizeof(arr) / sizeof(arr[0]))
using namespace std;

struct node
{
  int data;
  struct node *next;
  node(int x)
  {
    data = x;
    next = NULL;
  }
};

node *createList(int *arr, int n)
{
  node *head = new node(arr[0]);
  node *tail = head;

  for (int i = 1; i < n; i++)
  {
    tail->next = new node(arr[i]);
    tail = tail->next;
  }
  return head;
}

node *reverse(node *head)
{
  struct node *currnode = head, *prevnode = NULL, *nextnode = head;

  while (currnode != NULL)
  {
    nextnode = nextnode->next;
    currnode->next = prevnode;
    prevnode = currnode;
    currnode = nextnode;
  }
  return prevnode;
}

node *addTwoNumberAsLinkedList(node *first, node *second)
{

  first = reverse(first);
  second = reverse(second);
  int sum = 0, carry = 0;
  struct node *start = NULL, *end = NULL;
  while (first != NULL || second != NULL)
    
  {

    sum = carry + ( (first != NULL) ? first->data : 0 )+( (second != NULL) ? second->data: 0);
    
    carry = (sum >= 10) ? 1 : 0;
    sum = sum % 10;

    if (start == NULL)
    {
      start = new node(sum);
      end = start;
    }
    else
    {
      end->next = new node(sum);
      end = end->next;
    }
    if (first != NULL)
    {
      first = first->next;
    }
    if (second != NULL)
    {
      second = second->next;
    }
  }

  if (carry > 0)
  {
    end->next = new node(carry);
  }

  start = reverse(start);

  return start;
}

void display(node *head)
{
  while (head != NULL)
  {
    cout << head->data << "";
    head = head->next;
  }
  cout << "\n";
}

int main()
{
  int arr1[] = {5, 6, 3};
  int arr2[] = {8, 4, 2};
  node *head1, *head2, *result = NULL;
  head1 = createList(arr1, SIZE(arr1));
  //  head1=reverse(head1);
  head2 = createList(arr2, SIZE(arr2));
  // head2=reverse(head2);

  display(head1);
  display(head2);

  result = addTwoNumberAsLinkedList(head1, head2);
  display(result);
  return 0;
}