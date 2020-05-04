bool compare(string a,string b)
{
	return a.length()<b.length();
}

bool isSame(vector<string> v,char k,int j)
{
	for(int i=0;i<v.size();i++)
	{
		if(v[i][j]!=k)
		{
			return 0;
		}
	}
	return 1;
}

string Solution::longestCommonPrefix(vector<string> &s) {
    sort(s.begin(),s.end(),compare);
	int n = s[0].length();
	for(int i = 0;i<n;i++)
	{
		char k = s[0][i];
		if(!isSame(s,k,i)){
			return s[0].substr(0,i);
			//return 0;
		}
	}
	return s[0];
}
