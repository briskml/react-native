/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * @format
 * @flow
 */

'use strict';

import type {
  BubblingEvent,
  WithDefault,
} from '../../../../Libraries/Types/CodegenTypes';
import type {ViewProps} from '../../../../Libraries/Components/View/ViewPropTypes';
import codegenNativeComponent from '../../../../Libraries/Utilities/codegenNativeComponent';

type NativeProps = $ReadOnly<{|
  ...ViewProps,

  // Props
  accessibilityHint?: WithDefault<string, ''>,

  // Events
  onChange?: ?(event: BubblingEvent<$ReadOnly<{|value: boolean|}>>) => void,
|}>;

export default codegenNativeComponent<NativeProps>(
  'InterfaceOnlyNativeComponent',
  {
    interfaceOnly: true,
    paperComponentName: 'RCTInterfaceOnlyComponent',
  },
);
