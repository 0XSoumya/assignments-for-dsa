class Solution{
    public:
    int findFinalValue(vector<int>& nums, int original){
        unordered_set<int> st(nums.negin(), nums.end());
        while(st.count(original))
            original *= 2;
            return original;

        
    }
}