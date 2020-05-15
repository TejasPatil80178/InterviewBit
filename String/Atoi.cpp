int Solution::atoi(const string s) {
   	int n = s.length();
	int sign = 1;
	int base = 0;
	int i = 0;
	while(s[i]==' ')
	{
		i++;
	}
	if(s[i]=='-' || s[i]=='+')
	{
		if(s[i]=='-') sign = -1;
		i++;
	}
	while(s[i]-'0'>=0 && s[i]-'0'<=9)
	{
		if(base > INT_MAX/10 || base==INT_MAX/10 && s[i]-'0'==7)
		{
			if(sign==-1)
			{
				return INT_MIN;
			}
			else{
				return INT_MAX;
			}
		}
		
		base = (10*base) + (s[i]-'0');
		i++;
	}
	
	return base*sign;
}
