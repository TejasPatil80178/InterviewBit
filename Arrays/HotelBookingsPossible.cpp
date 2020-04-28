bool Solution::hotel(vector<int> &a, vector<int> &d, int k) {

// O(N^2) algorithm
  /*  vector<pair<int,int> > v;
    int n = a.size();
    for(int i=0;i<n;i++)
    {
        pair<int,int> p;
        p = make_pair(a[i],d[i]);
        if(a[i]!=d[i])
        {
            v.push_back(p);   
        }
    }
    sort(v.begin(),v.end());
	vector<int> b;
	b.push_back(v[0].second);
	k--;
	int j = 1;
	while(j<v.size())
	{
		bool flag = 1;
		for(int i=0;i<b.size();i++)
		{
			if(v[j].first >= b[i])
			{
				b[i] = v[j].second;
				j++;
				flag = 0;
				break;
			}
		}
		if(flag)
		{
			b.push_back(v[j].second);
			j++;
			k--;
		}
		if(k<0)
		{
			return 0;
		}
	}
	return 1; */
	
	//// O(N) algorithm
	sort(a.begin(),a.end());
	sort(d.begin(),d.end());
	int i=0;
	int j=0;
	int c = 0;
	int n = a.size();
	while(i<n && j<n)
	{
	    if(a[i] < d[j])
	    {
	        c++;
	        i++;
	    }
	    else{
	        c--;
	        j++;
	    }
	    cout<<i<<" "<<j<<" "<<c<<endl;
	    if(c>k)
	    {
	        return 0;
	    }
	}
	
	return 1;
}
