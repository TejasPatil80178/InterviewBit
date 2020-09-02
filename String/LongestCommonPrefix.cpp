string Solution::longestCommonPrefix(vector<string> &s) {
    sort(s.begin(),s.end());
    string c = s[0];
	int n = s.size();
	for(int i = 1;i<n;i++){
		string a;
		for(int j=0;j<min(s[i].size(),c.size());j++){
			if(c[j]==s[i][j]){
				a+=c[j];
			}
			else{
				c = a;
				break;
			}
		}
	}
	return c;
}
