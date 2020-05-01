int Solution::isPalindrome(int n) {
    if(n<0) return 0;
    string s = to_string(n);
    reverse(s.begin(),s.end());
    if(n==stoll(s))
    return 1;
    else return 0;
}
