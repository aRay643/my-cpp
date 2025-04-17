#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    vector<int> setA;
    unordered_set<int> setB;
    int num;

    // 读取集合 A
    while (cin >> num && num != -1) {
        setA.push_back(num);
    }

    // 读取集合 B
    while (cin >> num && num != -1) {
        setB.insert(num);
    }

    // 计算差集
    vector<int> difference;
    for (int elem : setA) {
        if (setB.find(elem) == setB.end()) {  // elem 不在 setB 中
            difference.push_back(elem);
        }
    }

    // 输出差集
    for (size_t i = 0; i < difference.size(); ++i) {
        cout << difference[i];
        if (i < difference.size() - 1) {
            cout << " ";
        }
    }

    return 0;
}