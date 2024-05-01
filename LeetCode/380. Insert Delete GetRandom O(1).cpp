//https://leetcode.com/problems/insert-delete-getrandom-o1/description/?envType=daily-question&envId=2024-01-16

class RandomizedSet {
     vector<int> v;
     unordered_map<int,int> m;

public:
    RandomizedSet() {
         // RandomizedSet* obj = new RandomizedSet();
        
    }

    bool search(int val) {
        if(m.find(val) != m.end()) return true;
        return false;
    }
    
    bool insert(int val) {
        if(search(val)) return false;

        v.push_back(val);
        m[val] = v.size() - 1;
        return true;
      
    }
    
    bool remove(int val) {

        if(!search(val) ) return false;

        auto it = m.find(val);
        v[it->second] = v.back();
        v.pop_back();
         m[v[it->second]] = it->second;
        m.erase(val);
        return true;
        
    }
    
    int getRandom() {
        return v[rand()%v.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */