class Solution{
  public:
    // Return True if the given trees are isomotphic. Else return False.
    bool isIsomorphic(Node *root1,Node *root2)
    {
    //add code here.
 // Both roots are NULL, trees isomorphic by definition
 if (root1 == NULL && root2 == NULL)
    return true;
 
 // Exactly one of the n1 and n2 is NULL, trees not isomorphic
 if (root1 == NULL || root2 == NULL)
    return false;
 
 if (root1->data != root2->data)
    return false;
      // There are two possible cases for n1 and n2 to be isomorphic
 // Case 1: The subtrees rooted at these nodes have NOT been "Flipped".
 // Both of these subtrees have to be isomorphic, hence the &&
 // Case 2: The subtrees rooted at these nodes have been "Flipped"
 return
 (isIsomorphic(root1->left,root2->left) && isIsomorphic(root1->right,root2->right))||
 (isIsomorphic(root1->left,root2->right) && isIsomorphic(root1->right,root2->left));
}
};
