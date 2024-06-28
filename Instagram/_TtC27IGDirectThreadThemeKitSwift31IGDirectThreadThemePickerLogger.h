//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC27IGDirectThreadThemeKitSwift31IGDirectThreadThemePickerLogger_h
#define _TtC27IGDirectThreadThemeKitSwift31IGDirectThreadThemePickerLogger_h
@import Foundation;

@interface _TtC27IGDirectThreadThemeKitSwift31IGDirectThreadThemePickerLogger : NSObject { // (Swift)
  /* instance variables */
   logger;
}

/* instance methods */
- (id)initWithLogger:(id)logger;
- (void)logThemePickerClickWithEntryPoint:(id)point currentThemeId:(id)id targetThemeId:(id)id threadId:(id)id selectionIndex:(long long)index occamadilloThreadId:(long long)id openThreadId:(id)id;
- (void)logThemePreviewImpressionWithEntryPoint:(id)point currentThemeId:(id)id targetThemeId:(id)id threadId:(id)id selectionIndex:(long long)index occamadilloThreadId:(long long)id openThreadId:(id)id;
- (id)init;
@end

#endif /* _TtC27IGDirectThreadThemeKitSwift31IGDirectThreadThemePickerLogger_h */
