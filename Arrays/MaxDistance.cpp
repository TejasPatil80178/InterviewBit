int Solution::maximumGap(const vector<int> &a) {
    int n = a.size();
    if(n==1) return 0;
	vector<pair<int,int > >v;
	for(int i=0;i<n;i++)
	{
	    v.push_back(make_pair(a[i],i));
	}
	sort(v.begin(),v.end());
	int maxi = v[n-1].second;
	int j = n-1;
	int diff = INT_MIN;
	while(j>=0)
	{
		diff = max(diff,maxi-v[j].second);
		maxi = max(maxi,v[j].second);
		//cout<<diff<<" "<<maxi<<endl;
		j--;
	}
	if(diff<0)
	{
	    return -1;
	}
	return diff;
}
