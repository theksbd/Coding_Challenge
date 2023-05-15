// success
// https://leetcode.com/problems/swapping-nodes-in-a-linked-list/
package com.leetcode;


// Definition for singly-linked list.
class ListNode {
    int val;
    ListNode next;
    ListNode() {}
    ListNode(int val) { this.val = val; }
    ListNode(int val, ListNode next) { this.val = val; this.next = next; }
}

class SwapNodesInLinkedList {
    public ListNode swapNodes(ListNode head, int k) {
        ListNode slow = head;
        ListNode fast = head;

        for (int i = 0; i < k - 1; i++) {
            fast = fast.next;
        }
        
        ListNode first = fast;

        while(fast.next != null) {
            slow = slow.next;
            fast = fast.next;
        }

        ListNode second = slow;

        int temp = first.val;
        first.val = second.val;
        second.val = temp;

        return head;
    }

    public static void main(String[] args) {
        SwapNodesInLinkedList s = new SwapNodesInLinkedList();
        ListNode l = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5)))));

	ListNode l1 = s.swapNodes(l, 2);
	for (int i = 0; i < 5; i++) {
	    System.out.print(l1.val + " ");
	    l1 = l1.next;
	}
    }
}