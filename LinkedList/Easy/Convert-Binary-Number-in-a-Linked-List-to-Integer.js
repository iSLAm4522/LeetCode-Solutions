/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {number}
 */
const getDecimalValue = function (head) {
  let str = '';
  let cur = head;
  while (cur != null) {
    str += cur.val;
    cur = cur.next;
  }
  return parseInt(str, 2);
};
