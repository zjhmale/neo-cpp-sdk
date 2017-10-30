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
      explicit Client(const string &uri);
      auto get_best_block_hash() -> Maybe<string>;
    };

    Client::Client(const string &uri) {
      this->node_uri = uri;
    }
  }
}
