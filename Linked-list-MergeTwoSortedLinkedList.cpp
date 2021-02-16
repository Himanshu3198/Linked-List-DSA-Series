// merge two sorted Linked List using extra space in cpp
// time and space complexity O(n+m) & O(1)
#include<bits/stdc++.h>
#define SIZE(arr) (sizeof(arr) / sizeof(arr[0]))
using namespace std;


struct node{
    int data;
    struct node*next;
};
// struct node* head=NULL;
node *createList(int *arr,int n){
   node *head, *p;
//    int n=sizeof(arr)/sizeof(arr[0]);
   p = head = new node;
   head->data = arr[0];
   head->next = NULL;
   for (int i = 1; i < n; ++i) {
      p->next = new node;
      p = p->next;
      p->data = arr[i];
      p->next = NULL;
   }
return head;
}

node *mergeSortedLists(node *head1,node *head2){
    node *result=NULL;
    if (head1 == NULL) {
      return head2;
   }
   if (head2 == NULL) {
      return head1;
   }
   if(head1->data < head2->data){
       result=head1;
       result->next=mergeSortedLists(head1->next,head2);
   }
   else{
       result=head2;
       result->next=mergeSortedLists(head1,head2->next);
   }

   return result;
}

void display(node *head){
   while (head != NULL) {
      cout << head->data << " ";
      head = head->next;
   }
   cout << endl;
}


int main(){
    int arr1[]={1,3,5,7};
    int arr2[]={2,4,6,8};
    node *head1,*head2,*result=NULL;
    head1=createList(arr1,SIZE(arr1));
     head2=createList(arr2,SIZE(arr2));
    display(head1);
    display(head2);
    result=mergeSortedLists(head1,head2);
    display(result);
    return 0;
}