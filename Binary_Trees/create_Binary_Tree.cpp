//https://www.codingninjas.com/studio/problems/create-binary-tree_8360671?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *left, *right;
    Node()
    {
        this->data = 0;
        left = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->left = NULL;
        this->right = NULL;
    }
    Node(int data, Node* left, Node* right)
    {
        this->data = data;
        this->left = left;
        this->right = right;
    }
};

*/

Node* createTree(vector<int>&arr){
    
    Node *root = new Node(arr[0]);
    root->left = new Node(arr[1]);
    root->right = new Node(arr[2]);
    root->left->left = new Node(arr[3]);
    root->left->right = new Node(arr[4]);
    root->right->left = new Node(arr[5]);
    root->right->right = new Node(arr[6]);

    return root;
}

// -------------------------------------------------- //

Node* createTree(vector<int>&arr){
    
    if(arr.empty())return NULL;

    Node *root = new Node(arr[0]);
    queue<Node*> NodeQueue;
    NodeQueue.push(root);

    for(int i=1; i<arr.size(); i+=2)
    {
       Node *current = NodeQueue.front();
       NodeQueue.pop();
       
       current->left = new Node(arr[i]);
       if(i+1<arr.size())
       {
         current->right = new Node(arr[i+1]);
       }

       NodeQueue.push(current->left);
       if(current->right)
       {
           NodeQueue.push(current->right);
       }
    }

    return root;
}
