const int N = 26;
struct TrieNode {
    struct TrieNode *t[N];
    bool isEnd;
    TrieNode () {
        isEnd = false;
        for(int i=0;i<N;i++)
            t[i] = NULL;
    }
};
class Trie {
public:
    struct TrieNode* t;
    /** Initialize your data structure here. */
    Trie() {
        t = new TrieNode();   
    }
    
    void helpInsert(TrieNode* r,string s)
    {
        struct TrieNode *p = r;
        for(int i=0;i<s.length();i++)
        {
            int index = s[i] - 'a';
            if(p->t[index] == NULL)
                p->t[index] = new TrieNode();
            p = p->t[index];
        }
        
        p->isEnd = true;
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        helpInsert(t , word);
    }
    
    /** Returns if the word is in the trie. */
    bool search(string s) {
        struct TrieNode* p = t;
        for(int i=0;i<s.length();i++)
        {
            int index = s[i] - 'a';
            if(p->t[index] == NULL)
                return false;
            
            p = p->t[index];
        }
        
        return (p != NULL && p->isEnd);
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string s) {
        struct TrieNode* p = t;
        for(int i=0;i<s.length();i++)
        {
            int index = s[i] - 'a';
            if(p->t[index] == NULL)
                return false;
            
            p = p->t[index];
        }
        
        return p!=NULL;
    }
};
