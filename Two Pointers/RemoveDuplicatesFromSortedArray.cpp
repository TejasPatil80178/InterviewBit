int Solution::removeDuplicates(vector<int> &a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int n = a.size();
    if(n==0)
    {
    	cout<<0;
    	return 0;
    }
    //int nl = 1;
    int i = 1;
    int k = i;
    for(;i<n;i++)
    {
    	if(a[i-1]!=a[i])
    	{
    	    a[k] = a[i];
    	    k++;
    	}
    }
    return k;
}
