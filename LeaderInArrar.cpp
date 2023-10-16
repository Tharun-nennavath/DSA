vector<int>ans;
        int i = 0;
        int j = 1;
         while(i <= j && j < n)
         {
             if(a[i] >= a[j])
             {
                 if(j == n - 1)
                 {
                     ans.push_back(a[i]);
                     i++;
                     j = i + 1;
                 }
                 else
                 {
                     j++;
                 }
             }
             else
             {
                 i++;
                 j = i + 1;
             }
         }
         ans.push_back(a[n - 1]);
         return ans;
        
    }
