int Solution::searchMatrix(vector<vector<int> > &v, int b) {
    int n = v.size();
	int m = v[0].size();
	int s = 0;
	int e = n*m -1;
	while(s<=e)
	{
		int mid = (s+e) / 2;
		int k = (mid / m);
		mid = mid%m;
		if(v[k][mid]==b)
		{
			return 1;
		}
		else if(v[k][mid] > b)
		{
			e = (k*m) + mid - 1;
		}
		else{
			s = (k*m) + mid + 1;
		}
	}
	
	return 0;
}
