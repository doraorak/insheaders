//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProfileNoteModel_h
#define IGProfileNoteModel_h
@import Foundation;

@class FBWeakObjectContainer, IGDirectNoteModel, IGUserSession;

@interface IGProfileNoteModel : NSObject

@property (readonly, nonatomic) IGUserSession *userSession;
@property (readonly, nonatomic) IGDirectNoteModel *directNoteModel;
@property (readonly, nonatomic) FBWeakObjectContainer *delegate;
@property (readonly, nonatomic) BOOL isCurrentUser;
@property (readonly, nonatomic) BOOL isNewNote;

/* instance methods */
- (id)initWithUserSession:(id)session directNoteModel:(id)model delegate:(id)delegate isCurrentUser:(BOOL)user isNewNote:(BOOL)note;
@end

#endif /* IGProfileNoteModel_h */
