/**

 * Definition for singly-linked list.

 * public class ListNode {

 *     int val;

 *     ListNode next;

 *     ListNode() {}

 *     ListNode(int val) { this.val = val; }

 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }

 * }

 */

class Solution {

    public ListNode rotateRight(ListNode head, int k) {

        if(head == null) return null;

        

        int length = 1;

        ListNode dummy = head, temp = head;

        while(dummy.next != null){

            length++;

            dummy = dummy.next;

        }

        length = length - k % length; 

        for(int i = 1; i < length; i++)

            temp = temp.next;

        

        dummy.next = head;

        head = temp.next;

        temp.next = null;

        

        return head;

    }

}
