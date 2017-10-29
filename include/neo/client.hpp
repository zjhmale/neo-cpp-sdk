#pragma once

#include <fp/fp.hpp>
using namespace fp;

#include <string>
using namespace std;

namespace neo {
  namespace client {
    class Client {
    private:
      string node_uri;

    public:
      explicit Api(const string &uri);
      auto get_best_block_hash() -> Maybe<string>;
    };

    Client::Api(const string &uri) {
      this->node_uri = uri;
    }
  }
}
