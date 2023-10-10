class Solution{
  public:
    int missingNumber(vector<int>& array, int n) 
    {
        sort(array.begin(), array.end());
        int k = 1;
        for(int i = 0; i < n ; i++)
        {
            if(array[i] == k)
            {
                k++;
            }
            else
            {
                return k;
            }
        }
    }
};
