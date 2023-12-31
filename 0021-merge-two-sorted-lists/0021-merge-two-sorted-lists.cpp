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
class Solution {
    ListNode *merge(ListNode *list1,ListNode *list2){
         if(!list1)return list2;
        if(!list2)return list1;
        
       
        
       
     
        
        ListNode *dummy=new ListNode(-1);
        ListNode *dummy2=list1;
        
        while(list1 && list2)
        {
            if(list1->val <= list2->val){
                
                dummy->next=list1;
                dummy=dummy->next;
                list1=list1->next;
                
            }else{
                
                dummy->next=list2;
                dummy=dummy->next;
                list2=list2->next;
            }
            
            
        }
        if(list1){
            dummy->next=list1;
        }
         if(list2){
            dummy->next=list2;
        }
        
        return dummy2;
    }
    
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       
         if(!list1)return list2;
        if(!list2)return list1;
        
         if(list1->val > list2->val){
            return merge(list2,list1);
        }
        else{
            return merge(list1,list2);
        }
        
    }
};