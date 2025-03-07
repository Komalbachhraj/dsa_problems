Q1.
  sol:
class Solution {
public:
   vector<int> mostVisited(int n, vector<int>& rounds) {
    int l = rounds[0], r = rounds.back();
    vector<int> rans;

    if (l <= r) {
        for (int i = l; i <= r; i++) {
            ans.push_back(i);
        }
    } else {
        for (int i = 1; i <= r; i++) {
            ans.push_back(i);
        }
        for (int i = l; i <= n; i++) {
            ans.push_back(i);
        }
    }

    return ans;
}
};

Q2.
  sol:
  class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
    int n = arr.size();  
    stack<int> st;
    vector<int> span(n);

    for (int i = 0; i < n; i++) {
        while (!st.empty() && arr[st.top()] <= arr[i]) {
            st.pop();
        }
        span[i] = (st.empty()) ? (i + 1) : (i - st.top());
        st.push(i);
    }
    return span;
    }
};
