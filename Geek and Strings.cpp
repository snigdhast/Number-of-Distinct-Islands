class Solution{
public:
    vector<int> prefixCount(int n, int Q, string li[], string query[])
    {
        
        unordered_map<string,int> m;
        for(int i=0;i<n;i++)
         { 
             string temp="";
             for(int j=0;j<li[i].length();j++)
             {
                temp+=li[i][j];
                m[temp]++;
             }
             
         }
         vector<int> ans;
         for(int i=0;i<Q;i++)
            ans.push_back(m[query[i]]);
        return ans;
    }
};
