//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef UILayoutSupport_Protocol_h
#define UILayoutSupport_Protocol_h
@import Foundation;

@protocol UILayoutSupport <NSObject>

@property (readonly, nonatomic) double length;
@property (readonly) NSLayoutYAxisAnchor *topAnchor;
@property (readonly) NSLayoutYAxisAnchor *bottomAnchor;
@property (readonly) NSLayoutDimension *heightAnchor;

@end

#endif /* UILayoutSupport_Protocol_h */