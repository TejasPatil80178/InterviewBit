int Solution::diffPossible(vector<int> &v, int k) {
    sort(v.begin(),v.end());
	int j = 0;
	int i = j+1;
	while(i<v.size() && j<v.size())
	{
		if(v[i]-v[j]==k && i!=j) {
			return 1;
		}
		else if(v[i]-v[j] < k) i++;
		else j++;
	}
	
	return 0;
}
