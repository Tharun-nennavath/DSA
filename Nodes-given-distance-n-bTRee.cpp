class Solution
{
private:

public:
     vector<int> out;
    
    void trace(Node* node, int k)
    {
        if (!node || k < 0)
            return;

        if (k == 0)
        {
            out.push_back(node->data);
            return;
        }

        trace(node->left, k - 1);
        trace(node->right, k - 1);
    }

    int findDist(Node* node, int target, int k)
    {
        if (!node)
            return INT_MIN;

        if (node->data == target)
        {
            trace(node, k);
            return k - 1;
        }

        int fromLeft = findDist(node->left, target, k);
        if (fromLeft != INT_MIN)
        {
            if (fromLeft == 0)
                out.push_back(node->data);
            else if (fromLeft > 0)
                trace(node->right, fromLeft - 1);

            return fromLeft - 1;
        }

        int fromRight = findDist(node->right, target, k);
        if (fromRight != INT_MIN)
        {
            if (fromRight == 0)
                out.push_back(node->data);
            else if (fromRight > 0)
                trace(node->left, fromRight - 1);

            return fromRight - 1;
        }

        return INT_MIN;
    }

    vector<int> KDistanceNodes(Node* root, int target, int k)
    {
        out = vector<int>(0);
        findDist(root, target, k);
        sort(out.begin(), out.end());
        return out;
        // return the sorted vector of all nodes at k dist
    }
};
