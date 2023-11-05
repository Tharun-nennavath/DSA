 #define ppi pair<int,int> 
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        priority_queue<ppi>maxh;
        
        vector<int>ans;
        
        unordered_map<int,int>mp;
        for(auto it: nums){
            mp[it]++;
        }
        
        for(auto it: mp){
            maxh.push({it.second,it.first});
        }
        
        while(k--){
            ans.push_back(maxh.top().second);
            maxh.pop();
        }
        
        return ans;
    }
