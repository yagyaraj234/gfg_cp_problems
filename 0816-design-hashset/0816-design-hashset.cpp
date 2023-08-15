class MyHashSet {
public:
    vector<bool> hashSet;
    MyHashSet() {
        hashSet.resize(1000001,false);
    }
    
    void add(int key) {
        hashSet[key]=true;  
    }
    
    void remove(int key) {
        hashSet[key]=false; 
        
    }
    
    bool contains(int key) {

    return (hashSet[key]==true ? true : false);
        
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */