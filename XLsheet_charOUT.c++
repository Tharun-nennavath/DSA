class Solution{
    public:
    string colName (long long int n)
    {
       string result = "";
 
    while (n > 0)
    {
        // find the index of the next letter and concatenate the letter
        // to the solution
 
        // here index 0 corresponds to 'A', and 25 corresponds to 'Z'
        int index = (n - 1) % 26;
        result = char(index + 'A') + result;
        n = (n - 1) / 26;
    }
 
    return result;
    }
};
