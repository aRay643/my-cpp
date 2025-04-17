// #include <iostream>
// #include <vector>

// using namespace std;

// void sieveOfEratosthenes(int n) {
//     // 创建一个布尔数组 "prime[0..n]" 并初始化所有条目为 true。
//     // 一个值在 prime[i] 将最终为 false 表示它不是素数，为 true 表示它是素数。
//     vector<bool> prime(n + 1, true);

//     // 0 和 1 不是素数
//     prime[0] = prime[1] = false;

//     // 遍历所有数字并标记其倍数为非素数
//     for (int p = 2; p * p <= n; p++) {
//         // 如果 prime[p] 未被更改，那么它是一个素数
//         if (prime[p]) {
//             // 更新所有 p 的倍数为非素数
//             for (int i = p * p; i <= n; i += p) {
//                 prime[i] = false;
//             }
//         }
//     }

//     // 打印所有素数
//     for (int p = 2; p <= n; p++) {
//         if (prime[p]) {
//             cout << p << " ";
//         }
//     }
// }

// int main() {
//     int n;
//     cin >> n;
//     sieveOfEratosthenes(n);
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

vector<bool> get_prime_bool_vector(int n){
    vector<bool> t(n+1,true);
    t[0]=false;
    t[1]=false;
    for(int i=2;i<=n;i++){
        for(int j=i*i;j<=n;j+=i){
            t[j]=false;
        }
    }
    return t;
}

int main(){
    int n;
    cin>>n;
    vector<int>num;
    vector<bool>temp=get_prime_bool_vector(n);
    for(int i=0;i<n;i++){
        num.push_back(i);
    }
    for(int i=0;i<n;i++){
    if(temp[i]){
        cout<<num[i]<<" ";
    }
}
    return 0;
}