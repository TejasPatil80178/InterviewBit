int Solution::numSetBits(unsigned int a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int c = 0;
    while(a>0)
    {
        if(a%2==1)
        {
            c++;
        }
        a = a>>1;
    }
    return c;
}
