bool isNotChar(char a)
{
	if((97<=a && 122>=a) || (65<=a && 90>=a) || (48<=a && 57>=a))
	{
		return 0;
	}
	else{
		return 1;
	}
}

int Solution::isPalindrome(string s) {
    int i = 0;
	int j = s.length()-1;
	while(i<=j)
	{
		if(isNotChar(s[i]))
		{
		    //cout<<s[i]<<endl;
			i++;
		}
		else if(isNotChar(s[j]))
		{
		    //cout<<s[j]<<endl;
			j--;
		}
		else if(s[i]==s[j] || abs((int)s[i] - (int)s[j])==32)
		{
			i++;
			j--;
		}
		else{
			return 0;
		}
	}
	return 1;
}
