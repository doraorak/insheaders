//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSNPluginActionParameterFragment_h
#define IGSNPluginActionParameterFragment_h
@import Foundation;

#include "IGValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@interface IGSNPluginActionParameterFragment : IGValueObject<NSCopying, NSCoding>
/* class methods */
+ (void)initialize;
+ (id)valueWithJSONDictionary:(id)jsondictionary error:(id *)error;

/* instance methods */
- (id)typeAttribute;
@end

#endif /* IGSNPluginActionParameterFragment_h */
