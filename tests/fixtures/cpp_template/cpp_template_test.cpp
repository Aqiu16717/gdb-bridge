/* Production-grade C++ test: STL nested templates, name mangling, RAII
 * Build: g++ -std=c++17 -g -O0 -o cpp_template_test cpp_template_test.cpp */
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <memory>
#include <functional>

struct Widget {
    int id;
    std::string name;
    std::vector<double> metrics;

    Widget(int i, const std::string& n) : id(i), name(n), metrics{1.0, 2.0, 3.0} {}
};

void processWidgets(const std::vector<std::shared_ptr<Widget>>& widgets) {
    for (const auto& w : widgets) {
        std::cout << "Widget " << w->id << ": " << w->name << std::endl;
    }
}

int main() {
    // Template: std::vector<std::shared_ptr<Widget>>
    auto w1 = std::make_shared<Widget>(1, "Alpha");
    auto w2 = std::make_shared<Widget>(2, "Beta");
    std::vector<std::shared_ptr<Widget>> widgets = {w1, w2};

    // Template: std::map<std::string, int>
    std::map<std::string, int> scores;
    scores["Alice"] = 95;
    scores["Bob"] = 87;

    // Lambda / std::function
    std::function<int(int, int)> adder = [](int a, int b) { return a + b; };
    int result = adder(10, 20);

    processWidgets(widgets);
    std::cout << "Score count: " << scores.size() << std::endl;
    std::cout << "Result: " << result << std::endl;
    return 0;
}
