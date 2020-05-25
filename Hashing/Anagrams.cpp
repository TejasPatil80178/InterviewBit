vector<vector<int> > Solution::anagrams(const vector<string> &a) {
    int n = a.size();
    map<string,vector<int> > m;
	vector<vector<int> > v;
	for(int i=0;i<n;i++)
	{
		string s = a[i];
		sort(s.begin(),s.end());
		m[s].push_back(i+1);
	}
	for(auto it = m.begin();it!=m.end();it++)
	{
		v.push_back(it->second);
	}
	
	return v;
}
