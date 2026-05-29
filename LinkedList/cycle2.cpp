#include<iostream>
#include<list>
using namespace std;

struct ListNode{
    int data;
    ListNode* next;
    ListNode(int val){
        data = val;
        next = nullptr;
    }
};
ListNode* startpoint(ListNode* head){
    ListNode* slow = head;
    ListNode* fast = head;
    while (fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow){
            slow = head;
            while(slow != head){
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }
    }
    return NULL;
}
int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = head->next;
    ListNode* start = startpoint(head);
    if(start != NULL){
        cout << "Cycle starts at node with value: " << start->data << endl;
    } else {
        cout << "No cycle detected." << endl;
    }

}