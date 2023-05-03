# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


"""
You are given two non-empty linked lists representing two non-negative integers. 
The digits are stored in reverse order, and each of their nodes contains a single digit.
Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.
"""


# Function to insert node
def insert(root, item):
    temp = ListNode(val=item)

    if root == None:
        root = temp
    else:
        ptr = root
        while ptr.next != None:
            ptr = ptr.next
        ptr.next = temp

    return root


def arrayToList(arr, n):
    root = None
    for i in range(0, n, 1):
        root = insert(root, arr[n - i - 1])
    return root


def convertListToString(l) -> str:
    n = ""
    curr = l
    while curr != None:
        n = str(curr.val) + n
        curr = curr.next
    return n


class Solution:
    def addTwoNumbers(self, l1: list[ListNode], l2: list[ListNode]) -> list[ListNode]:
        n1 = convertListToString(l1)
        n2 = convertListToString(l2)
        n1 = int(n1)
        n2 = int(n2)
        sum = n1 + n2
        sum = str(sum)
        return arrayToList(sum, len(sum))
    
    # ! not actually OP
    def addTwoNumbersOP(self, l1: ListNode, l2: ListNode) -> ListNode:
        dummy = ListNode()
        cur = dummy

        carry = 0
        while l1 or l2 or carry:
            v1 = l1.val if l1 else 0
            v2 = l2.val if l2 else 0

            val = v1 + v2 + carry
            carry = val // 10
            val = val % 10
            cur.next = ListNode(val)

            cur = cur.next
            l1 = l1.next if l1 else None
            l2 = l2.next if l2 else None

        return dummy.next