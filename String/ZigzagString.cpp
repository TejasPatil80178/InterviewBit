string Solution::convert(string s, int r) {
    if(r==1) return s;
	int n = s.length();
	vector<string> v(r,"");
	bool flag = 0; //down
	int nr = 0;
	int i = 0;
	while(i<n)
	{
		v[nr]+=s[i];
		if(nr==0) flag = 0;
		else if(nr == r-1) flag = 1;
		
		if(flag) nr--;
		else nr++;
		
		i++;
	}
	string ans;
	for(int i=0;i<r;i++)
	{
		ans+=v[i];
	}
	
	return ans;
}
