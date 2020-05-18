int Solution::threeSumClosest(vector<int> &a, int b) {
    int n = a.size();
	//int b = 1;
	sort(a.begin(),a.end());
	int min = INT_MAX;
	int k;
	for(int i=0;i<n-2;i++)
	{
		int l = i+1;
		int r = n-1;
		while(l<r)
		{
			int sum = a[i]+a[l]+a[r];
			if(abs(sum-b) < min)
			{
				min = abs(sum-b);
				k = sum;
			}
			if(sum == b)
			{
				return sum;
			}
			else if(sum>b)
			{
				r--;
			}
			else{
				l++;
			}
		}
	}
	
	return k;
}
