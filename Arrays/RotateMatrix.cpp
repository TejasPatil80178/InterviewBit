void Solution::rotate(vector<vector<int> > &v) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    
    
    int n = v.size();
    
    //step 1 transpose the matrix
    for(int i=0;i<n;i++)
    {
    	for(int j = i;j<n;j++)
    	{
    		int k = v[i][j];
    		v[i][j] = v[j][i];
    		v[j][i] = k;
    	}
    }
    
    //step 2 reverse each row
    for(int i=0;i<n;i++)
    {
    	reverse(v[i].begin(),v[i].end());
    }
}
