class RandomizedSet {
public:
    /** Initialize your data structure here. */
    set<int> s;
    RandomizedSet() {
        
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(s.find(val) == s.end())
        {
            s.insert(val);
            return true;
        }
        
        return false;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if(s.find(val) == s.end())
        {
            return false;
        }
        s.erase(val);
        return true;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        int n = s.size();
        int v = rand()%n;
        for(auto i : s)
        {
            if(v == 0)
                return i;
            v--;
        }
        return 0;
    }
};
