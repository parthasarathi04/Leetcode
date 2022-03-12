/*
// Definition for a Node.
class Node {
    int val;
    Node next;
    Node random;

    public Node(int val) {
        this.val = val;
        this.next = null;
        this.random = null;
    }
}
*/

class Solution {
    public Node copyRandomList(Node head) {

        Node  temp1 = head;
        
        Map<Node, Node> map = new HashMap<>();

        
        while (temp1 != null) {
            
            map.putIfAbsent(temp1, new Node(temp1.val));
            
            if (temp1.random != null){ 
                map.putIfAbsent(temp1.random, new Node(temp1.random.val));
            }

            temp1 = temp1.next;

        }
      

        Node dummy = new Node(-1);

        Node temp2 = dummy;
        
        temp1 = head;
        
        while (temp1 != null) {

            temp2.next = map.get(temp1);

            temp2 = temp2.next;

            temp2.random = map.get(temp1.random);

            temp1 = temp1.next;

        }

        return dummy.next;
    }
}
