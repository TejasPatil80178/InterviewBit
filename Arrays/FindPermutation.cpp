vector<int> Solution::findPerm(const string s, int n) {
    //int n = s.length()+1;
	int d = 0;
	int i = 0;
	for(int j = 0;j<s.length();j++)
	{
		if(s[j]=='D')
		{
			d++;
		}
	}
	i = d+1;
	vector<int> v;
	v.push_back(i);
	i++;
	for(int j = 0;j<s.length();j++)
	{
		if(s[j]=='D')
		{
			v.push_back(d);
			d--;
		}
		else{
			v.push_back(i);
			i++;
		}
	}
	
	return v;
}
