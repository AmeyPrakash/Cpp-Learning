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

ListNode *middle(ListNode* head){
    ListNode* slow=head;
    ListNode* fast = head;
    while(fast != NULL && fast->next != NULL){
        slow= slow->next;
        fast = fast->next->next;

    }
    return slow;

}
int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    ListNode* mid = middle(head);
    cout << "Middle node data: " << mid->data << endl;

    return 0;
}