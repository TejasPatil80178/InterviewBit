int Solution::lengthOfLastWord(const string s) {
    int n = s.length();
    int k = n-1;
    for(int i = n-1;i>=0;i--){
        if(s[i]!=' '){
            k = i;
            break;
        }
    }
	int c = 0;
	for(int i = k;i>=0;i--){
		if(s[i]!=' '){
			c++;
		}
		else{
			break;
		}
	}
	return c;
}
