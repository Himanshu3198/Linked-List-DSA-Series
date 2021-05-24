// Multiply two linked lists 
const int MOD=1e9+7;
long long  multiplyTwoLists (Node* l1, Node* l2)
{
  //Your code here
  
    long long num1=0,num2=0;
    
    Node*temp=l1,*temp2=l2;
    while(temp!=NULL){
        num1=num1*10+temp->data;
        num1=(num1)%MOD;
        temp=temp->next;
    }
    
   
    while(temp2!=NULL){
        num2=num2*10+temp2->data;
        num2=(num2)%MOD;
        temp2=temp2->next;
    }
    
    long long ans=(num1*num2)%MOD;
    
    return ans;
}
