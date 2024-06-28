//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBARDefaultLocationDataProviderDataSource_h
#define FBARDefaultLocationDataProviderDataSource_h
@import Foundation;

#include "CLLocationManagerDelegate-Protocol.h"
#include "FBARLocationDataProviderDataSource-Protocol.h"

@class CLGeocoder, CLLocationManager, NSString;
@protocol OS_dispatch_queue, struct LocationData { undefined * * x0; BOOL x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; struct duration<double, std::ratio<1>> { double x0; } x13; BOOL x14; }, {LocationData="_vptr$IServiceResult"^^?"hasValidLocation"B"latitude"d"longitude"d"horizontalAccuracy"d"altitude"d"verticalAccuracy"d"bearing"d"bearingAccuracy"d"magNorthHeading"d"trueNorthHeading"d"headingAccuracy"d"declination"d"timestamp"{duration<double, std::ratio<1>>="__rep_"d}"isInjected"B}, {Optional<std::promise<std::string>>="storage_"{StorageNonTriviallyDestructible=""(?="emptyState"c"value"{promise<std::string>="__state_"^v})"hasValue"B}}, {Optional<std::string>="storage_"{StorageNonTriviallyDestructible=""(?="emptyState"c"value"{basic_string<char, std::char_traits<char>, std::allocator<char>>="__r_"{__compressed_pair<std::basic_string<char>::__rep, std::allocator<char>>="__value_"{__rep=""(?="__l"{__long="__data_"*"__size_"Q"__cap_"b63"__is_long_"b1}"__s"{__short="__data_"[23c]"__padding_"[0C]"__size_"b7"__is_long_"b1}"__r"{__raw="__words"[3Q]})}}})"hasValue"B}}, {ServiceNotifier<msqrd::dataprovider::ILocationUpdateListener>="listenerMutex_"{mutex="__m_"{_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]}}"listeners_"{shared_ptr<std::vector<std::weak_ptr<msqrd::dataprovider::ILocationUpdateListener>>>="__ptr_"^v"__cntrl_"^{__shared_weak_count}}};

@interface FBARDefaultLocationDataProviderDataSource : NSObject<CLLocationManagerDelegate, FBARLocationDataProviderDataSource> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_locationManagerQueue;
  CLLocationManager *_locationManager;
  double _desiredAccuracy;
  double _distanceFilter;
  CLGeocoder *_geocoder;
  struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } _cityNameMutex;
  struct Optional<std::promise<std::string>> { struct StorageNonTriviallyDestructible { union { char emptyState; struct promise<std::string> { void *__state_; } value; } x0; BOOL hasValue; } storage_; } _currentCityPromise;
  struct Optional<std::string> { struct StorageNonTriviallyDestructible { union { char emptyState; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned int x :63 __cap_; unsigned int x :1 __is_long_; } __l; struct __short { char x[23] __data_; unsigned char x[0] __padding_; unsigned int x :7 __size_; unsigned int x :1 __is_long_; } __s; struct __raw { unsigned long long x[3] __words; } __r; } x0; } __value_; } __r_; } value; } x0; BOOL hasValue; } storage_; } _currentCityValue;
  struct ServiceNotifier<msqrd::dataprovider::ILocationUpdateListener> { struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } listenerMutex_; struct shared_ptr<std::vector<std::weak_ptr<msqrd::dataprovider::ILocationUpdateListener>>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } listeners_; } serviceNotifier;
  BOOL _shouldCollectBearing;
}

@property struct LocationData { undefined * * x0; BOOL x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; struct duration<double, std::ratio<1>> { double x0; } x13; BOOL x14; } currentLocationData;
@property (nonatomic) BOOL permissionsAreReady;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDesiredAccuracy:(double)accuracy distanceFilter:(double)filter shouldCollectBearing:(BOOL)bearing;
- (id)init;
- (void)addLocationUpdateListener:(struct weak_ptr<msqrd::dataprovider::ILocationUpdateListener> { struct ILocationUpdateListener * x0; struct __shared_weak_count * x1; })listener;
- (void)removeLocationUpdateListener:(struct weak_ptr<msqrd::dataprovider::ILocationUpdateListener> { struct ILocationUpdateListener * x0; struct __shared_weak_count * x1; })listener;
- (struct shared_future<std::string> { void * x0; })fetchCurrentCityName;
- (void)dealloc;
- (void)_updateWithCurrentLocation;
- (void)locationManager:(id)manager didUpdateLocations:(id)locations;
- (void)locationManager:(id)manager didUpdateHeading:(id)heading;
@end

#endif /* FBARDefaultLocationDataProviderDataSource_h */
