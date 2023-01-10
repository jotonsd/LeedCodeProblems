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

ListNode* middleNode(ListNode* head) {
    ListNode* middle = head;
    int count = 0, mid;
    while (middle !=nullptr)
    {
        count ++;
        middle = middle->next;
    }
    if (count == 1)
    {
        return head;
    }
    
    mid = count/2;
    middle = head;
    for (int i = 0; i < mid; i++)
    {
        middle = middle->next;
    }
    
    return middle;
    
}

// main function;
int main ()
{   
    vector <int> list1 = {1,2,3,4,5,6};
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

    ListNode* result = middleNode(head);

    cout<<result->val;

    return 0;
}