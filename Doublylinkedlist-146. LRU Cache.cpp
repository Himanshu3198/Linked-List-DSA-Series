class LRUCache {
public:
      int count=0;
       map<int,int>mp;
        unordered_map<int,list<int>::iterator>element_pointer;
        list<int>doublylist;
    
    LRUCache(int capacity) {
        count=capacity;
    }
    
    
     void update(int key){
          
         
         doublylist.erase(element_pointer[key]);
         doublylist.push_front(key);
         element_pointer[key]=doublylist.begin();
           
         
     }
    int get(int key) {
          if(mp.find(key)==mp.end()) return -1;
        
          update(key);
        
           return mp[key];
    }
    
    void put(int key, int value) {
        
        
        if(mp.count(key)){
            
              update(key);
            mp[key]=value;
        }else{
        if(count>0){
              mp[key]=value;
               doublylist.push_front(key);
               element_pointer[key]=doublylist.begin();
            count--;
        }
        else if(count==0){
            
              
             int x= doublylist.back();
               doublylist.pop_back();
            mp.erase(x);
            element_pointer.erase(x);
            doublylist.push_front(key);
            element_pointer[key]=doublylist.begin();
              mp[key]=value;
            
              
        }
            
        }
     
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
