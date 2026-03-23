#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

// Time tracker class
class Timer {
    high_resolution_clock::time_point start;
public:
    Timer() {
        start = high_resolution_clock::now();
    }

    ~Timer() {
        auto end = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(end - start);
        cout << "[TIME] " << duration.count() << " microseconds" << endl;
    }
};

int main() {
    Timer t; // start

    // Test code
    for(int i = 0; i < 1000000; i++);

    return 0; // end → vaqt chiqadi
}