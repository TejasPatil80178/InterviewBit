int Solution::findMinXor(vector<int> &a) {
    sort(a.begin(),a.end());
	int n = a.size();
	int min = INT_MAX;
	for(int i=0;i<n-1;i++)
	{
		int x = a[i]^a[i+1];
		if(x<min)
		{
			min = x;
		}
	}
	
	return min;
}
