#pragma once

#include <cpr/cpr.h>
using namespace cpr;

#include <string>
using namespace std;

namespace neo {
  namespace request {
    auto rpc_request(const string &method,
                     const json &params,
                     const string &node_uri) -> Maybe<json> {
      
    }
  }
}
