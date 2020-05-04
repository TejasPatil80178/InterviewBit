int Solution::lengthOfLastWord(const string s) {
    if(s.empty()) 
    {
        return 0;
    } 
	int n = s.length()-1;
	int k = 0;
	int i = n;
	while(i>=0)
	{
	    if(s[i]==' ')
	    {
	        n--;
	        i--;
	    }
	    else{
	        break;
	    }
	}
	for(i = n;i>=0;i--)
	{
		if(s[i]!=' ')
		{
			k++;
		}
		else{
			break;
		}
	}
	return k;
}
