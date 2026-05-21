class MyHashSet {
public:
    vector<pair<int, int>> hashSet;  
    MyHashSet() {
        
    }
    
    void add(int key) {
        for(int i=0; i<hashSet.size(); i++){
            if(hashSet[i].first == key){
                hashSet[i].second++;
                return;
            }
        }

        hashSet.push_back({key, 1});
    }
    
    void remove(int key) {
        for(int i=0; i<hashSet.size(); i++){
            if(hashSet[i].first == key){
                hashSet[i].second = 0;
                return;
            }
        }
    }
    
    bool contains(int key) {
        for(int i=0; i<hashSet.size(); i++){
            if(hashSet[i].first == key && hashSet[i].second != 0){
                return true;
            }
        }

        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */