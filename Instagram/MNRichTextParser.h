//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef MNRichTextParser_h
#define MNRichTextParser_h
@import Foundation;

#include "MNRichTextParsing-Protocol.h"

@interface MNRichTextParser : NSObject<MNRichTextParsing>
/* instance methods */
- (id)parseMessageText:(id *)text externalRanges:(id *)ranges markdownCharactersBehaviour:(unsigned long long)behaviour parseLinks:(BOOL)links parseInternalToolLinks:(BOOL)links;
@end

#endif /* MNRichTextParser_h */