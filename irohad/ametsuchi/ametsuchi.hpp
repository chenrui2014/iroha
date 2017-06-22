/**
 * Copyright Soramitsu Co., Ltd. 2017 All Rights Reserved.
 * http://soramitsu.co.jp
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef IROHA_AMETSUCHI_H
#define IROHA_AMETSUCHI_H

#include <ametsuchi/mutable_state.hpp>
#include <ametsuchi/query_api.hpp>

namespace iroha {

  namespace ametsuchi {

    /**
     * Storage class, which allows queries on current committed state, and
     * creation of state which can be mutated with blocks and transactions
     */
    class Ametsuchi : public QueryApi {
     public:
      /**
       * Creates a mutable state from the current state
       * @return Created mutable state
       */
      virtual std::unique_ptr<MutableState> createMutableState() = 0;

      /**
       * Permanently applies the mutable state to storage
       * @param state Mutated state to be applied
       */
      virtual void applyMutableState(MutableState&& state) = 0;
    };

  }  // namespace ametsuchi

}  // namespace iroha

#endif  // IROHA_AMETSUCHI_H