//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FB_RTCRtpReceiver_Protocol_h
#define FB_RTCRtpReceiver_Protocol_h
@import Foundation;

#include "FB_RTCMediaStreamTrack.h"
#include "FB_RTCRtpParameters.h"
#include "FB_RTCRtpReceiver-Protocol.h"

@class NSString, RTCPeerConnectionFactory;
@protocol FB_RTCRtpReceiverDelegate, struct scoped_refptr<webrtc_legacy::RtpReceiverInterface> { struct RtpReceiverInterface * x0; }, {scoped_refptr<webrtc_legacy::RtpReceiverInterface>="ptr_"^{RtpReceiverInterface}}, {unique_ptr<webrtc_legacy::RtpReceiverDelegateAdapter, std::default_delete<webrtc_legacy::RtpReceiverDelegateAdapter>>="__ptr_"{__compressed_pair<webrtc_legacy::RtpReceiverDelegateAdapter *, std::default_delete<webrtc_legacy::RtpReceiverDelegateAdapter>>="__value_"^{RtpReceiverDelegateAdapter}}};

@protocol FB_RTCRtpReceiver <NSObject>

@property (readonly, nonatomic) NSString *receiverId;
@property (readonly, nonatomic) FB_RTCRtpParameters *parameters;
@property (readonly, nonatomic) FB_RTCMediaStreamTrack *track;
@property (weak, nonatomic) NSObject<FB_RTCRtpReceiverDelegate> *delegate;

@end

#endif /* FB_RTCRtpReceiver_Protocol_h */