class RandomizedSet {
public:
    vector<int>vec; // For storing the value
    unordered_map<int,int> mp; // mapping
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mp.find(val)!=mp.end()){ // find value in map if the value present then return false
            return false;
        }
        int idx=vec.size(); // here check size of vector
        vec.push_back(val); // insert in vector
        mp[val]=idx; // now assign the index value to the element value
        cout<<mp[val]<<" "<<idx<<endl;
        return true; // return true because insertion succesfull
    }
    
    bool remove(int val) {
        // find value in map if the value not present then return false
        if(mp.find(val)==mp.end()){
            return false;
        }
        // here we check the position of val in the map
        int pos=mp[val];
        int lastI=vec.size()-1; // size of vector according to zero index
        int ele=vec[lastI];  // now get value of last element in the ele
        vec[pos]=ele;
        mp[ele]=pos;
        vec.pop_back(); // remove last value from vector
        mp.erase(val);  // erase the data from map 
        return true;
    }
    
    int getRandom() {
        int n=vec.size(); // get size of vector
        int i=rand()%n;  // use rand function to get random value 
        return vec[i];  // return  random element using rand() index from the vector  
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */