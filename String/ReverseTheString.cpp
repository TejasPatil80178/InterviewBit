string Solution::solve(string s) {
    int n = s.length()-1;
	string b = "";
	string ans = "";
	for(int i = n;i>=-1;i--)
	{
		if(s[i]!=' ' && i>=0)
		{
			b+=s[i];
		}
		else{
			//cout<<s[i]<<" "<<i<<endl;
			reverse(b.begin(),b.end());
			if(!b.empty())
			{
				ans = ans + " " + b;
				b = "";
			}
		}
	}
	ans.erase(ans.begin());
	return ans;
}
