bool isan(char c){
	if(c>='a' && c<='z' || c>='A' && c<='Z' || c>='0' && c<='9'){
		return 1;
	}
	else{
		return 0;
	}
}

int Solution::isPalindrome(string s) {
    string a;
	int n = s.length();
	for(int i=0;i<n;i++){
		if(isan(s[i])){
			if(s[i]>='A' && s[i]<='Z'){
				s[i] = s[i] + 32;
			}
			a+=s[i];
		}
	}
	string b = a;
	reverse(b.begin(),b.end());
	if(a==b) return 1;
	else return 0;
}
