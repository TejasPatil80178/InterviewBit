void Solution::merge(vector<int> &a, vector<int> &b) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    for(int i=0;i<b.size();i++)
    {
        a.push_back(b[i]);
    }
    sort(a.begin(),a.end());
    
/*  int i = 0;
	int j = 0;
	int n = a.size();
	int m = b.size();
	while(i<a.size() && j<m)
	{
		//cout<<a[i]<<" "<<b[j]<<endl;
		if(b[j]<=a[i])
		{
			a.insert(a.begin() + i,b[j]);
			j++;
		}
		else{
			i++;
		}
	}
	if(j<m)
	{
		a.push_back(b[m-1]);
	} */
}
