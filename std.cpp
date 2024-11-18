//
// Created by Kibi on 24-11-18.
//

ull solve(const Config &config) {
    ull ans = 0;
    for (auto &[l, r] : config.queries) {
        ull temp = 0;
        for (uint i = l; i <= r; i++) {
            temp += config.a[i];
        }
        ans ^= temp;
    }
    return ans;
}