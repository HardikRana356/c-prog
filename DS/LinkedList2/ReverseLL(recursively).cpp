/* Given a singly linked list of integers, reverse it using recursion and return the head to the modified list. 
You have to do this in O(N) time complexity where N is the size of the linked list.

Sample Input 1 :
1
1 2 3 4 5 6 7 8 -1
Sample Output 1 :
8 7 6 5 4 3 2 1 */

Node *reverseLinkedListRec(Node *head)
{
    if(head == NULL || head -> next == NULL){
        return head;
    }
    Node* newHead = reverseLinkedListRec(head -> next);
    Node* last = head -> next;
    head -> next = NULL;
    last -> next = head;
    return newHead;
}