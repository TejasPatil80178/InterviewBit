int Solution::mice(vector<int> &m, vector<int> &h) {
    sort(h.begin(),h.end());
	sort(m.begin(),m.end());
	int max = INT_MIN;
	for(int i=0;i<h.size();i++)
	{
	    int x = abs(h[i]-m[i]);
	    if(x>max)
	    {
	        max = x;
	    }
	}
	return max;
}
