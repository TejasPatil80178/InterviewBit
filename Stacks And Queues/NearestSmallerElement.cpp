vector<int> Solution::prevSmaller(vector<int> &a) {
    stack<int> s;
	vector<int> v;
	for(int i=0;i<a.size();i++)
	{
		if(!s.empty())
		{
			while(s.top() >= a[i])
			{
				s.pop();
				if(s.empty()) break;
			}
		}
		if(s.empty())
		{
			v.push_back(-1);
			s.push(a[i]);
		}
		else{
			v.push_back(s.top());
			s.push(a[i]);
		}
	}
	
	return v;
}
