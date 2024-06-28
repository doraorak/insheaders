//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGInternalStickerStyleModel_h
#define IGInternalStickerStyleModel_h
@import Foundation;

@class NSString;

@interface IGInternalStickerStyleModel : NSObject {
  /* instance variables */
  unsigned long long _internalType;
}

@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) NSString *pk;

/* instance methods */
- (id)initWithStyle:(long long)style pk:(id)pk internalType:(unsigned long long)type;
@end

#endif /* IGInternalStickerStyleModel_h */