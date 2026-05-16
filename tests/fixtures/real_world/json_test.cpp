/* Real-world C++ test fixture using nlohmann/json-style patterns.
 *
 * Tests:
 *   - Template container inspection (nested maps, vectors)
 *   - String variable display
 *   - Complex type expansion
 *
 * Build: g++ -std=c++17 -g -O0 -I. -o real_world/json_test real_world/json_test.cpp
 *
 * Uses a lightweight embedded JSON-like structure to avoid external deps.
 */
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <memory>
#include <sstream>
#include <variant>
#include <optional>
#include <functional>

// ── Embedded mini JSON types ─────────────────────────────────────────

enum class JsonType { Null, Bool, Integer, Double, String, Array, Object };

class Json {
public:
    Json() : type_(JsonType::Null) {}
    Json(int v) : type_(JsonType::Integer), int_(v) {}
    Json(double v) : type_(JsonType::Double), double_(v) {}
    Json(bool v) : type_(JsonType::Bool), bool_(v) {}
    Json(const char* v) : type_(JsonType::String), string_(v) {}
    Json(const std::string& v) : type_(JsonType::String), string_(v) {}

    JsonType type_;
    int int_ = 0;
    double double_ = 0.0;
    bool bool_ = false;
    std::string string_;
    std::vector<Json> array_;
    std::map<std::string, Json> object_;
};

// ── Application logic ────────────────────────────────────────────────

struct Config {
    std::string name;
    int threads;
    double timeout;
    bool debug;
};

struct Request {
    int id;
    std::string method;
    std::map<std::string, std::string> headers;
    std::string body;
};

class RequestHandler {
public:
    RequestHandler(const Config& cfg) : config_(cfg), request_count_(0) {}

    std::string process(const Request& req) {
        request_count_++;
        std::ostringstream oss;
        oss << "[" << request_count_ << "] " << req.method
            << " id=" << req.id
            << " headers=" << req.headers.size()
            << " body_len=" << req.body.size()
            << " timeout=" << config_.timeout;
        return oss.str();
    }

private:
    Config config_;
    int request_count_;
};

// ── Main ──────────────────────────────────────────────────────────────

int main(int argc, char* argv[]) {
    // Build config
    Config config = {"production", 8, 30.5, true};

    // Build request
    Request req;
    req.id = 42;
    req.method = "POST";
    req.headers["Content-Type"] = "application/json";
    req.headers["Authorization"] = "Bearer token123";
    req.body = R"({"user":"alice","action":"query"})";

    // Process
    RequestHandler handler(config);
    std::string result = handler.process(req);
    std::cout << result << std::endl;

    // JSON manipulation
    Json obj;
    obj.type_ = JsonType::Object;
    obj.object_["status"] = Json("ok");
    obj.object_["count"] = Json(5);
    obj.object_["active"] = Json(true);

    std::cout << "Status: " << obj.object_["status"].string_ << std::endl;

    return 0;
}
