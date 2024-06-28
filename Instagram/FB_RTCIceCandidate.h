//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FB_RTCIceCandidate_h
#define FB_RTCIceCandidate_h
@import Foundation;

@class NSString;
@protocol struct unique_ptr<webrtc_legacy::IceCandidateInterface, std::default_delete<webrtc_legacy::IceCandidateInterface>> { struct __compressed_pair<webrtc_legacy::IceCandidateInterface *, std::default_delete<webrtc_legacy::IceCandidateInterface>> { struct IceCandidateInterface * x0; } x0; };

@interface FB_RTCIceCandidate : NSObject

@property (readonly, nonatomic) struct unique_ptr<webrtc_legacy::IceCandidateInterface, std::default_delete<webrtc_legacy::IceCandidateInterface>> { struct __compressed_pair<webrtc_legacy::IceCandidateInterface *, std::default_delete<webrtc_legacy::IceCandidateInterface>> { struct IceCandidateInterface * x0; } x0; } nativeCandidate;
@property (readonly, nonatomic) NSString *sdpMid;
@property (readonly, nonatomic) int sdpMLineIndex;
@property (readonly, nonatomic) NSString *sdp;
@property (readonly, nonatomic) NSString *serverUrl;

/* instance methods */
- (id)initWithSdp:(id)sdp sdpMLineIndex:(int)index sdpMid:(id)mid;
- (id)description;
- (id)initWithNativeCandidate:(const struct IceCandidateInterface *)candidate;
@end

#endif /* FB_RTCIceCandidate_h */