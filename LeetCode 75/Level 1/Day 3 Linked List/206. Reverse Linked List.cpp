#include <iostream>
#include <vector>
using namespace std;

/**
    Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* reverseList(ListNode* head) {
    vector <int> item;
    ListNode *reverse = new ListNode;
    ListNode *reverseHead = reverse;
 

    if (head == NULL )
    {
        return head;
    }
       
    int i;
    while (head != NULL)
    {
        item.push_back(i);
        item[i] = head->val;
        head = head->next;
        i++;
    }

    // list 1 to linked list 
    for (int i = item.size()-1; i >=0; i--)
    {
        reverse->val = item[i];
        if (i == 0)
        {
            reverse->next = NULL;
            break;            
        } 

        // declare new node;  
        reverse->next = new ListNode;
        reverse = reverse->next;
    }
    
    return reverseHead;
}

// main function;
int main ()
{   
    vector <int> list1 = {};
    ListNode* curr1 = new ListNode;
    ListNode* head1 = curr1;

    // list 1 to linked list 
    for (int i = 0; i < list1.size(); i++)
    {      
        curr1->val = list1[i];
        if (i == list1.size()-1)
        {
            curr1->next = NULL;
            break;
        }        
        // declare new node;  
        cout<<curr1->val<<" ";
        curr1->next = new ListNode;
        curr1 = curr1->next;
    }

    ListNode* result = reverseList(head1);
    while (result != NULL)
    {
        cout<<result->val<<"->";
        result = result->next;
    }    

    return 0;
}