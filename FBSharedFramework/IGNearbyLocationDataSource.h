//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGNearbyLocationDataSource_h
#define IGNearbyLocationDataSource_h
@import Foundation;

#include "IGAPIRequestToken.h"
#include "IGNearbyLocationDataSourceDelegate-Protocol.h"
#include "IGSearchThrottlingType-Protocol.h"
#include "IGUserSession.h"
#include "UITableViewDataSource-Protocol.h"

@class CLLocation, NSArray, NSDate, NSDictionary, NSString;

@interface IGNearbyLocationDataSource : NSObject<UITableViewDataSource> {
  /* instance variables */
  NSObject<IGSearchThrottlingType> *_searchThrottler;
  BOOL _allowCustomLocation;
  BOOL _isLocating;
  BOOL _preventEagerFetch;
  BOOL _lastResponseReducedAccuracy;
  BOOL _locationIsFromEXIF;
  BOOL _reducedLocationAccuracy;
  NSArray *_EXIFLocations;
  CLLocation *_EXIFPhotoLocation;
  NSDate *_mediaCreationTime;
  NSString *_queryText;
  CLLocation *_lastKnownLocation;
  NSDictionary *_lastKnownResponse;
}

@property (readonly, nonatomic) IGUserSession *userSession;
@property (retain, nonatomic) IGAPIRequestToken *requestToken;
@property (retain, nonatomic) NSString *lastRequestID;
@property (retain, nonatomic) NSString *responseRankTokenID;
@property (retain, nonatomic) NSString *responseQueryText;
@property (retain, nonatomic) NSArray *locations;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL isSearching;
@property (readonly, nonatomic) NSString *rankToken;
@property (weak, nonatomic) NSObject<IGNearbyLocationDataSourceDelegate> *delegate;
@property (nonatomic) long long fetchStatus;
@property (retain, nonatomic) CLLocation *currentUserLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (id)initWithDelegate:(id)delegate allowCustomLocation:(BOOL)location userSession:(id)session;
- (void)reloadData;
- (BOOL)hasError;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (void)_onLocationUpdated:(id)updated;
- (void)_onLocationFailed:(id)failed;
- (void)_onLocationDenied:(id)denied;
- (void)fetchLocationsOrLocateUser;
@end

#endif /* IGNearbyLocationDataSource_h */