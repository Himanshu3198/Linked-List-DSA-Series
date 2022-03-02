// Time complexity O(n)
// Space complexity O(n)
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        Node *newList=NULL;
        Node *newHead=newList;
        
        unordered_map<Node*,Node*>mp;
        
          Node *temp=head;
        
          while(temp){
              
              
              Node *newNode=new Node(temp->val);
               mp[temp]=newNode;
              
              temp=temp->next;
          }
        
        temp=head;
        
        while(temp){
            
            mp[temp]->next=mp[temp->next];
            mp[temp]->random=mp[temp->random];
            
            temp=temp->next;
        }
        
       return mp[head];
    
    }
};

//  time complexity O(n)
//  space complexity O(1)
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
  
       
        Node *temp=head;
        
         Node *newList=NULL;
        
//          step 1 create new Nodes
          while(temp){
              
              
              Node *newNode=new Node(temp->val);
              if(newList==NULL){
                  newList=newNode;
              }
              
              newNode->next=temp->next;
              temp->next=newNode;
              temp=newNode->next;
          }
        
    // step 2 join random pointer
        
        temp=head;
        
        while(temp){
            
            temp->next->random=temp->random;
            temp=temp->next->next;
        }
        
        // step 3 join the newNodes
        
        temp=head;
        
        while(temp){
            
            Node *nextNode=temp->next->next;
            Node *cloneNode=temp->next;
            if(nextNode->next){
                cloneNode->next=nextNode->next; 
            }
          else
            temp=nextNode;
        }
        
        
        
        return newList;
    
    }
};
