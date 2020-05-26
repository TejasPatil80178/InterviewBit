vector<int> Solution::dNums(vector<int> &a, int k) {
	int n = a.size();
	vector<int> v;
	if(k>n) return v;
	map<int,int> m;
	int i = 0;
	int j = i+k-1;
	int t = i;
	while(t<=j)
	{
	    m[a[t]]++;
	    t++;
	}
	v.push_back(m.size());
	j++;
	while(j<n)
	{
	    m[a[i]]--;
	    if(m[a[i]] == 0 ) m.erase(a[i]);
	    i++;
	    m[a[j]]++;
	    v.push_back(m.size());
	    j++;
	}
	return v;
}
