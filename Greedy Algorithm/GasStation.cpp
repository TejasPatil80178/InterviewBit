int Solution::canCompleteCircuit(const vector<int> &gas, const vector<int> &cost) {
    int sgas = 0;
    int scost = 0;
    int n = gas.size();
    for(int  i=0;i<n;i++){
        sgas+=gas[i];
        scost+=cost[i];
    }
    
    if(scost > sgas) return -1;
    for(int i=0;i<n;i++)
    {
        if(gas[i] > cost[i]){
            int g = gas[i] - cost[i];
        	int j = i+1;
        	while(j!=i)
        	{
        		if(g<0) break;
        		g+=(gas[j] - cost[j]);
        		if(j == n-1)
        		{
        			j= -1;
        		}
        		j++;
        	}
        	if(j==i) return i;
        }
    }
    return 0;
}
