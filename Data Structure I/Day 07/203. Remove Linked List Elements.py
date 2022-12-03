# https://leetcode.com/problems/remove-linked-list-elements/?envType=study-plan&id=data-structure-i

# Definition for singly-linked list.
from typing import Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def removeElements(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:
        curr = head
        prev = None
        
        while curr:
            if curr.val == head.val and curr.val == val:
                curr = curr.next
                head = curr  
            elif curr.val == val:
                # temp = prev.next
                prev.next = curr.next
                curr = curr.next
            else:
                prev = curr
                curr = curr.next
                
        return head
                