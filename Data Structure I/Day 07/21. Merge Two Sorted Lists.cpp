<<<<<<< HEAD
// https://leetcode.com/problems/merge-two-sorted-lists/?envType=study-plan&id=data-structure-i

#include<bits/stdc++.h>
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
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        if(head1 == NULL) return head2;
        if(head2 == NULL) return head1;
        if(head1->val > head2->val) std::swap(head1, head2);
        ListNode *res = head1;
        while(head1 != NULL and head2 != NULL){
            ListNode * temp = NULL;
            while(head1 != NULL and head1->val <= head2->val){
                temp = head1;
                head1 = head1->next;
            }
            temp->next = head2;
            std::swap(head1, head2);
        }
        return res;
    }
=======
// https://leetcode.com/problems/merge-two-sorted-lists/?envType=study-plan&id=data-structure-i

#include<bits/stdc++.h>
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
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        if(head1 == NULL) return head2;
        if(head2 == NULL) return head1;
        if(head1->val > head2->val) std::swap(head1, head2);
        ListNode *res = head1;
        while(head1 != NULL and head2 != NULL){
            ListNode * temp = NULL;
            while(head1 != NULL and head1->val <= head2->val){
                temp = head1;
                head1 = head1->next;
            }
            temp->next = head2;
            std::swap(head1, head2);
        }
        return res;
    }
>>>>>>> ca96bc1ee23a53e4d3a97a029cf0c5f597ca1694
};