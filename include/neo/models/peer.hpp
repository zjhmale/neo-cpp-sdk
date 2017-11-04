#pragma once

#include <derivejson/derivejson.hpp>

#include <json.hpp>
using json = nlohmann::json;

#include <string>
#include <vector>
using namespace std;

namespace neo {
  namespace models {
    DEFINE_MODEL(Peer,
                 (string, address, "address")
                 (int, port, "port"))

    DEFINE_MODEL(Peers,
                 (vector<Peer>, unconnected, "unconnected")
                 (vector<Peer>, connected, "connected")
                 (vector<Peer>, bad, "bad"))
  }
}
