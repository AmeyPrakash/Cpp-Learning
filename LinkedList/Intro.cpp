#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List
{
    Node* head;
    Node* tail;
    public:
    List(){
        head = NULL;
        tail = NULL;       
    }

    void push_front(int val){
        Node* newNode = new Node(val); 
        if(head == NULL){
            head = tail = newNode;  
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;  
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front(){
        if(head == NULL){
            return;
        }
        
            Node* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;

    }

    void pop_back(){
        if(head == NULL){
            return;
        }
        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;  //memory deleted
        tail = temp;
    }
    void insert(int val, int pos){
        if(pos<0){
            cout<<"invalid Position\n";
            return;
        }
        if(pos == 0){
            push_front(val);
            return;
        }
        Node* temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
        
    }
    void search(int key){
        Node* temp = head;
        int pos = 0;
        if(temp == NULL){
            cout<< "list if empty\n";
            return;
        }
        while (temp != NULL)
        {
            if(temp->data == key){
                cout<<"Found at position: " << pos<<"\n";
                return;
            }
            temp = temp->next;
            pos++;
            
        }
        
    }

    void printLL() {
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<"\n";
    }


};


int main(){
    List ll;
    ll.push_front(10);
    ll.push_front(20);
    ll.push_front(50);
    ll.push_back(40);
    ll.push_back(30);
    ll.pop_front(); //50 is deleted
    ll.pop_back();//30 is deleted
    ll.insert(4,2);
    ll.printLL();
    ll.search(4);

    return 0;
}