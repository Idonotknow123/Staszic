#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int M, N;
    cin >> M >> N;

    vector<pair<int,int>> plates; 

    for (int i = 0; i < N; i++) {
        int w, h;
        cin >> w >> h;
        if (h <= M) {
            plates.emplace_back(h, w);
        }
    }

    sort(plates.begin(), plates.end());

    priority_queue<int> pq; 
    long long result = 0;
    int idx = 0;

    for (int guide = 1; guide <= M; guide++) {
        while (idx < (int)plates.size() && plates[idx].first <= guide) {
            pq.push(plates[idx].second);
            idx++;
        }

        if (!pq.empty()) {
            result += pq.top();
            pq.pop();
        }
    }

    cout << result << "\n";
    return 0;
}