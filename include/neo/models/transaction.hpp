#pragma once

#include "vin.hpp"
#include "vout.hpp"
#include "script.hpp"
using namespace neo::models::vin;
using namespace neo::models::vout;
using namespace neo::models::script;

#include <json.hpp>
using json = nlohmann::json;

#include <string>
#include <vector>
using namespace std;

namespace neo {
  namespace models {
    namespace transaction {
      struct Transaction {
        string id;
        unsigned long size;
        string type;
        unsigned long version;
        vector<Vin> vin;
        vector<Vout> vout;
        string sysfee;
        string netfee;
        vector<Script> scripts;
        unsigned long nonce;
      };

      void to_json(json& j, const Transaction& o) {
        j = json{
          { "Txid", o.id },
          { "Size", o.size },
          { "Type", o.type },
          { "Version", o.version },
          { "Vin", o.vin },
          { "Vout", o.vout },
          { "Sys_fee", o.sysfee },
          { "Net_fee", o.netfee },
          { "Scripts", o.scripts },
          { "Nonce", o.nonce }
        };
      }

      void from_json(const json& j, Transaction& o) {
        o.id = j.at("Txid").get<string>();
        o.size = j.at("Size").get<unsigned long>();
        o.type = j.at("Type").get<string>();
        o.version = j.at("Version").get<unsigned long>();
        o.vin = j.at("Vin").get<vector<Vin>>();
        o.vout = j.at("Vout").get<vector<Vout>>();
        o.sysfee = j.at("Sys_fee").get<string>();
        o.netfee = j.at("Net_fee").get<string>();
        o.scripts = j.at("Scripts").get<vector<Script>>();
        o.nonce = j.at("Nonce").get<unsigned long>();
      }
    }
  }
}

