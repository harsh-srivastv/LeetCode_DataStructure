<<<<<<< HEAD
# https://leetcode.com/problems/reverse-linked-list/?envType=study-plan&id=data-structure-i

# Definition for singly-linked list.
from typing import Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
        
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        
        if head is None: return None
        if head.next is None: return head
    
        curr = head
        nextt = curr.next
        prev = None
        
        while curr:
            nextt = curr.next
            curr.next = prev
            prev = curr
            curr = nextt
            
=======
# https://leetcode.com/problems/reverse-linked-list/?envType=study-plan&id=data-structure-i

# Definition for singly-linked list.
from typing import Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
        
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        
        if head is None: return None
        if head.next is None: return head
    
        curr = head
        nextt = curr.next
        prev = None
        
        while curr:
            nextt = curr.next
            curr.next = prev
            prev = curr
            curr = nextt
            
>>>>>>> ca96bc1ee23a53e4d3a97a029cf0c5f597ca1694
        return prev