//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTabControlViewModel_h
#define IGTabControlViewModel_h
@import Foundation;

#include "IGListDiffable-Protocol.h"

@class NSArray;
@protocol IGTabControlDelegate;

@interface IGTabControlViewModel : NSObject<IGListDiffable>

@property (weak, nonatomic) NSObject<IGTabControlDelegate> *delegate;
@property (readonly, nonatomic) NSArray *segments;
@property (readonly, nonatomic) long long style;
@property (nonatomic) unsigned long long selectedIndex;

/* instance methods */
- (id)initWithSegments:(id)segments style:(long long)style selectedIndex:(unsigned long long)index;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
- (BOOL)isEqual:(id)equal;
@end

#endif /* IGTabControlViewModel_h */