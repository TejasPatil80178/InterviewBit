int Solution::numRange(vector<int> &a, int b, int c) {
    int n = a.size();
	int count = 0;
	int j = 0;
	while(j<n)
	{
		int sum = 0;
		int i = j;
		while(i<n)
		{
			sum += a[i];
			if(sum>=b && sum<=c)
			{
				count++;
			}
			else if(sum > c)
			{
				break;
			}
			i++;
		}
		j++;
	}
	
	return count;
}
