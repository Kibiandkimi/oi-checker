//
// Created by Kibi on 24-11-18.
//

namespace Gen {
    #include <random>
    std::mt19937 rnd(std::random_device{}());
}

Config gen() {
    using Gen::rnd;
    Config config;
    config.n = rnd() % 100000 + 1;
    config.a.resize(config.n);
    for (auto &i : config.a) {
        i = rnd() % 1000'000'000 + 1;
    }
    config.queries.resize(rnd() % 1000);
    for (auto &[l, r] : config.queries) {
        l = rnd() % config.n;
        r = rnd() % config.n;
        if (l > r) {
            std::swap(l, r);
        }
    }
    return config;
}

