//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGQuantumSignalsDataPackager_h
#define IGQuantumSignalsDataPackager_h
@import Foundation;

#include "IGUserLauncherSetProviding-Protocol.h"

@interface IGQuantumSignalsDataPackager : NSObject {
  /* instance variables */
  NSObject<IGUserLauncherSetProviding> *_featureSets;
}

/* instance methods */
- (id)initWithfeatureSets:(id)sets;
- (id)packageEncodedStringDataForQuantumSignalsPackagedData:(id)data;
@end

#endif /* IGQuantumSignalsDataPackager_h */
