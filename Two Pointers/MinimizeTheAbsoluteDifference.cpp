int Solution::solve(vector<int> &a, vector<int> &b, vector<int> &c) {
    int i = a.size()-1;
    int j = b.size()-1;
    int k = c.size()-1;
    int minDiff = INT_MAX;
    while(i>=0 && j>=0 && k>=0)
    {
    	int diff = max(a[i],max(b[j],c[k])) - min(a[i],min(b[j],c[k]));
    	if(diff < minDiff)
    	{
    		minDiff = diff;
    	}
    	
    	if(a[i] >= b[j] && a[i]>=c[k]) i--;
    	else if(b[j] >= c[k] && b[j] >= a[i]) j--;
    	else if(c[k] >= a[i] && c[k] >= b[j]) k--;
    }
    
    return minDiff;
}
