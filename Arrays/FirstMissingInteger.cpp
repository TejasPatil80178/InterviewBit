int Solution::firstMissingPositive(vector<int> &a) {
    int n = a.size();
	vector<int> p;
	int j = 0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>=1)
		{
			p.push_back(a[i]);
			j++;
		}
	}
	if(p.empty())
	{
		return 1;
	}
	else{
		int k = 1;
		sort(p.begin(),p.end());
		for(int i=0;i<p.size();i++)
		{
		    //cout<<p[i]<<" "<<k<<endl;
			if(p[i]==k)
			{
				k++;
			}
			else{
				return k;
			} 
		}
	}
	return p[p.size()-1]+1;
}
