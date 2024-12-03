class Solution {
public:
    int isPrefixOfWord(string sentence, string sw) {
        vector<string> words;
        int j = 0;
        for(int i = 0 ; i < sentence.size() ; i++){
            string word = "";
            for(;j < sentence.size() ; j++) {
                word+=sentence[j];
                if(sentence[j] == ' '){
                    j++;
                    break;
                }
            }
            words.push_back(word);
        }
        
        int sz = sw.size();
        for(int i = 0 ; i < words.size() ; i++) 
        {
            if(words[i].size() < sz) continue;
            string s = "";
            for(int  j = 0 ; j < sz ; j++) {
                s+=words[i][j];
            }
            if(s==sw) return i+1;
        }

        return -1;
         

        return 0;
    }
};
