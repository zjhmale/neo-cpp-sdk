#pragma once

#include <derivejson/derivejson.hpp>

#include <json.hpp>
using json = nlohmann::json;

#include <string>
#include <vector>
using namespace std;

namespace neo {
  namespace models {
    DEFINE_MODEL(Balance,
                 (string, asset_id, "asset")
                 (string, value, "value"))

    DEFINE_MODEL(AccountState,
                 (int, version, "version")
                 (string, script_hash, "script_hash")
                 (bool, frozen, "frozen")
                 (vector<string>, votes, "votes")
                 (vector<Balance>, balances, "balances"))
  }
}
