/* Multi-threaded C++ test fixture for gdb-bridge.
 *
 * Tests thread inspection, thread switching, mutex state,
 * and race condition debugging scenarios.
 *
 * Build: g++ -std=c++17 -g -O0 -pthread -o multithread_test multithread_test.cpp
 */
#include <iostream>
#include <thread>
#include <mutex>
#include <vector>
#include <chrono>
#include <atomic>
#include <string>

std::mutex g_mutex;
std::atomic<int> g_counter{0};

void worker(int id, int iterations) {
    for (int i = 0; i < iterations; i++) {
        {
            std::lock_guard<std::mutex> lock(g_mutex);
            g_counter.fetch_add(1);
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
}

void deadlock_prone(int id) {
    // Threads that grab two mutexes in opposite order
    // (simplified demo — won't actually deadlock with single mutex)
    std::lock_guard<std::mutex> lock(g_mutex);
}

int main() {
    std::cout << "Starting multi-threaded test..." << std::endl;

    std::vector<std::thread> threads;
    for (int i = 0; i < 4; i++) {
        threads.emplace_back(worker, i, 5);
    }

    for (auto& t : threads) {
        t.join();
    }

    std::cout << "Counter: " << g_counter.load() << std::endl;
    return 0;
}
