#include <iostream>
#include <vector>
using namespace std;

/**
    Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(NULL) {}
};

ListNode *detectCycle(ListNode *head) {
   if(!head || !head->next) return NULL;

   ListNode* slow  =head;   
   ListNode* fast  =head;      
   bool cicle = false;   
   while (slow && fast)
   {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            cicle = true;
            break;
        }
                
   }
   if (!cicle)
   {
    return NULL;
   }

   slow = head;
   while(slow != fast){
        slow = slow->next;
        fast = fast->next;
    }
//    returning the index 
   return slow;
    
}

// main function;
int main ()
{   
    vector <int> list1 = {3,2,0,-4};
    ListNode* curr = new ListNode;
    ListNode* head = curr;

    // list 1 to linked list 
    for (int i = 0; i < list1.size(); i++)
    {      
        curr->val = list1[i];
        if (i == list1.size()-1)
        {
            curr->next = NULL;
            break;
        }        
        // declare new node;  
        curr->next = new ListNode;
        curr = curr->next;
    } 
    ListNode* result = detectCycle(head);
    cout<<result;

    return 0;
}