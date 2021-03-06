/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDNFCHCIStartOfTransactionEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int timeDeltaFromReference : 1; 
        unsigned int timestamp : 1; 
        unsigned int status : 1; 
        unsigned int version : 1; 
    } _has;
    unsigned int _status;
    unsigned long long _timeDeltaFromReference;
    unsigned long long _timestamp;
    NSData *_uuidReference;
    unsigned int _version;
}

@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL hasTimeDeltaFromReference;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, readonly) BOOL hasUuidReference;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned long long timeDeltaFromReference;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSData *uuidReference;
@property (nonatomic) unsigned int version;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasStatus;
- (BOOL)hasTimeDeltaFromReference;
- (BOOL)hasTimestamp;
- (BOOL)hasUuidReference;
- (BOOL)hasVersion;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasStatus:(BOOL)arg1;
- (void)setHasTimeDeltaFromReference:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasVersion:(BOOL)arg1;
- (void)setStatus:(unsigned int)arg1;
- (void)setTimeDeltaFromReference:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUuidReference:(id)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)status;
- (unsigned long long)timeDeltaFromReference;
- (unsigned long long)timestamp;
- (id)uuidReference;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
