class Solution {
public:

    int stringToInt(const std::string& str) {
    int result = 0;

    // Iterate through characters and build the integer
    for (char c : str) {
        if (isdigit(c)) {
            result = result * 10 + (c - '0');
        } else {
            // If non-digit character is found, throw an exception
            throw std::invalid_argument("Invalid character in input string");
        }
    }

    return result;
}
    int compareVersion(string version1, string version2) {

        vector<string> con1,con2;
        int n = 0,m = 0;
        int i = 0;
        for(auto u : version1) {
            string s = "";
            for(  ; i < version1.size() ; i++ ) {
                if(version1[i] == '.') {
                    n++;
                    i++;
                    break;
                }
                else s+= version1[i];
            }
            con1.push_back(s);
        }
        

        i = 0;

        for(auto u : version2) {
            string s = "";
            for(  ; i < version2.size() ; i++ ) {
                if(version2[i] == '.') {
                    m++;
                    i++;
                    break;
                }
                else s+= version2[i];
            }
            con2.push_back(s);
        }


       n = max(n,m);
      n++;

      /*for(auto u: con1) cout<<u<<" ";
      cout<<"\ncon2\n";
      for(auto u : con2) cout<<u<<" ";

      cout<<"\nhekkkfdfsdfsdfsdfsdfrt\n";

      cout<<con1.size()<< " "<<con2.size()<<"\n";

      */
      vector<int>v1(n+1,0),v2(n+1,0);

      for(int i = 0 ; i < n ; i++ ) {
        if(i < con1.size())
        v1[i] = stringToInt(con1[i]);
        

        if(i < con2.size())
        v2[i] = stringToInt(con2[i]);
      }

       if(v1>v2) return 1;
       if(v2>v1) return -1;
       return 0;

    return 0;
        
    }
};