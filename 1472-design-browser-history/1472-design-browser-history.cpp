class BrowserHistory {
public:
    class Node {
        public:
        string data;
        Node* next;
        Node* prev;

        Node(string data1, Node* next1, Node* prev1){
            data= data1;
            next= next1;
            prev = prev1;
        }
        Node(string data1){
            data= data1;
            next = nullptr;
            prev = nullptr;
        }
    };
    Node* curr;
    BrowserHistory(string homepage) {
        curr = new Node(homepage);
    }
    
    void visit(string url) {
        Node* newNode = new Node(url);
        
        curr->next = nullptr;
        newNode->prev = curr;
        curr->next = newNode;

        curr= newNode;
    }
    
    string back(int steps) {
        while(curr->prev && steps--){
            curr =curr->prev;
        }
        return curr->data;
    }
    
    string forward(int steps) {
        while(curr->next && steps--){
            curr = curr->next;
        }
        return curr->data;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */