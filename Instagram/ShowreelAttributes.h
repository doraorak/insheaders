//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef ShowreelAttributes_h
#define ShowreelAttributes_h
@import Foundation;

#include "ShowreelAppSpecificContainer.h"

@class NSString;

@interface ShowreelAttributes : NSObject

@property (readonly, nonatomic) NSString *templateName;
@property (readonly, nonatomic) NSString *clientName;
@property (readonly, nonatomic) NSString *payload;
@property (readonly, nonatomic) unsigned long long placement;
@property (readonly, nonatomic) unsigned long long payloadType;
@property (readonly, nonatomic) long long productsStartIndex;
@property (readonly, nonatomic) ShowreelAppSpecificContainer *options;

/* instance methods */
- (id)initWithTemplateName:(id)name clientName:(id)name payload:(id)payload placement:(unsigned long long)placement payloadType:(unsigned long long)type productsStartIndex:(long long)index options:(id)options;
@end

#endif /* ShowreelAttributes_h */
