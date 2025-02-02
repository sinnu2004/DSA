/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/*class Solution {
public:
    int Len(ListNode* head){
        int count = 0;
        while(head!=NULL){
            count++;
            head = head->next;
        }
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = Len(head);
        int index = len-n;
        if(len==n){
            head = head->next;
            return head;
        }
        ListNode* temp = head;
        for(int i=1;i<=index-1;i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class ListNode{
    public:
        ListNode* head;
        int n;
        ListNode* head = NULL;
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow = head;
        ListNode* fast = head;
        for(int i=1;i<=n+1;i++){
            if(fast==NULL) return head->next;
            fast = fast->next;
        }
        while(fast!=NULL){
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = slow->next->next;
        return head;
    }
};
    int main(){
        ListNode ll;
        ListNode* a = new ListNode(10);
        
        ListNode* b = new ListNode(20);
        ListNode* c = new ListNode(20);
        ListNode* d = new ListNode(20);
        ListNode* e = new ListNode(20);
        ListNode* f = new ListNode(20);

        
        ll.removeNthFromEnd(head,2);
        
    }
