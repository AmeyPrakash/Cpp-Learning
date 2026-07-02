#include<iostream>
using namespace std;

 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if(head == NULL) return NULL;

        ListNode *t = head;
        ListNode* before = NULL;
        int position = 1;

        //  same position
        if(left == right){
            return head;
        }

        while(t != NULL){

            // to reach left
            if(position < left){
                before = t;
                t = t->next;
                position++;
                continue;
            }

            // reversing
            if(position >= left){
                ListNode* curr = t;
                ListNode* prev = NULL;

                int times = right - left + 1;

                // Reverse no. of nodes
                while(times--){
                    ListNode* next = curr->next;
                    curr->next = prev;
                    prev = curr;
                    curr = next;
                }

                // Connect tail of reversed part
                t->next = curr;

                // If left is not head
                if(before){
                    before->next = prev;
                    return head;
                }

                // If left == 1 (new head)
                return prev;  
            }
        }
        return head; // fallback (technically unreachable)
    }
};