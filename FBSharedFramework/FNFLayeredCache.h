//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FNFLayeredCache_h
#define FNFLayeredCache_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;
@protocol FNFCacheAnalyticsLogging, FNFDataCaching;

@interface FNFLayeredCache : NSObject<NSObject> {
  /* instance variables */
  NSString *_name;
  NSObject<FNFDataCaching> *_memoryLayer;
  NSObject<FNFDataCaching> *_diskLayer;
  BOOL _didRegisterResignActive;
  BOOL _didRegisterLowMemoryWarning;
}

@property (retain, nonatomic) NSObject<FNFCacheAnalyticsLogging> *analyticsLogger;
@property (nonatomic) BOOL settingDataWithStream;
@property (nonatomic) unsigned long long settingDataWithStreamWriteBufferSizeInBytes;
@property (nonatomic) BOOL disableDataCopyFromDiskToMemory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithName:(id)name memoryLayer:(id)layer diskLayer:(id)layer;
- (void)enableClearMemoryCacheOnBackgrounding;
- (void)enableClearMemoryCacheOnLowMemoryWarning;
- (void)dealloc;
- (id)dataForKey:(id)key analyticsTags:(id)tags;
- (unsigned long long)dataLengthForKey:(id)key;
- (void)setData:(id)data forKey:(id)key policy:(id)policy analyticsTags:(id)tags;
- (void)removeDataForKey:(id)key;
- (BOOL)containsDataForKey:(id)key;
- (void)removeAllData:(id /* block */)data;
- (id)inputStreamForKey:(id)key analyticsTags:(id)tags;
- (id)outputStreamForKey:(id)key policy:(id)policy analyticsTags:(id)tags;
- (void)inputStreamDidClose:(id)close readLength:(unsigned long long)length;
- (void)outputStreamDidClose:(id)close writeLength:(unsigned long long)length;
- (void)outputStreamDidAbort:(id)abort;
- (void)outputStream:(id)stream didWriteLength:(unsigned long long)length;
- (void)_writeDataToDisk:(id)disk key:(id)key analyticsTags:(id)tags;
- (void)_applicationWillResignActive;
- (void)_didReceiveMemoryWarning;
- (id)memoryLayer;
- (id)diskLayer;
@end

#endif /* FNFLayeredCache_h */
