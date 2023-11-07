vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        // code here
        int upper = 0 , lower = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j >= i){
                    upper += matrix[i][j];
                }
                if(j <= i) lower += matrix[i][j];
            }
        }
        return {upper , lower};
        
    }
};
