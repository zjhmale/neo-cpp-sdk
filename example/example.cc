#include <neo/neo.hpp>
using namespace neo::client;
using namespace neo::models::script;

#include <memory>
using namespace std;

int main(int argc, char** argv) {
  auto client = make_shared<Client>("http://test1.cityofzion.io:8880");
  Script s({ "invocation", "verification" });
}
