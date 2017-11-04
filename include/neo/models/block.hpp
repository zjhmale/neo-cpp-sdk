#pragma once

#include <derivejson/derivejson.hpp>

#include "script.hpp"
#include "transaction.hpp"
using namespace neo::models;

#include <json.hpp>
using json = nlohmann::json;

#include <string>
#include <vector>
using namespace std;

namespace neo {
  namespace models {
    DEFINE_MODEL(Block,
                 (string, hash, "hash")
                 (unsigned long, size, "size")
                 (unsigned long, version, "version")
                 (string, previous_block_hash, "previousblockhash")
                 (string, merkle_root, "merkleroot")
                 (unsigned long, time, "time")
                 (unsigned long, index, "index")
                 (string, nonce, "nonce")
                 (string, next_consensus, "nextconsensus")
                 (Script, script, "script")
                 (vector<Transaction>, transactions, "tx")
                 (unsigned long, confirmations, "confirmations")
                 (string, next_block_hash, "nextblockhash"))
  }
}

