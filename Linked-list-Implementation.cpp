// #include <iostream>
// using namespace std;

// class Node
// {

// public:
//    int data;
//    Node *next;
//    Node *head = NULL;

//    // void Insert(int x)
//    // {

//    //    Node *new_node = new Node();

//    //    new_node->data = x;
//    //    new_node->next = head;
//    //    new_node = head;
//    // }

//    void display()
//    {

//       Node *ptr;
//       ptr = head;
//       while (ptr != NULL)
//       {
//          cout << ptr->data << "\n";
//          ptr = ptr->next;
//       }
//       cout << "\n";
//    }
// };

//   void Node::Insert(int x)
//    {

//       Node *new_node = new Node();

//       new_node->data = x;
//       new_node->next = head;
//       new_node = head;
//    }


// int main()
// {

//    Node linkedlist;
//    linkedlist.Insert(2);
//    linkedlist.Insert(4);
//    linkedlist.Insert(6);
//    linkedlist.Insert(8);
//    linkedlist.Insert(10);
//    linkedlist.display();

//    // return 0;
// }

#include <iostream>
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
struct Node* head = NULL;
void insert(int new_data) {
   // struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   Node* new_node=new Node();
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}
void display() {
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}
int main() {
   insert(3);
   insert(1);
   insert(7);
   insert(2);
   insert(9);
   cout<<"The linked list is: ";
   display();
   return 0;
}