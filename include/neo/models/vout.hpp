#pragma once

#include <json.hpp>
using json = nlohmann::json;

#include <string>
using namespace std;

namespace neo {
  namespace models {
    namespace vout {
      struct VOut {
        string address;
        string asset;
        string value;
        int n;
      };

      void to_json(json& j, const VOut& o) {
        j = json{
          { "Address", o.address },
          { "Asset", o.asset },
          { "Value", o.value },
          { "N", o.n }
        };
      }

      void from_json(const json& j, VOut& o) {
        o.address = j.at("Address").get<string>();
        o.asset = j.at("Asset").get<string>();
        o.value = j.at("Value").get<string>();
        o.n = j.at("N").get<int>();
      }
    }
  }
}
