//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAlertViewButton_h
#define IGAlertViewButton_h
@import Foundation;

@class NSDictionary, NSString;

@interface IGAlertViewButton : NSObject {
  /* instance variables */
  NSDictionary *_dataDict;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *text;

/* instance methods */
- (id)initWithButtonType:(long long)type text:(id)text dataDict:(id)dict;
@end

#endif /* IGAlertViewButton_h */
