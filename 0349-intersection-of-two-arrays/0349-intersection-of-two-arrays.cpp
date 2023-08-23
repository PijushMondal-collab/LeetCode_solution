class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
     sort(nums1.begin(),nums1.end());
       sort(nums2.begin(),nums2.end());
        int n=nums1.size();
        int m=nums2.size();
       int i=0;
       int j=0;
       set<int>st;
       while(i< n &&  j<m){
           if(nums1[i]<nums2[j]){
               i++;
           }
           else if(nums2[j]<nums1[i]){
               j++;
           }
           else{
              st.insert(nums1[i]);
              i++;
              j++;
           }
       }
       vector <int>v(st.begin(),st.end());
        return v;
    }
};