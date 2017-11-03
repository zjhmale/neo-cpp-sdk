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
                 (unsigned long, confirmations, "confirmations")
                 (string, hash, "hash")
                 (unsigned long, index, "index")
                 (string, merkle_root, "merkleroot")
                 (string, previous_block_hash, "previousblockhash")
                 (string, next_block_hash, "nextblockhash")
                 (string, next_consensus, "nextconsensus")
                 (string, nonce, "nonce")
                 (unsigned long, size, "size")
                 (unsigned long, time, "time")
                 (unsigned long, version, "version")
                 (Script, script, "script")
                 (vector<Transaction>, transactions, "tx"))
  }
}

