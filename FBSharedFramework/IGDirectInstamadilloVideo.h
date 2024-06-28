//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectInstamadilloVideo_h
#define IGDirectInstamadilloVideo_h
@import Foundation;

#include "GPBMessage.h"
#include "IGDirectInstamadilloCommonMediaTransport.h"
#include "IGDirectInstamadilloThumbnail.h"
#include "IGDirectInstamadilloVideoExtraMetadata.h"

@interface IGDirectInstamadilloVideo : GPBMessage

@property (retain, @dynamic, nonatomic) IGDirectInstamadilloCommonMediaTransport *mediaTransport;
@property (@dynamic, nonatomic) BOOL hasMediaTransport;
@property (@dynamic, nonatomic) int height;
@property (@dynamic, nonatomic) BOOL hasHeight;
@property (@dynamic, nonatomic) int width;
@property (@dynamic, nonatomic) BOOL hasWidth;
@property (retain, @dynamic, nonatomic) IGDirectInstamadilloThumbnail *thumbnail;
@property (@dynamic, nonatomic) BOOL hasThumbnail;
@property (retain, @dynamic, nonatomic) IGDirectInstamadilloVideoExtraMetadata *videoExtraMetadata;
@property (@dynamic, nonatomic) BOOL hasVideoExtraMetadata;

/* class methods */
+ (id)descriptor;
@end

#endif /* IGDirectInstamadilloVideo_h */