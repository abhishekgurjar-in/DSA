#include <iostream>
#include <stack>
using namespace std;

void insertSorted(stack<int> &st, int &element) {
    if (st.empty() || element > st.top()) {
        st.push(element);
        return;
    }

    int temp = st.top();
    st.pop();

    insertSorted(st, element);

    // Reinsert the elements in ascending order
    st.push(temp);
}

void sortStack(stack<int> &st) {
    // Base case: stack is empty or has only one element (already sorted)
    if (st.empty() || st.size() == 1) {
        return;
    }

    // Remove top element and sort remaining elements
    int temp = st.top();
    st.pop();
    sortStack(st);

    // Insert the removed element back into the sorted stack
    insertSorted(st, temp);
}

int main() {
    stack<int> st;
    st.push(10);
    st.push(30);
    st.push(50);
    st.push(20);
    st.push(40);

    sortStack(st);

    // Print the sorted stack
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}
