int Solution::nchoc(int k, vector<int> &a) {
    int n = a.size();
    priority_queue <int> pq;
	for(int i=0;i<n;i++)
	{
		pq.push(a[i]);
	}
	int c = 0;
	while(k>0)
	{
		int temp = pq.top();
		pq.pop();
		c = (c%1000000007) + (temp%1000000007);
		pq.push(temp/2);
		k--;
	}
	
	return (c%1000000007);
}
