//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FNFDashNetworker_h
#define FNFDashNetworker_h
@import Foundation;

#include "FNFAssetResourceLoader.h"
#include "FNFDashErrorListening-Protocol.h"
#include "FNFDashInflightMetadata.h"
#include "FNFPSRProfileProvider-Protocol.h"

@class NSString;
@protocol FNFDashNetworkerDelegate, FNFLogging, OS_dispatch_queue;

@interface FNFDashNetworker : NSObject {
  /* instance variables */
  struct FNFDashConfig { struct FNFDashConfigGen { BOOL adaptive_lane_enable_stricter_thermal_check; long long adaptive_lane_ignore_quality_size_for_thermal; double adjusted_speed_bottom_threshold_ms; double adjusted_speed_bottom_threshold_ms_ll; double adjusted_speed_top_threshold_ms; double adjusted_speed_top_threshold_ms_ll; BOOL buffer_size_at_fetch_complete_enabled; double desired_buffer_acceptable_error_ms; double desired_buffer_ms; double desired_buffer_ms_ll; BOOL enable_fullscreen_live_seeking; BOOL enable_live_seeking_ultra_low_latency; BOOL enable_log_quic_pacing_rate; BOOL enable_normal_live_seeking; BOOL enable_prefetch_buffer_live_seeking; BOOL enable_remove_buffer_threshold_for_live; BOOL enable_round_robin_audio_quality_selector; BOOL enable_round_robin_video_quality_selector; double fetch_time_exceeded_in_seconds; long long immediate_manifest_fetch_cooldown_counter; double initial_unstall_threshold_in_second_for_excellent; double initial_unstall_threshold_in_second_for_good; double initial_unstall_threshold_in_second_for_moderate; double initial_unstall_threshold_in_second_for_poor; double initial_unstall_threshold_in_second_for_unknown; double live_seeking_change_interval_sec; long long ll_chunk_duration_ms; BOOL manifestless_use_frame_pts_start_time; long long max_live_seeking_count; double max_prefetch_buffer_stall_time; double min_time_ms_between_latency_level_change; BOOL misaligned_audio_disabled; BOOL misaligned_predictive_disabled; long long mpd_availability_endtime_padding_minutes; BOOL predictive_enabled; double predictive_manifest_timeout; long long prefetch_start_position_seconds_for_quality_excellent; long long prefetch_start_position_seconds_for_quality_good; long long prefetch_start_position_seconds_for_quality_moderate; long long prefetch_start_position_seconds_for_quality_poor; long long prefetch_start_position_seconds_for_quality_unknown; BOOL pts_rewrite_disabled; BOOL remove_minimum_fetch_size_guard; BOOL replay_recording_enabled; long long segment_count_between_video_rr_switch; BOOL segmented_for_all_enabled; BOOL skip_empty_segment_enabled; double stall_threshold_in_second; long long ull_chunk_duration_ms; double unstall_threshold_in_second_for_excellent; double unstall_threshold_in_second_for_good; double unstall_threshold_in_second_for_moderate; double unstall_threshold_in_second_for_poor; double unstall_threshold_in_second_for_unknown; BOOL check_first_key_frame_range_before_partial_fetch; BOOL delay_second_partial_segment_fetch; BOOL do_not_partial_fetch_audio; BOOL enable_csvqm_consistency_check; BOOL enable_ig_busy_hour_quality_tuning; BOOL enable_mcm_dense_lane_jnd_on_bandwidth_quality; BOOL enable_mcm_rd_slope_check; BOOL enable_partial_fetch_size_threshold; BOOL enable_partial_segment_initial_fetch; BOOL enable_unavailable_quality_fallback_503; BOOL fetch_only_next_chunk; long long fetch_size_high_intent_high_watermark_cell; long long fetch_size_high_intent_high_watermark_wifi; long long fetch_size_high_intent_low_watermark_cell; long long fetch_size_high_intent_low_watermark_wifi; long long fetch_size_high_intent_threshold_in_seconds; long long fetch_size_low_intent_high_watermark_cell; long long fetch_size_low_intent_high_watermark_wifi; long long fetch_size_low_intent_low_watermark_cell; long long fetch_size_low_intent_low_watermark_wifi; double fraction_of_chunk_count_for_partial_segment_initial_fetch; BOOL lazy_load_audio_track; double lazy_load_audio_warmup_duration; BOOL mcm_adaptive_codec_switch; long long mcm_adaptive_codec_switch_decoding_slowness_count_threshold; double mcm_adaptive_codec_switch_decoding_speed_threshold; long long mcm_adaptive_codec_switch_pruned_limit; double mcm_dense_lane_jnd_on_bandwidth_quality_excellent; double mcm_dense_lane_jnd_on_bandwidth_quality_excellent_cell; double mcm_dense_lane_jnd_on_bandwidth_quality_excellent_wifi; double mcm_dense_lane_jnd_on_bandwidth_quality_good; double mcm_dense_lane_jnd_on_bandwidth_quality_good_cell; double mcm_dense_lane_jnd_on_bandwidth_quality_good_wifi; double mcm_dense_lane_jnd_on_bandwidth_quality_moderate; double mcm_dense_lane_jnd_on_bandwidth_quality_moderate_cell; double mcm_dense_lane_jnd_on_bandwidth_quality_moderate_wifi; double mcm_dense_lane_jnd_on_bandwidth_quality_poor; double mcm_dense_lane_jnd_on_bandwidth_quality_poor_cell; double mcm_dense_lane_jnd_on_bandwidth_quality_poor_wifi; double mcm_dense_lane_jnd_on_bandwidth_quality_unknown; double mcm_dense_lane_jnd_on_bandwidth_quality_unknown_cell; double mcm_dense_lane_jnd_on_bandwidth_quality_unknown_wifi; double mcm_dense_lane_jnd_on_cell; double mcm_dense_lane_jnd_on_wifi; BOOL mcm_enable_jnd_group_check_bypass_main_codec; double mcm_rd_curve_slope_threshold; double mcm_risk_reward_ratior_upper_bound_on_cell; double mcm_risk_reward_ratior_upper_bound_on_wifi; long long partial_fetch_size_threshold_in_kb; BOOL prioritize_audio_fetching; BOOL should_partial_fetch_bypass_single_segment_video; double unstall_thresholder_linear_increase_value; double unstall_thresholder_maximum; BOOL update_http_priority_on_pause_play; } gen; long long x[5] qualitySelectorPipeline; double abrBandwidthFraction; double audioIbrBandwidthFraction; double abrBandwidthPenaltyPerRequest; double abrPlayerSizeMultiplierForCell; double abrPlayerSizeMultiplierForWifi; BOOL enableAOCWifi; int ignoreQualitySize; int ignoreQualitySizeForStories; BOOL usePlayerSizeForOrientation; BOOL enableIntentBasedWatermarks; int intentMinLowWatermark; int intentMaxLowWatermark; int intentWatermarkDiff; double intentTimeMultiplier; BOOL enableStitchABR; int stitchLowBufferSeconds; int stitchLowQualityBitrate; int stitchMinFetchDuration; int stitchMaxFetchDuration; double stitchRepBwMultiplier; double stitchRepBwMultiplierLowBuffer; double stitchRepBwMultiplierMinPlayable; int stitchRepMinPlayableMos; int stitchRepMinOverallMos; int stitchRepModOverallMos; int stitchRepLowMosResolution; int stitchModMosBufferMs; double stitchMinMultiplier; BOOL stitchEnableRiskRewardRatio; double stitchRiskRewardRatioUpperBound; BOOL mcmStitchEnableRiskRewardRatio; BOOL mcmEnableJNDGroupCheck; BOOL stitchIgnoreAvoidOnCellSfv; long long stitchMaxBitrateAllowedOnCell; BOOL stitchIgnoreULLByLatencySetting; double stitchRiskFactor; double stitchLowMosRiskFactor; double stitchModMosRiskFactor; double stitchVirtualBufferPercent; int stitchMaxLookaheadDurationMs; double stitchRiskAdjFactor; BOOL stitchEnableMosOverride; long long stitchAudioLowQualityBitrate; BOOL enableStitchSelectorForAudio; long long stitchAudioOtherBitrate; double stitchAudioBitrateBoostFactor; double stitchAudioRiskFactor; double stitchAudioRiskAdjFactor; double stitchAudioLowMosRiskFactor; BOOL sigmoidFractionPerBandwidthQualityEnabled; double sigmoidMinBandwidthEstimateForQualityUnknown; double sigmoidMinBandwidthEstimateForQualityPoor; double sigmoidMinBandwidthEstimateForQualityModerate; double sigmoidMinBandwidthEstimateForQualityGood; double sigmoidMinBandwidthEstimateForQualityExcellent; double sigmoidMaxBandwidthEstimateForQualityUnknown; double sigmoidMaxBandwidthEstimateForQualityPoor; double sigmoidMaxBandwidthEstimateForQualityModerate; double sigmoidMaxBandwidthEstimateForQualityGood; double sigmoidMaxBandwidthEstimateForQualityExcellent; double sigmoidFractionBiasForQualityUnknown; double sigmoidFractionGainForQualityUnknown; double sigmoidFractionOffsetForQualityUnknown; double sigmoidFractionWidthForQualityUnknown; double sigmoidFractionBiasForQualityPoor; double sigmoidFractionGainForQualityPoor; double sigmoidFractionOffsetForQualityPoor; double sigmoidFractionWidthForQualityPoor; double sigmoidFractionBiasForQualityModerate; double sigmoidFractionGainForQualityModerate; double sigmoidFractionOffsetForQualityModerate; double sigmoidFractionWidthForQualityModerate; double sigmoidFractionBiasForQualityGood; double sigmoidFractionGainForQualityGood; double sigmoidFractionOffsetForQualityGood; double sigmoidFractionWidthForQualityGood; double sigmoidFractionBiasForQualityExcellent; double sigmoidFractionGainForQualityExcellent; double sigmoidFractionOffsetForQualityExcellent; double sigmoidFractionWidthForQualityExcellent; double lowSmoothingSizeThreshold; long long minSamplesBeforeUpSwitchLow; long long minSamplesBeforeUpSwitchHigh; double minBufferSizeInSecondsForBufferThresholdAbr; int fetchSizeInChunkCountForInitial; int fetchSizeLowInSecondForCell; int fetchSizeHighInSecondForCell; int fetchSizeLowInSecondForWifi; int fetchSizeHighInSecondForWifi; int fetchSizeHighThresholdInChunkCount; int fetchSizeHighThresholdInChunkCountForCell; int fetchSizePerRequestInChunkCount; int fetchSizeLowInSecondHighMarkForCell; int fetchSizeHighInSecondHighMarkForCell; int fetchSizeLowInSecondHighMarkForWifi; int fetchSizeHighInSecondHighMarkForWifi; int fetchSizeLowGraduallyIncreaseValue; int fetchSizeHighIntentThresholdInSeconds; double stallThresholdInSeconds; BOOL disableUpdateTimeLoadedWhenInStall; double liveMaxTimelineDurationForQualityUnknown; double liveMaxTimelineDurationForQualityPoor; double liveMaxTimelineDurationForQualityModerate; double liveMaxTimelineDurationForQualityGood; double liveMaxTimelineDurationForQualityExcellent; BOOL dashVideoTypeCheckEnabled; BOOL stitchUseOverallMos; BOOL stitchUsePlaybackMosForLowMos; double liveManifestTimeoutSeconds; int checkForPrefetchSegmentCount; BOOL lazyLoadAudioTrack; double lazyLoadAudioWarmupDuration; BOOL enableBufferVisualization; int maxConsecutiveNetworkWarnings; BOOL enableDrm; BOOL shouldRefactorPsshProcess; int numPredictiveSegments; int numPredictiveRewindSegments; BOOL enableRoundingInDashFetcher; BOOL enableBypassingLowQualityPrefetch; BOOL shouldApplyRotationTransform; BOOL unstallThresholderEnabled; BOOL monitorMemoryWarningForPlayerSizeSelection; BOOL enableLiveJumpLogging; double liveJumpTimeGapInSeconds; long long videoPtsSyncOffsetMs; int liveLatencyCatchUpStrategy; double liveLatencyHighInSeconds; double liveLatencyLowInSeconds; double liveLatencyHighInSecondsForQualityExcellent; double liveLatencyHighInSecondsForQualityGood; double liveLatencyHighInSecondsForQualityModerate; double liveLatencyHighInSecondsForQualityPoor; double liveLatencyHighInSecondsForQualityUnknown; double liveLatencyLowInSecondsForQualityExcellent; double liveLatencyLowInSecondsForQualityGood; double liveLatencyLowInSecondsForQualityModerate; double liveLatencyLowInSecondsForQualityPoor; double liveLatencyLowInSecondsForQualityUnknown; BOOL liveLatencyByQualityEnabled; double liveFullScreenTuningLowInSeconds; double liveFullScreenTuningHighInSeconds; BOOL limitLowWatermarkBySegmentDuration; double skipPrefetchBandwidthMultiplier; BOOL enableUnavailableQualityFallback; BOOL enableUserQualitySelectionWithRepresentationId; long long maxManifestRefreshFailCount; int oneSemanticsOsParamValue; int defaultBWConfidencePercentile; int highBWConfidencePercentile; int modBWConfidencePercentile; BOOL enableAudioStallOnly; BOOL sendPlaybackSessionKeyAsRequestHeader; BOOL stopManifestRefreshUntilStartup; BOOL sendClientBweToServer; BOOL enableHevc; BOOL enableStallUnstallLogging; BOOL enableEmsgParsingV2; BOOL dropDuplicateChunkInFrameSequencer; int increaseManifestTriggerThreshold; BOOL enableQualityMetadataWithSummaryInfo; BOOL rewindCatchupLogicEnabled; BOOL latestFrameEstimateEnabled; BOOL refactorReparsingEnabled; BOOL latestSegmentIdEnabled; BOOL removeFrequencyIndexCheck; BOOL liveVodTransitionFixEnabled; BOOL applyAvoidOnAbrTag; long long delayFirstChunkMs; long long delayBytesInterval; long long minBufferToDelayMs; BOOL parseFrameRateEnabled; BOOL enableStallThresholdFix; BOOL enableAudioABR; int segmentCountBetweenAudioABRSwitch; int minVideoDurationSecsForAudioABR; BOOL enableUpdateQualitiesEmptyFix; BOOL usePlaybackCsvqm; BOOL enableAlternativeAudioTracks; BOOL enableClientTriggeredE2eTracing; BOOL prioritizeAudioChunkManager; BOOL useTasosBwe; BOOL enableTasosBweRequestHeaders; BOOL enableAudioDubbingTracks; BOOL enableAutoTranslation; BOOL enableDashPrefetchUseBestQuality; BOOL enableLogMultiplePrefetchCachedRepresentations; } _config;
  struct { NSString *initialUserSelectedQuality; NSString *sessionKey; BOOL isAudioOnly; BOOL isLatencySensitiveBroadcast; BOOL isLiveRewindEnabled; BOOL expectsEmsgInData; BOOL isAudioDescriptionAccessibilityEnabled; NSString *userLang; BOOL isAutoTranslationEnabled; unsigned char selectedAudioRole; NSString *selectedAudioLanguage; } _sessionConfig;
  NSObject<FNFDashNetworkerDelegate> *_delegate;
  NSObject<FNFPSRProfileProvider> *_psrProfileProvider;
  NSObject<FNFDashErrorListening> *_errorListener;
  FNFAssetResourceLoader *_resourceLoader;
  FNFDashInflightMetadata *_inflightMetadata;
  NSString *_dvlMpdPath;
  BOOL _async;
  NSObject<OS_dispatch_queue> *_dispatchQueue;
  NSObject<FNFLogging> *_logger;
}

