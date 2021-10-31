430. Flatten a Multilevel Doubly Linked List

class Solution {
public:
	Node* flatten(Node* head) {
		if(!head) return head;
		solve(head);
		return head;
	}

Node* solve(Node* ptr){
    
    Node *temp=NULL;
    
    while(ptr != NULL){
        
        if(ptr->child != NULL){
            
            temp = ptr->next;
            ptr->next = ptr->child;
            ptr->child->prev = ptr;
            ptr->child=NULL;
            Node* tmp = solve(ptr->next);
            
            tmp->next = temp;
            if(temp)
                temp->prev = tmp;
            
        }else {
            if(!ptr->next) return ptr;
            ptr = ptr->next;
            if(!ptr->next) return ptr;
        }
    }
    
    return ptr;
}
