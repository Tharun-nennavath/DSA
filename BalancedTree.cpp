class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int height(Node *root)
    {
        if(root == NULL)
        {
            return 0;
        }
        else
        {
            int r , l;
            r = height(root -> right);
            l = height(root -> left);
            return 1 + max(r , l);
        }
    }
    bool isBalanced(Node *root)
    {
        if(root == NULL)
        {
            return true;
        }
        int lh = height(root->left);
        int rh = height(root -> right);
        if(abs(lh - rh) <= 1 && isBalanced(root->left) && isBalanced(root->right))
        {
            return true;
    }
    else
    return false;
    }
};
