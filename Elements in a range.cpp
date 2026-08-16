class Solution {
  public:
    bool checkElements(int start, int end, vector<int> &arr) {
        // code here
      unordered_set<int>st;
      for(int i=0;i<arr.size();i++) {
          st.insert(arr[i]);
      }
      
      
      for(int i=start;i<=end;i++) {
          if(st.find(i)==st.end()) {
              return false;
          }
      }
      
      return true;
    }
};