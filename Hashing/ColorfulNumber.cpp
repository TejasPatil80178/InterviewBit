int Solution::colorful(int a) {
    string s = to_string(a);
	int n = s.size();
	map<long long, bool > mp;
	for(int i=0;i<n;i++)
	{
		long long x = 1;
		for(int j=i;j<n;j++)
		{
			x = x*(s[j] - '0');
			if(mp.find(x)!=mp.end()) return 0;
			
			mp[x] = 1;
		}
	}
	return 1;
}
