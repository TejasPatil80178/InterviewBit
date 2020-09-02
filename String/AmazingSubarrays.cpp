int Solution::solve(string s) {
    int sum = 0;
    int n = s.length();
	for(int i=0;i<n;i++){
		if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
			sum = ((sum%10003) + (n-i)%10003)%10003;
		}
	}
	return sum%10003;
}
