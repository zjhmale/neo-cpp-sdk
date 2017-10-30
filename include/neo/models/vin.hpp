#pragma once

#include <json.hpp>
using json = nlohmann::json;

#include <string>
using namespace std;

namespace neo {
  namespace models {
    namespace vin {
      struct Vin {
        string transaction_id;
        int vout;
      };

      void to_json(json& j, const Vin& o) {
        j = json{
          { "Txid", o.transaction_id },
          { "Vout", o.vout }
        };
      }

      void from_json(const json& j, Vin& o) {
        o.transaction_id = j.at("Txid").get<string>();
        o.vout = j.at("Vout").get<int>();
      }
    }
  }
}

