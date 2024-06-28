//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialPostcaptureEdits_h
#define IGSundialPostcaptureEdits_h
@import Foundation;

#include "IGAsyncTask.h"
#include "IGSerializable-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface IGSundialPostcaptureEdits : NSObject<IGSerializable> {
  /* instance variables */
  NSArray *_backgroundGradientColors;
}

@property (readonly, nonatomic) struct METAMediaTransform { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; } mediaTransform;
@property (copy, nonatomic) NSArray *stickers;
@property (readonly, copy, nonatomic) NSArray *riffSelectedStickers;
@property (readonly, nonatomic) NSArray *drawingBrushStrokes;
@property (readonly, nonatomic) IGAsyncTask *drawingImage;
@property (readonly, nonatomic) NSString *filterIdentifier;
@property (readonly, nonatomic) NSDictionary *filterParameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)newWithMetadata:(id)metadata resourceDirectory:(id)directory userSession:(id)session error:(id *)error;

/* instance methods */
- (id)initWithMediaComposition:(id)composition;
- (BOOL)isEqual:(id)equal;
- (id)metadataForResourceDirectory:(id)directory userSession:(id)session error:(id *)error;
@end

#endif /* IGSundialPostcaptureEdits_h */