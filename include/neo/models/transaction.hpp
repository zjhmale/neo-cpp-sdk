#pragma once

#include <derivejson/derivejson.hpp>

#include "vin.hpp"
#include "vout.hpp"
#include "script.hpp"
using namespace neo::models;

#include <json.hpp>
using json = nlohmann::json;

#include <string>
#include <vector>
using namespace std;

namespace neo {
  namespace models {
    DEFINE_MODEL(Transaction,
                 (string, id, "txid")
                 (unsigned long, size, "size")
                 (string, type, "type")
                 (unsigned long, version, "version")
                 (vector<Vin>, vin, "vin")
                 (vector<Vout>, vout, "vout")
                 (string, sys_fee, "sys_fee")
                 (string, net_fee, "net_fee")
                 (vector<Script>, scripts, "scripts")
                 (unsigned long, nonce, "nonce"))
  }
}

