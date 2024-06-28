//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BKBloksViewHelper_h
#define BKBloksViewHelper_h
@import Foundation;

#include "BKContext.h"
#include "BKHostController.h"
#include "NSObject-Protocol.h"

@class NSString;
@protocol BKBloksViewHelperDelegate;

@interface BKBloksViewHelper : NSObject<NSObject> {
  /* instance variables */
  BKContext *_bloksContext;
  BKHostController *_hostController;
}

@property (weak, nonatomic) NSObject<BKBloksViewHelperDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithObjectSet:(id)set bloksData:(id)data delegate:(id)delegate;
- (void)bloksHostController:(id)controller didInvalidateSize:(struct CGSize { double x0; double x1; })size;
- (void)bloksHostControllerDidBind:(id)bind;
- (struct CGSize { double x0; double x1; })sizeForMaxWidth:(double)width;
- (struct CGSize { double x0; double x1; })sizeForMaxWidth:(double)width withMaxHeight:(double)height;
- (void)mountLayoutInView:(id)view withMaxWidth:(double)width;
- (void)mountLayoutInView:(id)view withMaxWidth:(double)width withMaxHeight:(double)height;
- (void)unmount;
@end

#endif /* BKBloksViewHelper_h */