#include <iostream>
#include <vector>
using namespace std;

struct ListHead{
    int val;
    ListHead* children;
};

// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:
    vector<int> ans;
    int i;
    vector<int> preorder(Node* root) {
        if(!root) return ans;
        
        ans.push_back(root->val);
        for(auto root: root->children)
            preorder(root);        
        return ans;
    }
};

// main function;
int main ()
{   
    vector <int> list = {1,NULL,3,2,4,NULL,5,6};
    ListHead* root = new ListHead;
    for (auto i = 0; i < list.size(); i++)
    {
            root->val = list[i];
            if (i == list.size()-1)
            {
                root->children = NULL;
                break;
            }
            root->children = new ListHead;  
            root = root->children;
    }
    return 0;
}