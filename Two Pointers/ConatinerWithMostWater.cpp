int Solution::maxArea(vector<int> &a) {
    if(a.size()<2)
    {
        return 0;
    }
    int i = 0;
	int j = a.size()-1;
	int area = INT_MIN;
	while(i<j)
	{
		int x = (j-i)*(min(a[i],a[j]));
		if(x > area)
		{
			area  = x;
		}
		if(a[i]<a[j]) i++;
		else j--;
	}
	return area;
}
