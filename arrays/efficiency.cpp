#include <iostream>
#include <unordered_map>

using namespace std;

long long team_efficiency(int arr[], int n) {
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    
    long long total_efficiency = 1;
    for (auto it = freq.begin(); it != freq.end(); it++) {
        int skill = it->first;
        int count = it->second;
        int target = total_efficiency / skill;
        int pairings = 0;
        for (auto other_it = freq.begin(); other_it != freq.end(); other_it++) {
            int other_skill = other_it->first;
            int other_count = other_it->second;
            if (skill == other_skill && other_count < 2) {
                continue;
            }
            if (skill + other_skill == target && other_count > 0) {
                pairings += min(count, other_count);
            }
        }
        if (pairings * 2 != count) {
            return -1;
        }
        total_efficiency *= skill * skill;
    }
    
    return total_efficiency;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << team_efficiency(arr, n) << endl;
    return 0;
}
