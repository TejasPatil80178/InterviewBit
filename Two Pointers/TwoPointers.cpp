void Solution::sortColors(vector<int> &a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more detail
    
    int n = a.size();
    int low = 0;
    int high = n-1;
    
    int  i=0;
    while(i<=high)
    {
        if(a[i]==0)
        {
            swap(a[i],a[low]);
            low++;
            i++;
        }
        else if(a[i]==1)
        {
            i++;
        }
        else {
            swap(a[i],a[high]);
            high--;
        }
    } 
    
}
