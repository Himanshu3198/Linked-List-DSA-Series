//     Given a linked list of 0s, 1s and 2s, sort it. 
// Time complexity O(n)


Node* segregate(Node *head) {
        
        // Add code here
        
        int count_0=0,count_1=0,count_2=0;
        
        
        Node *temp=head;
        while(temp){
            
            if(temp->data==0){
                count_0++;
            }
            else if(temp->data==1){
                count_1++;
            }
            else{
                count_2++;
            }
            temp=temp->next;
        }
        
        temp=head;
        while(temp){
            
            if(count_0>0){
                temp->data=0;
                count_0--;
            }
            else if(count_1>0){
                temp->data=1;
                count_1--;
            }
            else{
                temp->data=2;
                count_2--;
            }
            temp=temp->next;
        }
        
        return head;
        
    }
