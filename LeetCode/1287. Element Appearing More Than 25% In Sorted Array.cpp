//https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/description/

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {

        int ans = 0,cnt=1,ind = 0,i ;
        int n = arr.size();
        for( i = 0 ; i < n - 1 ; i++) 
        {
            if(arr[i] == arr[i+1] )cnt++;
            else {
               if(cnt>= ans) {
                   ans=cnt;
                   ind = arr[i];
                   cnt = 1;
               }

            }
        }
        if(cnt>= ans) {
                   ans=cnt;
                   ind = arr[i];
                   cnt = 1;
               }
        return ind;
    }
};