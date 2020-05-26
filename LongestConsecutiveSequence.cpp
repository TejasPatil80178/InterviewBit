int Solution::longestConsecutive(const vector<int> &a) {
    int n = a.size();
	map<int,int> m;
	for(int i=0;i<n;i++)
	{
		m[a[i]]++;
	}
	auto it = m.begin();
	int k = it->first;
	it++;
	int mp = 1;
	int c = 1;
	while(it!=m.end())
	{
		if(k+1 == it->first)
		{
			c++;
			k++;
		}
		else{
			c=1;
			k = it->first;
		}
		mp = max(mp,c);
		it++;
	}
	return mp;
}
