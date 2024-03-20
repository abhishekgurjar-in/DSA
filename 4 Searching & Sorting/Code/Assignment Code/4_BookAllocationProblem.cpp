#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

bool isPossibleSolution(vector<int>& pages, int M, int sol) {
    int pageSum = 0;
    int students = 1;

    for (int i = 0; i < pages.size(); i++) {
        if (pages[i] > sol) {
            return false;
        }

        if (pageSum + pages[i] > sol) {
            students++;
            pageSum = pages[i];

            if (students > M) {
                return false;
            }
        } else {
            pageSum += pages[i];
        }
    }

    return true;
}

int findPages(vector<int>& pages, int M) {
    int N = pages.size();

    if (M > N) {
        return -1;
    }

    int start = 0;
    int end = accumulate(pages.begin(), pages.end(), 0);
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (isPossibleSolution(pages, M, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return ans;
}

int main() {
    int N, M;
    cout << "Enter the number of pages and the number of students: ";
    cin >> N >> M;

    vector<int> pages(N);

    cout << "Enter the number of pages for each book: ";
    for (int i = 0; i < N; i++) {
        cin >> pages[i];
    }

    int result = findPages(pages, M);

    if (result == -1) {
        cout << "It is not possible to allocate pages to students with the given constraints." << endl;
    } else {
        cout << "The minimum number of pages allocated to each student is: " << result << endl;
    }

    return 0;
}
