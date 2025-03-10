Q1.class Solution {
public:
	static const bool mySort(vector<int> &a, vector<int> &b) {
		if (a[0] != b[0]) {
			return a[0] < b[0];
		}
		return a[1] < b[1];
	}

	int maxEvents(vector<vector<int>>& events) {
		sort(events.begin(), events.end(), mySort);

		int n = events.size();
		int ans = 0;
		int i = 0;

		multiset<int> s;
		for (int d = 1; d < 100001; ++d) {
			while (!s.empty() && *(s.begin()) < d) {
				s.erase(s.begin());
			}

			while (i < n && events[i][0] == d) {
				s.insert(events[i][1]);
				i++;
			}

			if (s.size() > 0) {
				ans++;
				s.erase(s.begin());
			}
		}

		return ans;

	}
};
Q2.
  sol:
  class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxLength = 0;
        unordered_set<char> charSet;
        int left = 0;
        
        for (int right = 0; right < n; right++) {
            if (charSet.count(s[right]) == 0) {
                charSet.insert(s[right]);
                maxLength = max(maxLength, right - left + 1);
            } else {
                while (charSet.count(s[right])) {
                    charSet.erase(s[left]);
                    left++;
                }
                charSet.insert(s[right]);
            }
        }
        
        return maxLength;
    }
};

  sol:
