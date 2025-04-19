#include <iostream>
#include <vector>
#include <algorithm> // 新增排序头文件
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> times(n);
    for (int i = 0; i < n; ++i) {
        cin >> times[i];
    }
    sort(times.begin(), times.end()); // 新增：必须排序！
    int totalTime = 0;
    while (n > 3) {
        int plan1 = times[1] + times[0] + times[n-1] + times[1]; // 次快 + 最快 + 最慢 + 次快
        int plan2 = times[n-1] + times[0] + times[n-2] + times[0]; // 最慢 + 最快 + 次慢 + 最快
        totalTime += min(plan1, plan2);
        n -= 2; // 每次处理最慢的两人
    }
    // 处理剩余 1-3 人
    if (n == 3) totalTime += times[0] + times[1] + times[2]; // 最快带两次
    else if (n == 2) totalTime += times[1]; // 次快的时间
    else if (n == 1) totalTime += times[0];
    cout << totalTime << endl;
    return 0;
}