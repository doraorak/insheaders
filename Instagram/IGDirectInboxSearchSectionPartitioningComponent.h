//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectInboxSearchSectionPartitioningComponent_h
#define IGDirectInboxSearchSectionPartitioningComponent_h
@import Foundation;

@class NSArray, NSString;

@interface IGDirectInboxSearchSectionPartitioningComponent : NSObject

@property (readonly, nonatomic) NSString *sectionTitle;
@property (readonly, nonatomic) long long maxRecipients;
@property (readonly, nonatomic) id /* block */ filterBlock;
@property (readonly, nonatomic) id /* block */ comparator;
@property (readonly, nonatomic) NSArray *expandedSections;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) long long recipientListSectionType;

/* instance methods */
- (id)initWithSectionTitle:(id)title maxRecipients:(long long)recipients filterBlock:(id /* block */)block comparator:(id /* block */)comparator expandedSections:(id)sections type:(unsigned long long)type recipientListSectionType:(long long)type;
@end

#endif /* IGDirectInboxSearchSectionPartitioningComponent_h */
