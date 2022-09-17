class Node {
    Node *list[26];
    bool flag = false;
public: 
    bool containKey(char key) {
        return (list[key-'a'] != NULL);
    }
    
    void put(char key, Node *node) {
        list[key-'a'] = node;
    }
    
    Node* getNext(char key) {
        return list[key - 'a'];
    }
    void setEnd() {
        flag = true;
    }
    bool isEnd() {
        return flag;
    }
};


class Trie {
    Node* root;
public:
    Trie() {
        root = new Node();
    }
    
    void insert(string word) {
        int n = word.size();
        Node *node = root;
        for(int i = 0; i < n; i++) {
            if(node->containKey(word[i]) == false) {
                node->put(word[i], new Node());
            }
            node = node->getNext(word[i]);
        }
        node->setEnd();
    }
    
    bool search(string word) {
        int n = word.size();
        Node* node = root;
        for(int i = 0; i < n; i++) {
            if(!node->containKey(word[i])) {
                return false;
            }
            node = node->getNext(word[i]);
        }
        return node->isEnd();
    }
    
    bool startsWith(string prefix) {
        int n = prefix.size();
        Node* node = root;
        for(int i = 0; i < n; i++) {
            if(!node->containKey(prefix[i])) {
                return false;
            }
            node = node->getNext(prefix[i]);
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */