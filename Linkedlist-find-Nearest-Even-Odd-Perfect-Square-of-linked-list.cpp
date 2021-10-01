/* Given a linked list consisting of N elements the task is to replace
 all the  element that are present at even position with their nearest
 perfect square and replace all the element that are present at odd position 
 with their  nearest odd perfect square 
 
  input 5->3->16->17->19
 output  1->4->9->16->25*/
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL;
void insertAtEnd(int data)
{

 
    if(head==NULL){
     Node *new_node = new Node();
    new_node->data = data;
    new_node->next = head;
    head = new_node;

    }else{

    Node *new_node = new Node();
    struct Node *temp;

    new_node->data = data;
    new_node->next = NULL;
     temp = head;
       while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = new_node;
        
    }
      

}

bool isPerfect(int n){

    int x=sqrt(n);
    if(x*x==n) return true;

    return false;
}

int func1(int num){
   
   int ans1 =num;
   int ans2=num;
       ans1++;
       ans2--;
    while(1){
    
       if(ans1%2!=0 and isPerfect(ans1)){
           break;
       }
       ans1++;
        
    }
      while(1){
     
        if(ans2<=0){
            break;
        }
       if(ans2%2!=0 and isPerfect(ans2)){
           break;
       }
       ans2--;
        
    }


    if(abs(ans1-num)<abs(ans2-num)){
      return ans1;
  }
  return  ans2;


}

int func2(int num){
   
   int ans1 =num;
   int ans2=num;
       ans1++;
       ans2--;
    while(1){
    
       if(ans1%2==0 and isPerfect(ans1)){
           break;
       }
       ans1++;
        
    }
      while(1){
     
        if(ans2<=0){
            break;
        }
       if(ans2%2==0 and isPerfect(ans2)){
           break;
       }
       ans2--;
        
    }


  if(abs(ans1-num)<abs(ans2-num)){
      return ans1;
  }
  return  ans2;



}
void display()
{
    struct Node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << "\n";
}
int main()
{
    
     insertAtEnd(5);
    insertAtEnd(3);
    insertAtEnd(16);
    insertAtEnd(17);
    insertAtEnd(19);

    display();
    bool flag=false;

     struct Node *ptr;
      ptr = head;

      while(ptr!=NULL){

          if(!flag){

              ptr->data=func1(ptr->data);
              flag=true;
          }
          else{

              ptr->data=func2(ptr->data);
              flag=false;
          }

          ptr=ptr->next;
      }

      display();



    return 0;
}
