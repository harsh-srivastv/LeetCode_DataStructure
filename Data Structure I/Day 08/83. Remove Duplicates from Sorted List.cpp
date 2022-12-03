// https://leetcode.com/problems/remove-duplicates-from-sorted-list/?envType=study-plan&id=data-structure-i

#include<bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
//      Approach 1
        ListNode* curr = head;
        while(curr != NULL and curr->next != NULL){
            if( curr->val == curr->next->val){
                ListNode* temp = curr->next;
                curr->next = curr->next->next;
                delete(temp); 
            }
            else
                curr = curr->next;
            
        }
        return head;
//         Approach 2
        
//         for(ListNode *n=head; n!=NULL; n = n->next){
//             ListNode *pre = n;
//             ListNode *temp = n->next;
            
//             while(temp!=NULL && temp->val == n->val){
//                 pre = temp;
//                 temp = temp->next;
//             }
//             n->next = pre->next;
            
//         }
//         return head;
    }
};