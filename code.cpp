//
// Created by Kibi on 24-11-18.
//

ull solve(const Config &config) {
    vec<ull> a(config.n);
    ranges::transform(config.a, a.begin(), [](const uint i) {
        return static_cast<ull>(i);
    });
    vec<ull> sum(config.n);
    std::partial_sum(a.begin(), a.end(), sum.begin());
    ull ans = 0;
    for (auto &[l, r] : config.queries) {
        ans ^= sum[r] - (l == 0 ? 0 : sum[l - 1]);
    }

    return ans;
}
