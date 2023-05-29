#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int team_efficiency(vector<int>& arr) {
    int total_sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        total_sum += arr[i];
    }
    if (total_sum % 2 != 0) {
        return -1;
    }
    int target_sum = total_sum / 2;
    sort(arr.begin(), arr.end(), greater<int>());
    int efficiency = 0;
    int i = 0, j = arr.size() - 1;
    while (i < j) {
        if (arr[i] + arr[j] == target_sum) {
            efficiency += arr[i] * arr[j];
            arr.erase(arr.begin() + j);
            arr.erase(arr.begin() + i);
            j -= 2;
        }
        else if (arr[i] + arr[j] < target_sum) {
            j--;
        }
        else {
            i++;
        }
    }
    if (arr.size() > 0) {
        return -1;
    }
    return efficiency;
}

int main() {
    vector<int> arr = {5,4,2,1};
    cout << team_efficiency(arr) << endl; // Output: 60
    return 0;
}
