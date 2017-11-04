#pragma once

#include <derivejson/derivejson.hpp>

#include <json.hpp>
using json = nlohmann::json;

#include <string>
#include <vector>
using namespace std;

namespace neo {
  namespace models {
    DEFINE_MODEL(TransactionHistoryEntry,
                 (int, neo, "NEO")
                 (double, gas, "GAS")
                 (unsigned long, block_index, "block_index")
                 (string, txid, "txid"))

    DEFINE_MODEL(TransactionHistory,
                 (string, address, "address")
                 (string, net, "net")
                 (vector<TransactionHistoryEntry>, entries, "history"))
  }
}
