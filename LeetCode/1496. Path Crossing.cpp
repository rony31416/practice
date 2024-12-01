//https://leetcode.com/problems/path-crossing/description/

class Solution {
public:
    bool isPathCrossing(string path) {
        int N = 0,E = 0,S = 0,W = 0;
        map<pair<int,int>,int> m;
        int x = 0, y = 0;
        for(int  i = 0 ; i < path.size() ; i++) 
        {  
             m[{x,y}]++;
             if(path[i] == 'N') y++;
             if(path[i] == 'S') y--;
             if(path[i] == 'E') x++;
             if(path[i] == 'W') x--;
        }
         m[{x,y}]++;
        for(auto u : m) 
        {
            int a = u.first.first;
            int b = u.first.second;

          //  cout<<a<<" "<<b<<" "<<u.second<<"\n";
            if(m[{a,b}] > 1) return true;
        }
       
        return false;
        
    }
};