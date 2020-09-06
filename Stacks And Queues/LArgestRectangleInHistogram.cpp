int Solution::largestRectangleArea(vector<int> &a) {
    int n = a.size();
    if(n==0) return 0;
    if(n==1) return a[0];
	int ans = 0;
	int i = 0;
	int t = 0;
	stack<int> s;
	while(i<n){
		if(s.empty()||a[i]>=a[s.top()]){
			s.push(i);
			i++;
		}
		else{
			int area = 0;
			t = s.top();
			s.pop();
			if(s.empty()){
				area = a[t] * i;
			}
			else{
				area = a[t] * (i-s.top()-1);
			}
			ans = max(area,ans);
		}
	}
	while(!s.empty()){
	    int area = 0;
		t = s.top();
		s.pop();
		if(s.empty()){
			area = a[t] * i;
		}
		else{
			area = a[t] * (i-s.top()-1);
		}
		ans = max(area,ans);
	}
	return ans;
}
