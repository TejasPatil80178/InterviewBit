string Solution::addBinary(string a, string b) {
    int n = a.length();
	int m = b.length();
	if(n>m)
	{
		b.insert(b.begin(),n-m,'0');
	}
	else if(m>n)
	{
		a.insert(a.begin(),m-n,'0');
	}
	string ans;
	bool flag = 0;
	for(int i = max(n,m)-1; i >= 0;i--)
	{
		//cout<<a[i]<<" "<<b[i]<<endl;
		if(a[i]=='1' && b[i]=='1')
		{
			if(flag) ans+='1';
			else ans+='0';
			flag = 1;
		}
		else if(a[i]=='1' || b[i]=='1'){
			if(flag) ans+='0';
			else ans+='1';
		}
		else{
			if(flag) ans+='1';
			else ans+='0';
			
			flag = 0;
		}
	}
	if(flag) 
	{
		ans+='1';
	}
	
	reverse(ans.begin(),ans.end());
	return ans;
}
