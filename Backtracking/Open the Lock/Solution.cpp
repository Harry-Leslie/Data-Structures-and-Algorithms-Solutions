// My Solution in C++

// Time Complexity O(10^N) and Space Complexity O(10^N) where N is the number of digits in the target

class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        int i,j,n,ans=0;
        
        set<string> s(deadends.begin(),deadends.end());
        if(s.find("0000")!=s.end()) return -1;
       
        queue<string> q;
        q.push("0000");
        while(!q.empty())
        {
            n=q.size();
            for(i=0;i<n;i++)
            {
                auto temp=q.front();
                q.pop();
                if(temp==target) return ans;
                for(j=0;j<4;j++)
                {
                        string fwd,bwd;
                        fwd= temp.substr(0,j)+to_string
                        (temp[j]=='0'?9:temp[j]-'0'-1)+temp.substr(j+1);
                        bwd= temp.substr(0,j)+to_string
                        (temp[j] =='9'?0:temp[j]-'0'+ 1)+temp.substr(j+1);
                        if(!s.count(fwd)) s.insert(fwd),q.push(fwd);
                        if(!s.count(bwd)) s.insert(bwd),q.push(bwd);                            
                }
            }
            ans++;
        }
        return -1;   
    } 
};

/*
 * From the solutions I have seen most of them use the same techniques just with the fact that the use an array
 * to made access time blazingly fast compared with checking a set. This is also because as the size of
 * the set increases the time complexity starts to approach N
 */