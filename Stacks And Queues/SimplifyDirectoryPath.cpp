string Solution::simplifyPath(string s) {
    stack<string> st;
	int n=s.length();
	for(int i=0;i<n;i++)
	{
		if(s[i]=='.' && s[i+1]=='.')
		{
			if(!st.empty()) st.pop();
		}
		else if(s[i]-'a' >=0 && s[i]-'a' <= 25){
		    string a;
		    while(s[i]-'a' >=0 && s[i]-'a' <= 25)
		    {
		        a+=s[i];
		        i++;
		    }
			st.push(a);
		}
	}
	stack<string> st1;
	while(!st.empty())
	{
	    st1.push(st.top());
	    st.pop();
	}
	string ans;
	while(!st1.empty())
	{
	    ans+="/" + st1.top();
	    st1.pop();
	}
	if(ans.empty())
	{
	    ans+="/";
	}
	return ans;
	
}
