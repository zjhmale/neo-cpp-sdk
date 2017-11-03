#pragma once

#include <json.hpp>
using json = nlohmann::json;

#include <string>
using namespace std;

namespace neo {
  namespace models {
    DEFINE_MODEL(Vin,
                 (string, transaction_id, "txid")
                 (int, vout, "vout"))
  }
}

