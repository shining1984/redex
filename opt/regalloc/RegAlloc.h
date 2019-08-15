/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include <cstdio>

#include "GraphColoring.h"
#include "PassManager.h"

class RegAllocPass : public Pass {
 public:
  RegAllocPass() : Pass("RegAllocPass") {}

  void bind_config() override {
    bool unused;
    bind("live_range_splitting", false, unused);
  }

  void run_pass(DexStoresVector&, ConfigFiles&, PassManager&) override;
};
