
class Solution {
public:
    vector<int> nextSmallerElement(const vector<int>& arr) {
        int size = arr.size();
        vector<int> ans(size);
        stack<int> st;
        st.push(-1);

        for (int i = size - 1; i >= 0; i--) {
            int currElement = arr[i];

            while (st.top() != -1 && arr[st.top()] >= currElement) {
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int> prevSmallerElement(const vector<int>& arr) {
        int size = arr.size();
        vector<int> ans(size);
        stack<int> st;
        st.push(-1);

        for (int i = 0; i < size; i++) {
            int currElement = arr[i];

            while (st.top() != -1 && arr[st.top()] >= currElement) {
                st.pop();
            }
            if (st.top() == -1) {
                ans[i] = -1;
            } else {
                ans[i] = st.top();
            }
            st.push(i);
        }
        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {
        vector<int> next = nextSmallerElement(heights);
        vector<int> prev = prevSmallerElement(heights);

        int maxArea = INT_MIN;

        for (int i = 0; i < heights.size(); i++) {
            int height = heights[i];
            int width = (next[i] == -1 ? heights.size() : next[i]) - (prev[i] == -1 ? -1 : prev[i]) - 1;
            int currArea = width * height;
            maxArea = max(maxArea, currArea);
        }
        return maxArea;
    }
};
