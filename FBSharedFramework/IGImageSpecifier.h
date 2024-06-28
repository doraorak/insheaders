//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGImageSpecifier_h
#define IGImageSpecifier_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGExternalImageResolving-Protocol.h"
#include "IGImageURL.h"
#include "IGUserLauncherSet-Protocol.h"
#include "NSCoding-Protocol.h"

@class NSString, UIImage;

@interface IGImageSpecifier : FBIvarBasedEqualityObject<NSCoding> {
  /* instance variables */
  unsigned long long _subtype;
  UIImage *_localImage_image;
  NSString *_localImage_module;
  UIImage *_userInterfaceStyleDependentLocalImage_lightImage;
  UIImage *_userInterfaceStyleDependentLocalImage_darkImage;
  NSString *_userInterfaceStyleDependentLocalImage_module;
  UIImage *_prefetchedAdaptiveRemoteImage_image;
  IGImageURL *_prefetchedAdaptiveRemoteImage_imageURL;
  NSString *_prefetchedAdaptiveRemoteImage_module;
  IGImageURL *_remoteImage_imageURL;
  NSString *_remoteImage_module;
  long long _remoteImage_imageFetchPriority;
  BOOL _remoteImage_enableFallbackURL;
  IGImageURL *_adaptiveRemoteImage_imageURL;
  NSString *_adaptiveRemoteImage_module;
  long long _adaptiveRemoteImage_imageFetchPriority;
  NSObject<IGUserLauncherSet> *_adaptiveRemoteImage_launcherSet;
  BOOL _adaptiveRemoteImage_enableFallbackURL;
  IGImageURL *_userInterfaceStyleDependentRemoteImage_lightURL;
  IGImageURL *_userInterfaceStyleDependentRemoteImage_darkURL;
  NSString *_userInterfaceStyleDependentRemoteImage_module;
  long long _userInterfaceStyleDependentRemoteImage_imageFetchPriority;
  BOOL _userInterfaceStyleDependentRemoteImage_enableFallbackURL;
  NSObject<IGExternalImageResolving> *_externalImage_imageResolver;
  NSString *_externalImage_module;
  IGImageURL *_externalImage_imageURL;
}

/* class methods */
+ (id)adaptiveRemoteImageWithImageURL:(id)url module:(id)module imageFetchPriority:(long long)priority launcherSet:(id)set enableFallbackURL:(BOOL)url;
+ (id)externalImageWithImageResolver:(id)resolver module:(id)module imageURL:(id)url;
+ (id)localImageWithImage:(id)image module:(id)module;
+ (id)prefetchedAdaptiveRemoteImageWithImage:(id)image imageURL:(id)url module:(id)module;
+ (id)remoteImageWithImageURL:(id)url module:(id)module imageFetchPriority:(long long)priority enableFallbackURL:(BOOL)url;
+ (id)userInterfaceStyleDependentLocalImageWithLightImage:(id)image darkImage:(id)image module:(id)module;
+ (id)userInterfaceStyleDependentRemoteImageWithLightURL:(id)url darkURL:(id)url module:(id)module imageFetchPriority:(long long)priority enableFallbackURL:(BOOL)url;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGImageSpecifier_h */
