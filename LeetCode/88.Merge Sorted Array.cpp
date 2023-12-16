class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      for(int i = m,j = 0 ; i < m+ n ; i++,j++){
          nums1[i] = nums2[j];
      }
      sort(nums1.begin() , nums1.end());
    }
};


/// runtime 0 ms code

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int  k = nums1.size() - 1;
        while(j >= 0)
        {

        if(i>=0  and nums1[i] > nums2[j])
        {
            nums1[k] = nums1[i];
            k--;
            i--;
        }
        else 
        {
            nums1[k] = nums2[j];
            j--;
            k--;
         }
        }
    }
};