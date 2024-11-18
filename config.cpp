//
// Created by Kibi on 24-11-18.
//

#include <cctype>
#include <cstdio>
#include <sys/types.h>
#include <tuple>
#include <vector>

#define let const auto
#define mut auto

template<typename T>
using vec = std::vector<T>;
using ull = unsigned long long;
using ll = long long;

using Query = std::tuple<uint, uint>;

class Config {
public:
    uint n;
    vec<uint> a;
    vec<Query> queries;
};

ull solve(const Config &);

void output(const Config &config, const auto your_ans, const auto std_ans) {
    printf("%llu\n%llu\n", your_ans, std_ans);

    freopen("data.out", "w", stdout);
    printf("%u\n", config.n);
    for (let &i : config.a) {
        printf("%u ", i);
    }
    printf("\n%lu\n", config.queries.size());
    for (let &[l, r] : config.queries) {
        printf("%u %u\n", l, r);
    }
    fclose(stdout);
}