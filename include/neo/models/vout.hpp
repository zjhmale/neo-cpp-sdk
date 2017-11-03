#pragma once

#include <derivejson/derivejson.hpp>

#include <json.hpp>
using json = nlohmann::json;

#include <string>
using namespace std;

namespace neo {
  namespace models {
    DEFINE_MODEL(Vout,
                 (string, address, "address")
                 (string, asset, "asset")
                 (string, value, "value")
                 (int, n, "n"))
  }
}
