#pragma once

#include <derivejson/derivejson.hpp>

#include <json.hpp>
using json = nlohmann::json;

#include <string>
#include <vector>
using namespace std;

namespace neo {
  namespace models {
    DEFINE_MODEL(Claim,
                 (int, claim, "claim")
                 (int, end, "end")
                 (unsigned long, index, "index")
                 (int, start, "start")
                 (int, sys_fee, "sysfee")
                 (string, txid, "txid")
                 (int, value, "value"))

    DEFINE_MODEL(Claims,
                 (string, address, "address")
                 (vector<Claim>, claims, "claims")
                 (string, net, "net")
                 (unsigned long, total_claim, "total_claim")
                 (unsigned long, total_unspent_claim, "total_unspent_claim"))
  }
}
