#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode* next = NULL;
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* margeList = new ListNode;
    ListNode* margeHead = margeList;

    if (list1 == NULL)
    {
        return list2;
    }
    if (list2 == NULL)
    {
        return list1;
    }
    while(list1 != NULL || list2 != NULL){

        if (list1 == NULL || list1->val > list2->val)
        {
            margeList->val = list2->val;
            list2 = list2->next;
        }else {
            margeList->val = list1->val;
            list1 = list1->next;
        }

        if (list1 == NULL && list2 == NULL)
        {
            margeList->next = NULL;
            break;
        }
        
        margeList->next = new ListNode;
        margeList = margeList->next;
        
    }
    return margeHead;    
}

// main function;
int main ()
{   
    vector <int> list1 = {1,2,4};
    vector <int> list2 = {1,3,4};

    ListNode* curr1 = new ListNode;
    ListNode* head1 = curr1;
    ListNode* curr2 = new ListNode;
    ListNode* head2 = curr2;

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
        curr1->next = new ListNode;
        curr1 = curr1->next;
    }

    // list2 1 to linked list ;
    for (int i = 0; i < list2.size(); i++)
    {        
        curr2->val = list2[i];
        
        if (i == list2.size()-1)
        {
            curr2->next = NULL;
            break;
        }
        // declare new node;        
        curr2->next = new ListNode;
        curr2 = curr2->next;
    } 

    ListNode* result = mergeTwoLists(head1, head2);

    while (result != NULL)
    {
        cout<<result->val<<" ";
        result = result->next;
    }  

    return 0;
}