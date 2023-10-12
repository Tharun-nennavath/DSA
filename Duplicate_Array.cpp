vector<int>v;
         int count=0,temp=-1;
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
              
            if(arr[i]==arr[i+1]){
                if(temp==arr[i+1])
                i=i+1;
                else{
                    v.push_back(arr[i+1]);
                   temp=arr[i];
                    
                }
              
            }
            else{
               count++;
               if(count==n)
            v.push_back(-1);
            }
            
            
        }
        
        return (v);
    }
