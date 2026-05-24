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

class List{

    Node* head;
    Node* tail;

    // Private helper function
    Node* reverseList(Node* head){

        Node* prev = NULL;
        Node* curr = head;

        while(curr != NULL){

            Node* nextNode = curr->next;

            curr->next = prev;

            prev = curr;

            curr = nextNode;
        }

        return prev;
    }

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
        else{
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val){

        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front(){

        if(head == NULL){
            cout<<"List is empty\n";
            return;
        }

        Node* temp = head;

        head = head->next;

        temp->next = NULL;

        delete temp;

        // if list becomes empty
        if(head == NULL){
            tail = NULL;
        }
    }

    void pop_back(){

        if(head == NULL){
            cout<<"List is empty\n";
            return;
        }

        // single node case
        if(head == tail){

            delete head;

            head = tail = NULL;

            return;
        }

        Node* temp = head;

        while(temp->next != tail){
            temp = temp->next;
        }

        temp->next = NULL;

        delete tail;

        tail = temp;
    }

    void insert(int val, int pos){

        if(pos < 0){
            cout<<"Invalid Position\n";
            return;
        }

        if(pos == 0){
            push_front(val);
            return;
        }

        Node* temp = head;

        for(int i = 0; i < pos - 1; i++){

            if(temp == NULL){
                cout<<"Invalid Position\n";
                return;
            }

            temp = temp->next;
        }

        if(temp == NULL){
            cout<<"Invalid Position\n";
            return;
        }

        Node* newNode = new Node(val);

        newNode->next = temp->next;

        temp->next = newNode;

        // update tail if inserted at end
        if(newNode->next == NULL){
            tail = newNode;
        }
    }

    void search(int key){

        Node* temp = head;

        int pos = 0;

        if(temp == NULL){
            cout<<"List is empty\n";
            return;
        }

        while(temp != NULL){

            if(temp->data == key){

                cout<<"Found at position: "<<pos<<"\n";

                return;
            }

            temp = temp->next;

            pos++;
        }

        cout<<"Not Found\n";
    }

    void reverse(){

        tail = head;

        head = reverseList(head);
    }

    void printLL(){

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

    ll.insert(4, 2);

    cout<<"OriginalList:\n";
    ll.printLL();

    ll.search(4);

    ll.reverse();

    cout<<"Reversed:\n";
    ll.printLL();

    ll.pop_front();

    cout<<"After popfront:\n";
    ll.printLL();

    ll.pop_back();

    cout<<"After popback:\n";
    ll.printLL();

    return 0;
}