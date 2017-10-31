#pragma once

#include "script.hpp"
#include "transaction.hpp"
using namespace neo::models::script;
using namespace neo::models::transaction;

#include <json.hpp>
using json = nlohmann::json;

#include <string>
#include <vector>
using namespace std;

namespace neo {
  namespace models {
    namespace block {
      struct Block {
        unsigned long confirmations;
        string hash;
        unsigned long index;
        string merkle_root;
        string previous_block_hash;
        string next_block_hash;
        string next_consensus;
        string nonce;
        unsigned long size;
        unsigned long time;
        unsigned long version;
        Script script;
        vector<Transaction> transactions;
      };

      void to_json(json& j, const Block& o) {
        j = json{
          { "Confirmations", o.confirmations },
          { "Hash", o.hash },
          { "Index", o.index },
          { "Merkleroot", o.merkle_root },
          { "Previousblockhash", o.previous_block_hash },
          { "Nextblockhash", o.next_block_hash },
          { "Nextconsensus", o.next_consensus },
          { "Nonce", o.nonce },
          { "Size", o.size },
          { "Time", o.time },
          { "Version", o.version },
          { "Script", o.script },
          { "Tx", o.transactions }
        };
      }

      void from_json(const json& j, Block& o) {
        o.confirmations = j.at("Confirmations").get<unsigned long>();
        o.hash = j.at("Hash").get<string>();
        o.index = j.at("Index").get<unsigned long>();
        o.merkle_root = j.at("Merkleroot").get<string>();
        o.previous_block_hash = j.at("Previousblockhash").get<string>();
        o.next_block_hash = j.at("Nextblockhash").get<string>();
        o.next_consensus = j.at("Nextconsensus").get<string>();
        o.nonce = j.at("Nonce").get<string>();
        o.size = j.at("Size").get<unsigned long>();
        o.time = j.at("Time").get<unsigned long>();
        o.version = j.at("Version").get<unsigned long>();
        o.script = j.at("Script").get<Script>();
        o.transactions = j.at("Tx").get<vector<Transaction>>();
      }
    }
  }
}

