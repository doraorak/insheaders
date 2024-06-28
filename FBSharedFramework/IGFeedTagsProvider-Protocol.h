//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedTagsProvider_Protocol_h
#define IGFeedTagsProvider_Protocol_h
@import Foundation;

@protocol IGFeedTagsProvider <NSObject>
/* instance methods */
- (id)userTags;
- (id)productItemTags;
- (id)fbUserTags;
- (id)upcomingEventTags;
- (id)fundraiserTags;
- (id)linkedHighlightTags;
- (BOOL)hasUserTags;
- (BOOL)hasFbUserTags;
- (BOOL)hasProductTags;
- (BOOL)hasUpcomingEventTags;
- (BOOL)hasFundraiserTags;
- (BOOL)hasLinkedHighlightTags;
- (BOOL)hasCopyrightAttribution;
@end

#endif /* IGFeedTagsProvider_Protocol_h */