#pragma once

#include <derivejson/derivejson.hpp>

#include <json.hpp>
using json = nlohmann::json;

#include <string>
#include <vector>
using namespace std;

namespace neo {
  namespace models {
    DEFINE_MODEL(Unspent,
                 (int, index, "index")
                 (string, txid, "txid")
                 (double, value, "value"))

    DEFINE_MODEL(Gas,
                 (double, balance, "balance")
                 (vector<Unspent>, unspent, "unspent"))

    DEFINE_MODEL(Neo,
                 (double, balance, "balance")
                 (vector<Unspent>, unspent, "unspent"))

    DEFINE_MODEL(Assets,
                 (Gas, gas, "GAS")
                 (Neo, neo, "NEO")
                 (string, address, "address")
                 (string, net, "net"))
  }
}