/* instance methods */
- (id)initWithConfig:(struct FNFDashConfig { struct FNFDashConfigGen { BOOL x0; long long x1; double x2; double x3; double x4; double x5; BOOL x6; double x7; double x8; double x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; double x18; long long x19; double x20; double x21; double x22; double x23; double x24; double x25; long long x26; BOOL x27; long long x28; double x29; double x30; BOOL x31; BOOL x32; long long x33; BOOL x34; double x35; long long x36; long long x37; long long x38; long long x39; long long x40; BOOL x41; BOOL x42; BOOL x43; long long x44; BOOL x45; BOOL x46; double x47; long long x48; double x49; double x50; double x51; double x52; double x53; BOOL x54; BOOL x55; BOOL x56; BOOL x57; BOOL x58; BOOL x59; BOOL x60; BOOL x61; BOOL x62; BOOL x63; BOOL x64; long long x65; long long x66; long long x67; long long x68; long long x69; long long x70; long long x71; long long x72; long long x73; double x74; BOOL x75; double x76; BOOL x77; long long x78; double x79; long long x80; double x81; double x82; double x83; double x84; double x85; double x86; double x87; double x88; double x89; double x90; double x91; double x92; double x93; double x94; double x95; double x96; double x97; BOOL x98; double x99; double x100; double x101; long long x102; BOOL x103; BOOL x104; double x105; double x106; BOOL x107; } x0; long long x1[5] double x2; double x3; double x4; double x5; double x6; BOOL x7; int x8; int x9; BOOL x10; BOOL x11; int x12; int x13; int x14; double x15; BOOL x16; int x17; int x18; int x19; int x20; double x21; double x22; double x23; int x24; int x25; int x26; int x27; int x28; double x29; BOOL x30; double x31; BOOL x32; BOOL x33; BOOL x34; long long x35; BOOL x36; double x37; double x38; double x39; double x40; int x41; double x42; BOOL x43; long long x44; BOOL x45; long long x46; double x47; double x48; double x49; double x50; BOOL x51; double x52; double x53; double x54; double x55; double x56; double x57; double x58; double x59; double x60; double x61; double x62; double x63; double x64; double x65; double x66; double x67; double x68; double x69; double x70; double x71; double x72; double x73; double x74; double x75; double x76; double x77; double x78; double x79; double x80; double x81; double x82; long long x83; long long x84; double x85; int x86; int x87; int x88; int x89; int x90; int x91; int x92; int x93; int x94; int x95; int x96; int x97; int x98; int x99; double x100; BOOL x101; double x102; double x103; double x104; double x105; double x106; BOOL x107; BOOL x108; BOOL x109; double x110; int x111; BOOL x112; double x113; BOOL x114; int x115; BOOL x116; BOOL x117; int x118; int x119; BOOL x120; BOOL x121; BOOL x122; BOOL x123; BOOL x124; BOOL x125; double x126; long long x127; int x128; double x129; double x130; double x131; double x132; double x133; double x134; double x135; double x136; double x137; double x138; double x139; double x140; BOOL x141; double x142; double x143; BOOL x144; double x145; BOOL x146; BOOL x147; long long x148; int x149; int x150; int x151; int x152; BOOL x153; BOOL x154; BOOL x155; BOOL x156; BOOL x157; BOOL x158; BOOL x159; BOOL x160; int x161; BOOL x162; BOOL x163; BOOL x164; BOOL x165; BOOL x166; BOOL x167; BOOL x168; BOOL x169; long long x170; long long x171; long long x172; BOOL x173; BOOL x174; BOOL x175; int x176; int x177; BOOL x178; BOOL x179; BOOL x180; BOOL x181; BOOL x182; BOOL x183; BOOL x184; BOOL x185; BOOL x186; BOOL x187; BOOL x188; })config sessionConfig:(struct { id x0; id x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; id x7; BOOL x8; unsigned char x9; id x10; })config resourceLoader:(id)loader errorListener:(id)listener dvlMpdPath:(id)path psrProfileProvider:(id)provider logger:(id)logger;
- (id)initWithConfig:(struct FNFDashConfig { struct FNFDashConfigGen { BOOL x0; long long x1; double x2; double x3; double x4; double x5; BOOL x6; double x7; double x8; double x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; double x18; long long x19; double x20; double x21; double x22; double x23; double x24; double x25; long long x26; BOOL x27; long long x28; double x29; double x30; BOOL x31; BOOL x32; long long x33; BOOL x34; double x35; long long x36; long long x37; long long x38; long long x39; long long x40; BOOL x41; BOOL x42; BOOL x43; long long x44; BOOL x45; BOOL x46; double x47; long long x48; double x49; double x50; double x51; double x52; double x53; BOOL x54; BOOL x55; BOOL x56; BOOL x57; BOOL x58; BOOL x59; BOOL x60; BOOL x61; BOOL x62; BOOL x63; BOOL x64; long long x65; long long x66; long long x67; long long x68; long long x69; long long x70; long long x71; long long x72; long long x73; double x74; BOOL x75; double x76; BOOL x77; long long x78; double x79; long long x80; double x81; double x82; double x83; double x84; double x85; double x86; double x87; double x88; double x89; double x90; double x91; double x92; double x93; double x94; double x95; double x96; double x97; BOOL x98; double x99; double x100; double x101; long long x102; BOOL x103; BOOL x104; double x105; double x106; BOOL x107; } x0; long long x1[5] double x2; double x3; double x4; double x5; double x6; BOOL x7; int x8; int x9; BOOL x10; BOOL x11; int x12; int x13; int x14; double x15; BOOL x16; int x17; int x18; int x19; int x20; double x21; double x22; double x23; int x24; int x25; int x26; int x27; int x28; double x29; BOOL x30; double x31; BOOL x32; BOOL x33; BOOL x34; long long x35; BOOL x36; double x37; double x38; double x39; double x40; int x41; double x42; BOOL x43; long long x44; BOOL x45; long long x46; double x47; double x48; double x49; double x50; BOOL x51; double x52; double x53; double x54; double x55; double x56; double x57; double x58; double x59; double x60; double x61; double x62; double x63; double x64; double x65; double x66; double x67; double x68; double x69; double x70; double x71; double x72; double x73; double x74; double x75; double x76; double x77; double x78; double x79; double x80; double x81; double x82; long long x83; long long x84; double x85; int x86; int x87; int x88; int x89; int x90; int x91; int x92; int x93; int x94; int x95; int x96; int x97; int x98; int x99; double x100; BOOL x101; double x102; double x103; double x104; double x105; double x106; BOOL x107; BOOL x108; BOOL x109; double x110; int x111; BOOL x112; double x113; BOOL x114; int x115; BOOL x116; BOOL x117; int x118; int x119; BOOL x120; BOOL x121; BOOL x122; BOOL x123; BOOL x124; BOOL x125; double x126; long long x127; int x128; double x129; double x130; double x131; double x132; double x133; double x134; double x135; double x136; double x137; double x138; double x139; double x140; BOOL x141; double x142; double x143; BOOL x144; double x145; BOOL x146; BOOL x147; long long x148; int x149; int x150; int x151; int x152; BOOL x153; BOOL x154; BOOL x155; BOOL x156; BOOL x157; BOOL x158; BOOL x159; BOOL x160; int x161; BOOL x162; BOOL x163; BOOL x164; BOOL x165; BOOL x166; BOOL x167; BOOL x168; BOOL x169; long long x170; long long x171; long long x172; BOOL x173; BOOL x174; BOOL x175; int x176; int x177; BOOL x178; BOOL x179; BOOL x180; BOOL x181; BOOL x182; BOOL x183; BOOL x184; BOOL x185; BOOL x186; BOOL x187; BOOL x188; })config sessionConfig:(struct { id x0; id x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; id x7; BOOL x8; unsigned char x9; id x10; })config resourceLoader:(id)loader errorListener:(id)listener dvlMpdPath:(id)path async:(BOOL)async psrProfileProvider:(id)provider logger:(id)logger;
- (id)description;
- (void)setDelegate:(id)delegate;
- (id)fetchWithRange:(id)range track:(long long)track selectionMetadata:(id)metadata isHeaderOnly:(BOOL)only;
- (void)cancelFetchWithReason:(id)reason;
- (void)updateHttpPriority:(BOOL)priority;
- (BOOL)fetchInProgress;
- (id)_fetchWithRange:(id)range selectionMetadata:(id)metadata incompleteDataFinishCount:(int)count track:(long long)track isHeaderOnly:(BOOL)only streamRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)_dataCallback:(id)callback offset:(unsigned long long)offset dataRequest:(id)request forTrack:(long long)track;
- (void)_retryAttemptForError:(id)error errorData:(id)data;
- (void)_dataFinished:(id)finished dataRequest:(id)request responseMetadata:(id)metadata contentInfo:(id)info loadingRequest:(id)request forTrack:(long long)track;
- (id)resourceLoader;
- (id)_getURLWithOneParameter:(id)parameter;
- (id)_addQueryParam:(id)param key:(id)key value:(id)value;
@end

#endif /* FNFDashNetworker_h */
