int Solution::removeElement(vector<int> &a, int b) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n = a.size();
    int i=0;
    int k = i;
    while(i<a.size())
    {
        while(a[i]==b && i<a.size())
        {
            i++;
            n--;
        }
        a[k] = a[i];
        k++;
        i++;
    }
    
    return n;
}
    
