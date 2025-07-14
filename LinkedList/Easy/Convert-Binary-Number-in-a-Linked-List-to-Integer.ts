/**
 * Definition for singly-linked list.
 * class ListNode {
 *     val: number
 *     next: ListNode | null
 *     constructor(val?: number, next?: ListNode | null) {
 *         this.val = (val===undefined ? 0 : val)
 *         this.next = (next===undefined ? null : next)
 *     }
 * }
 */

function getDecimalValue(head: ListNode | null): number {
    let str:string = '';
    let cur: ListNode | null = head;
    while(cur != null){
        str+= cur.val;
        cur = cur.next;
    }
    return parseInt(str, 2);
};
