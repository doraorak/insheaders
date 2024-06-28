//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IG4BAnalyticsEventBuilder_h
#define IG4BAnalyticsEventBuilder_h
@import Foundation;

@class NSArray, NSDictionary, NSNumber, NSString;

@interface IG4BAnalyticsEventBuilder : NSObject {
  /* instance variables */
  NSNumber *_availableOptionsCount;
  NSString *_consumerUserID;
  NSString *_facebookPageID;
  NSNumber *_hasFetchedAll;
}

@property (copy, nonatomic) NSArray *availableOptions;
@property (copy, nonatomic) NSString *component;
@property (copy, nonatomic) NSDictionary *configurations;
@property (copy, nonatomic) NSDictionary *defaultValues;
@property (copy, nonatomic) NSString *errorMessage;
@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSDictionary *selectedValues;
@property (copy, nonatomic) NSString *step;
@property (copy, nonatomic) NSString *errorIdentifier;
@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *locationID;
@property (copy, nonatomic) NSString *mediaID;
@property (copy, nonatomic) NSNumber *position;
@property (copy, nonatomic) NSDictionary *extraData;

/* instance methods */
- (id)build;
@end

#endif /* IG4BAnalyticsEventBuilder_h */
