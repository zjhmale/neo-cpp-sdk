#pragma once

#include <derivejson/derivejson.hpp>

#include <json.hpp>
using json = nlohmann::json;

#include <string>
#include <vector>
using namespace std;

namespace neo {
  namespace models {
    DEFINE_MODEL(AssetName,
                 (string, language_code, "lang")
                 (string, name, "name"))

    DEFINE_MODEL(AssetState,
                 (int, version, "version")
                 (string, id, "id")
                 (string, type, "type")
                 (vector<AssetName>, names, "name")
                 (string, amount, "amount")
                 (string, available, "available")
                 (int, precision, "precision")
                 (string, owner, "owner")
                 (string, admin, "admin")
                 (string, issuer, "issuer")
                 (int, expiration, "expiration")
                 (bool, frozen, "frozen"))
  }
}
