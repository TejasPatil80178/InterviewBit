int paths(int a,int b)
{   /////recursive solution
    if(a==1 || b==1)
    {
        return 1;
    }
    return paths(a-1,b)+paths(a,b-1);
}

int Solution::uniquePaths(int a, int b) {
    return paths(a,b);
}
