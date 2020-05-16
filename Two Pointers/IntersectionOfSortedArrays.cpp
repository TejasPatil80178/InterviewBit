vector<int> soln(vector<int> a,vector<int> b)
{
	vector<int> ans;
	int n = b.size();
	int m = a.size();
	int i = 0;
	int j = 0;
	while(j<n)
	{
	    while(i<m)
	    {
	        if(b[j]==a[i])
	        {
	            ans.push_back(b[j]);
	            i++;
	            break;
	        }
	        else if(a[i] > b[j])
	        {
	            break;
	        }
	        i++;
	    }
	    j++;
	}
	
	return ans;
}

vector<int> Solution::intersect(const vector<int> &a, const vector<int> &b) {
    if(a.size() < b.size())
	{
		return soln(b,a);
	}
	else{
		return soln(a,b);
	}
}
