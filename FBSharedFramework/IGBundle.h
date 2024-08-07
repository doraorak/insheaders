//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBundle_h
#define IGBundle_h
@import Foundation;

@class NSBundle;

@interface IGBundle : NSObject {
  /* instance variables */
  NSBundle *_nsbundle;
}

/* class methods */
+ (id)bundleWithPath:(id)path;
+ (id)bundleWithURL:(id)url;
+ (id)mainBundle;
+ (id)bundleForClass:(Class)class;

/* instance methods */
- (id)initWithNSBundle:(id)nsbundle;
- (id)bundlePath;
- (id)pathsForResourcesOfType:(id)type inDirectory:(id)directory;
- (id)URLForResource:(id)resource withExtension:(id)extension;
- (id)pathForResource:(id)resource ofType:(id)type;
- (id)pathForResource:(id)resource ofType:(id)type inDirectory:(id)directory;
- (id)localizedStringForKey:(id)key value:(id)value table:(id)table;
- (id)localizations;
- (id)bundleIdentifier;
- (id)resourcePath;
- (id)infoDictionary;
- (id)localizedInfoDictionary;
- (id)objectForInfoDictionaryKey:(id)key;
- (id)appStoreReceiptURL;
- (id)nsBundle;
@end

#endif /* IGBundle_h */
