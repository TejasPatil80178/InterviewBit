int Solution::lengthOfLongestSubstring(string s) {
    int n = s.size();
	int i = -1;
	int j = 0;
	int res = -1;
	map<char,int> m;
	while(j<n)
	{
		if(m.count(s[j]) && m[s[j]] > i)
		{
			i = m[s[j]];
		}
		m[s[j]] = j;
		res = max(res,j-i);
		j++;
	}
	//cout<<res;
	return res;
}
