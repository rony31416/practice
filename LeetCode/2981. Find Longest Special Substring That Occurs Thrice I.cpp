class Solution {
public:

    map<string, int> findUniformSubstrings(const string& s) {
    map<string, int> mp; // To store substrings with uniform characters
    int n = s.length();

    for (int i = 0; i < n; ++i) {
        string str = "";
        for (int j = i; j < n; ++j) {
            str += s[j];
            
            // Check if all characters are the same in `str`
            if (str.find_first_not_of(str[0]) == string::npos) {
                mp[str]++;
            }
        }
    }

    return mp;
}
    int maximumLength(string s) {
       
        map<string,int> m = findUniformSubstrings(s);
     
        int ans = -1, len = -1;
        for(auto u : m){
            if(u.second >= 3) {
                len = u.first.size();
                if(len>ans) ans = len;
            }
        }

        return ans;
    }
};