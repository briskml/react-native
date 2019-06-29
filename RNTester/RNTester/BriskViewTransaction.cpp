//
//  BriskViewTree.cpp
//  RNTester
//
//  Created by Wojciech Czekalski on 07/06/2019.
//  Copyright © 2019 Facebook. All rights reserved.
//

#include "BriskViewTransaction.h"

using namespace facebook;
using namespace react;

better::optional<MountingTransaction> createTransaction() {
  MountingTelemetry telemetry;
  auto surfaceId = 0;
  auto number = 0;
  ShadowView view;
  view.componentName = "View";
  view.tag = 2;
  ShadowView parent;
  parent.tag = 1;
  parent.componentName = "View";

  ShadowViewMutationList mutations {ShadowViewMutation::RemoveMutation(parent, view, -1)};
  
  return MountingTransaction {surfaceId, number, std::move(mutations), telemetry};
}
