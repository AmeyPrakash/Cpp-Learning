#include<iostream>
using namespace std;

struct ListNode{
    int data;
    ListNode* next;
    ListNode(int val){
        data = val;
        next = nullptr;

    }
};

bool cycle(ListNode* head){
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            return true;
        }
    }
    return false;
}
int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = head->next;
    if(cycle(head)){
        cout << "Cycle detected." << endl;
    } else {
        cout << "No cycle detected." << endl;
    }
    return 0;
}