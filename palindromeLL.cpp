class Solution {
    ListNode *copy(ListNode *start1)
{
if(start1==NULL) return NULL;

ListNode* temp=new ListNode();

temp->val=start1->val;

temp->next=copy(start1->next);

return temp;

}
public:
    bool isPalindrome(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* pam=new ListNode(0);
        pam->next=head;
        ListNode* a= copy(head);
        
      while(curr!=NULL){
          ListNode* t=curr->next;
          curr->next=prev;
          prev=curr;
          curr=t;
      }
       /* while(prev){
            cout<<prev->val<<" ";
            prev=prev->next;
        }
        cout<<endl;*/
        while(a){
           if(a->val!=prev->val)return false;
            a=a->next;
            prev=prev->next;
        }
       return true;
    }
};
