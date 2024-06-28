//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef DspTwoMeasurementClickEventCondition_h
#define DspTwoMeasurementClickEventCondition_h
@import Foundation;

@class NSNumber, NSSet, NSString;

@interface DspTwoMeasurementClickEventCondition : NSObject

@property (readonly, nonatomic) NSString *genericClickDescription;
@property (readonly, nonatomic) NSString *accessibilityIdentifier;
@property (readonly, nonatomic) NSString *accessibilityLabel;
@property (readonly, nonatomic) NSString *className;
@property (readonly, nonatomic) NSNumber *trackingNodeType;
@property (readonly, nonatomic) NSSet *allowlist;
@property (readonly, nonatomic) NSSet *blocklist;

/* instance methods */
- (id)initWithGenericClickDescription:(id)description accessibilityIdentifier:(id)identifier accessibilityLabel:(id)label className:(id)name trackingNodeType:(id)type allowlist:(id)allowlist blocklist:(id)blocklist;
@end

#endif /* DspTwoMeasurementClickEventCondition_h */
