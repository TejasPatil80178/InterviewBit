int Solution::strStr(const string a, const string b) {
	if(a.empty() || b.empty())
	{
		return -1;
	}
	
	int n = a.size();
	int m = b.size();
	for(int i = 0;i<n;i++)
	{
		if(b[0]==a[i])
		{
			if(a.substr(i,m) == b)
			{
			    return i;
			}
		}
	}
	return -1;
}
