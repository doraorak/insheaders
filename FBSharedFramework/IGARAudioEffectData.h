//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGARAudioEffectData_h
#define IGARAudioEffectData_h
@import Foundation;

#include "IGAudioLyricsTrackModel.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface IGARAudioEffectData : NSObject<NSCopying, NSSecureCoding> {
  /* instance variables */
  double _clipStart;
  double _clipEnd;
}

@property (retain, nonatomic) NSArray *beats;
@property (retain, nonatomic) IGAudioLyricsTrackModel *lyrics;
@property (retain, nonatomic) NSString *audioAssetId;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *artistName;
@property (nonatomic) double audioStartTime;
@property (nonatomic) double audioDuration;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)dictionaryRepresentation;
@end

#endif /* IGARAudioEffectData_h */