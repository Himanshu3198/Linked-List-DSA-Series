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
        
       if(!head) return NULL;
        Node *temp=head;
        // create the newnodes
        while(temp){
            
            Node *newNode=new Node(temp->val);
            newNode->next=temp->next;
            temp->next=newNode;
            temp=newNode->next;
        }
        
        temp=head;
        
        // connecting  the random pointer
        
        
        while(temp){
         // temp->random->next because it also should be random pointer not temp random
            if(temp->random)
            temp->next->random=temp->random->next;
            temp=temp->next->next;
        }
        
        // connecting new nodes
        
        
        temp=head;
        Node *result=temp->next;
        
        while(temp){
            
            Node *copyNode=temp->next;
            if(temp and temp->next)
            temp->next=copyNode->next;
            if(copyNode->next)
            copyNode->next=temp->next->next;
            temp=temp->next;
            
        }
        
        return result;
        
        
        
        
        
        
  
    }
};
