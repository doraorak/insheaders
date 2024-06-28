//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAudioBeat_h
#define IGAudioBeat_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface IGAudioBeat : NSObject<NSCopying, NSSecureCoding> {
  /* instance variables */
  double _timeInSeconds;
}

@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) double downbeatScore;
@property (readonly, nonatomic) BOOL isTwobar;
@property (readonly, nonatomic) BOOL isPhrase;
@property (readonly, nonatomic) BOOL isDownbeat;
@property (readonly, nonatomic) BOOL isStrong;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDownbeatScore:(double)score score:(double)score timeInSeconds:(double)seconds isTwobar:(BOOL)twobar isPhrase:(BOOL)phrase isDownbeat:(BOOL)downbeat isStrong:(BOOL)strong;
- (id)initWithTimeInSeconds:(double)seconds isTwobar:(BOOL)twobar isPhrase:(BOOL)phrase isDownbeat:(BOOL)downbeat isStrong:(BOOL)strong;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)dictionaryRepresentation;
- (id)description;
@end

#endif /* IGAudioBeat_h */