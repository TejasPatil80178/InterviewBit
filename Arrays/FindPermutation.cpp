vector<int> Solution::findPerm(const string s, int n) {
    vector<int> v(n,0);
	int j = 1;
	int d = n;
	for(int i=0;i<n-1;i++){
		if(s[i]=='I'){
			v[i] = j;
			j++;
		}
		else{
			v[i] = d;
			d--;
		}
	}
	v[n-1] = (j+d) / 2;
    
    return v;
}
