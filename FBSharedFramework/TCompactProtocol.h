//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef TCompactProtocol_h
#define TCompactProtocol_h
@import Foundation;

#include "TProtocol-Protocol.h"
#include "TTransport-Protocol.h"

@class NSMutableArray, NSString;

@interface TCompactProtocol : NSObject<TProtocol> {
  /* instance variables */
  NSObject<TTransport> *mTransport;
  BOOL mStrictRead;
  BOOL mStrictWrite;
  int mMessageSizeLimit;
  NSMutableArray *mLastField;
  int mLastFieldId;
  BOOL mHasBooleanField;
  NSString *mBooleanFieldName;
  int mBooleanFieldId;
  BOOL mBooleanFieldValue;
  long long mMaxNetworkBytes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTransport:(id)transport;
- (id)initWithTransport:(id)transport strictRead:(BOOL)read strictWrite:(BOOL)write;
- (int)messageSizeLimit;
- (void)setMessageSizeLimit:(int)limit;
- (void)dealloc;
- (id)transport;
- (int)getCompactType:(int)type;
- (BOOL)isBoolType:(unsigned char)type;
- (unsigned char)getTType:(unsigned char)ttype;
- (void)reset;
- (void)writeMessageBeginWithName:(id)name type:(int)type sequenceID:(int)id;
- (void)writeStructBeginWithName:(id)name;
- (void)writeStructEnd;
- (void)writeFieldBeginWithName:(id)name type:(int)type fieldID:(int)id;
- (void)writeFieldBeginWithName:(id)name type:(int)type fieldID:(int)id typeOverride:(int)override;
- (void)writeFieldStop;
- (void)writeMapBeginWithKeyType:(int)type valueType:(int)type size:(int)size;
- (void)writeListBeginWithElementType:(int)type size:(int)size;
- (void)writeSetBeginWithElementType:(int)type size:(int)size;
- (void)writeBool:(BOOL)bool;
- (void)writeByte:(unsigned char)byte;
- (void)writeI16:(short)i16;
- (void)writeI32:(int)i32;
- (void)writeI64:(long long)i64;
- (void)writeDouble:(double)double;
- (void)writeString:(id)string;
- (void)writeBinary:(id)binary;
- (void)writeBinary:(const char *)binary offset:(unsigned int)offset length:(unsigned int)length;
- (void)writeMessageEnd;
- (void)writeMapEnd;
- (void)writeListEnd;
- (void)writeSetEnd;
- (void)writeFieldEnd;
- (void)writeCollectionBeginWithType:(int)type size:(int)size;
- (void)writeVarint32:(int)varint32;
- (void)writeVarint64:(long long)varint64;
- (long long)longToZigzag:(long long)zigzag;
- (int)intToZigZag:(int)zag;
- (void)writeByteDirectByte:(unsigned char)byte;
- (void)writeByteDirect:(int)direct;
- (void)readMessageBeginReturningName:(id *)name type:(int *)type sequenceID:(int *)id;
- (void)readStructBeginReturningName:(id *)name;
- (void)readStructEnd;
- (void)readFieldBeginReturningName:(id *)name type:(int *)type fieldID:(int *)id;
- (void)readMapBeginReturningKeyType:(int *)type valueType:(int *)type size:(int *)size;
- (void)readListBeginReturningElementType:(int *)type size:(int *)size;
- (void)readSetBeginReturningElementType:(int *)type size:(int *)size;
- (BOOL)readBool;
- (unsigned char)readByte;
- (short)readI16;
- (int)readI32;
- (long long)readI64;
- (double)readDouble;
- (id)readString;
- (id)readBinary;
- (id)readBinary:(int)binary;
- (void)checkReadLength:(int)length;
- (void)readMessageEnd;
- (void)readFieldEnd;
- (void)readMapEnd;
- (void)readListEnd;
- (void)readSetEnd;
- (int)readVarint32;
- (long long)readVarint64;
- (int)zigzagToInt:(int)int;
- (long long)zigzagToLong:(long long)long;
@end

#endif /* TCompactProtocol_h */
