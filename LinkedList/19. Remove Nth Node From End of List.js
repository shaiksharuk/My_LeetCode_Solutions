/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} n
 * @return {ListNode}
 */
var removeNthFromEnd = function(head, n) {
    
    if(head.next === null && n ===1) return head.next;
     
     let temp = head,target = head, count = 0 ;
     
     
     while(temp !== null)
         {
             
             if(count > n )
                {
                      target = target.next;
                    count++;
                }
             else
                 {
                     count++;
                 }
             
             
             temp = temp.next;
             
         }
    if(count == n && temp === null) head = head.next; 
        else
     target.next = target.next.next;
     
     return head;
     
 };
 
 
 
 
 
 