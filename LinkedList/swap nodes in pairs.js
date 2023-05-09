/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var swapPairs = function(head) {
    
    if(head !== null && head.next !== null)
        {
            let temp1 = head.next.next , temp2 = head.next;
            
            head.next.next = head;
            head.next = swapPairs(temp1);
            
              
            return temp2;
            
            
        }
    else
        {
            return head;
        }
    
};