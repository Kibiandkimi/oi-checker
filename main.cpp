#include <bits/stdc++.h>

#include "config.cpp"

#include "gen.cpp"

using namespace std;

namespace YourCode {
    #include "code.cpp"
}

namespace StdCode {
    #include "std.cpp"
}

int main() {
    ull cnt = 0;
    while (true) {
        const auto config = gen();
        const auto your_ans = YourCode::solve(config);
        const auto std_ans = StdCode::solve(config);
        if (your_ans != std_ans) {
            output(config, your_ans, std_ans);
            return 1;
        }
        cnt++;
        if (cnt % 1000 == 0) {
            printf("\033[1;32mCongratulations! ");
            printf("\033[1;31m%llu test has completed!\n", cnt);
        }
    }
}