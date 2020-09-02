int Solution::atoi(const string s) {
    int n = s.length();
	int sign = 1;
	int i = 0;
	while(s[i]==' '){
		i++;
	}
	if(s[i]=='-' || s[i]=='+'){
		if(s[i]=='-') sign = -1;
		i++;
	}
	string a;
	for(;i<n;i++){
		if(s[i]>='0' && s[i]<='9'){
			a+=s[i];
			if(stoll(a)>INT_MAX){
				if(sign == -1) return INT_MIN;
				else return INT_MAX;
			}
		}
		else{
			break;
		}
	}
	if(a.empty()) a+='0';
	if(stoll(a)>INT_MAX){
		if(sign==-1) return INT_MIN;
		else return INT_MAX;
	}
	else{
	    return (sign*stoi(a));
	}
}
