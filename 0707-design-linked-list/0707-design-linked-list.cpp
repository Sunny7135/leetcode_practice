class MyLinkedList {
public:
    class Node{
        public:
        int data;
        Node* next;

        Node(int data1, Node* next1){
            data = data1;
            next = next1;
        }
    }; 
    Node* head;
    int size;   
    MyLinkedList() {
        head = nullptr;
        size = 0;
    }
    
    int get(int index) {
        if(index <0 || index>=size)return -1;

        Node* curr = head;
        while(index--){
            curr = curr->next;
        }
        return curr->data;
    }
    
    void addAtHead(int val) {
        Node* temp = new Node(val, nullptr);
        temp->next = head;
        head = temp;
        size++;
    }
    
    void addAtTail(int val) {
        Node* newNode = new Node(val, nullptr);
        if(head == nullptr){
            head = newNode;
            size++;
            return;
        }
        Node* curr= head;

        while(curr->next != NULL)curr = curr->next;

        curr->next = newNode;
        newNode->next= nullptr;
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index < 0 || index >size)return;
        if(index == 0){
            addAtHead(val);
            return;
        }
        Node* newNode = new Node(val, nullptr);

        Node* curr = head;
        for(int i=0; i<index-1; i++){
            curr= curr->next;
        }
        newNode->next= curr->next;
        curr->next = newNode;

        size++;

    }
    
    void deleteAtIndex(int index) {
        if(index<0 || index >=size)return;
        if(index ==0){
            Node* del = head;
            head = head->next;
            delete(del);
            size--;
            return;
        }
        Node* temp= head;
        for(int i =0; i<index-1; i++){
            temp = temp->next;
        }
        Node* del = temp->next;
        temp->next = del->next;
        delete(del);
        size--;
    }

};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */