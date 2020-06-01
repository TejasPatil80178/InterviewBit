int Solution::bulbs(vector<int> &v) {
    bool b = 0;
    int c = 0;
	int n = v.size();
	for(int i=0;i<n;i++)
	{
		if(v[i]==b)
		{
			if(b==0) b = 1;
			else b = 0;
			c++;
		}
	}
	return c;
}
