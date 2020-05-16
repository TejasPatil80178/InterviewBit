unsigned int Solution::reverse(unsigned int a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    long long n = 0;
	for(int i = 31;i>=0;i--)
	{
		if(a%2==1)
		{
			//cout<<a<<" "<<pow(2,i)<<endl;
			n = n+(pow(2,i));
		}
		a = a>>1;
	}
	return n;
}
