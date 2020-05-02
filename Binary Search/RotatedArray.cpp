int Solution::findMin(const vector<int> &a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n = a.size();
    for(int i=0;i<n-1;i++)
    {
        if(a[i] > a[i+1])
        {
            return a[i+1];
        }
    }
    
    return a[0];
    
}
