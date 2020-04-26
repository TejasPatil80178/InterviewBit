int Solution::maxSubArray(const vector<int> &a) {
   int maxi = 0;
   int m = 0;
   bool flag = 1;
   for(int i=0;i<a.size();i++)
   {
       maxi = maxi + a[i];
       if(maxi<0)
       {
           maxi = 0;
       }
       else if(maxi > m)
       {
           flag = 0;
           m = maxi;
       }
   }
   if(flag)
   {
       m = *max_element(a.begin(),a.end());
   }
   return m;
}
