//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveDonationSectionController_h
#define IGLiveDonationSectionController_h
@import Foundation;

#include "IGListGenericSectionController.h"
#include "IGLiveDonationWaveManager.h"
#include "NSObject-Protocol.h"

@class NSString;

@interface IGLiveDonationSectionController : IGListGenericSectionController<NSObject> {
  /* instance variables */
  IGLiveDonationWaveManager *_waveManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithWaveManager:(id)manager;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)liveDonationCellDidTapWave:(id)wave;
@end

#endif /* IGLiveDonationSectionController_h */