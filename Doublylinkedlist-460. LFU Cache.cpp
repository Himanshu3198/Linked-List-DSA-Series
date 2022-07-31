class LFUCache {
public:
    
    int cacheSize;
    unordered_map<int,list<int>>freq_of_key;  // storing key by their frequency
    unordered_map<int,list<int>::iterator>listItr;  // storing key position in doubly list
    unordered_map<int,pair<int,int>>keyInfo;  // <value,freq>
    int minFreq=0;
    int intialCapicity;
    void update(int key){
        
        int currFreq=keyInfo[key].second;
        auto it=listItr[key];
        freq_of_key[currFreq].erase(it);
        currFreq++;
        keyInfo[key].second++;
        freq_of_key[currFreq].push_front(key);
        listItr[key]=freq_of_key[currFreq].begin();
        if(freq_of_key[minFreq].size()==0){
            minFreq++;
        }
        
    }
    
    LFUCache(int capacity) {
        
        cacheSize=capacity;
        intialCapicity=capacity;
    }
    
    int get(int key) {
        
        if(!keyInfo.count(key)) return -1;
        update(key);
        return keyInfo[key].first;
    }
    
    void put(int key, int value) {
         if(intialCapicity<=0) return;
        if(keyInfo.count(key)){
            keyInfo[key].first=value;
            update(key);
        }else{
            if(cacheSize==0){
                int key_to_remove=freq_of_key[minFreq].back();
                freq_of_key[minFreq].pop_back();
                keyInfo.erase(key_to_remove);
                listItr.erase(key_to_remove);
            } else cacheSize--;
            
            keyInfo[key]={value,1};
            minFreq=1;
            freq_of_key[1].push_front(key);
            listItr[key]=freq_of_key[1].begin();
            
            
        }
    }
};

/**
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache* obj = new LFUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
