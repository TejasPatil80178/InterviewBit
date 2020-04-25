vector<int> Solution::maxset(vector<int> &a) {
   vector<int> b;
   int n = a.size();
   int i=0;
   int s = -1;
   int e = -1;
   int s1 = -1;
   long long sum = 0;
   long long max = INT_MIN;
   while(i<a.size())
   {
       if(a[i]>=0)
       {
           //cout<<"i:"<<i<<endl;
           sum = 0;
           s = i;
           while(a[i]>=0)
           {
               sum+=a[i];
               i++;
               if(i>=n)
               {
                   break;
               }
           }
           if(sum > max)
           {
               s1 = s;
               e = i-1;
               max = sum;
           }
       }
       else{
           i++;
       }
   }
   for(int i=s1;i<=e && i>=0;i++)
   {
       b.push_back(a[i]);
   }
   return b;
}
