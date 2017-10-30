#pragma once

#include <json.hpp>
using json = nlohmann::json;

#include <string>
using namespace std;

namespace neo {
  namespace models {
    namespace script {
      struct Script {
        string invocation;
        string verification;
      };

      void to_json(json& j, const Script& o) {
        j = json{
          { "Invocation", o.invocation },
          { "Verification", o.verification }
        };
      }

      void from_json(const json& j, Script& o) {
        o.invocation = j.at("Invocation").get<string>();
        o.verification = j.at("Verification").get<string>();
      }
    }
  }
}

