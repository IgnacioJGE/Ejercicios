/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 //recorro de forma recursiva la lista si en algun casi hay un loop devulelve true
class Solution {
public:
unordered_set<ListNode*> visited;
bool contains=false;
    bool hasCycle(ListNode *head) {
        if(head==NULL) return false;
        return recursivesrch(head);
        
    }
    bool recursivesrch(ListNode *head){
    visited.insert(head);
    if(head->next==NULL) return false;
    if(visited.contains(head->next)) {
        contains=true;
        return true;
    }
     recursivesrch(head->next);
     return contains;
    }
};