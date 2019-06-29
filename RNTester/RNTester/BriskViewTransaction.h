//
//  BriskViewTransaction.h
//  
//
//  Created by Wojciech Czekalski on 29/06/2019.
//

#include <react/mounting/MountingTransaction.h>
#import <better/optional.h>

using namespace facebook;
using namespace react;

better::optional<MountingTransaction> createTransaction();
