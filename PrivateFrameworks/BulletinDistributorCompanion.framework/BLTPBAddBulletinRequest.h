/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBAddBulletinRequest : PBRequest <NSCopying> {
    BLTPBBulletin *_bulletin;
    double _date;
    struct { 
        unsigned int date : 1; 
        unsigned int updateType : 1; 
        unsigned int shouldPlayLightsAndSirens : 1; 
    } _has;
    BOOL _shouldPlayLightsAndSirens;
    unsigned int _updateType;
}

@property (nonatomic, retain) BLTPBBulletin *bulletin;
@property (nonatomic) double date;
@property (nonatomic, readonly) BOOL hasBulletin;
@property (nonatomic) BOOL hasDate;
@property (nonatomic) BOOL hasShouldPlayLightsAndSirens;
@property (nonatomic) BOOL hasUpdateType;
@property (nonatomic) BOOL shouldPlayLightsAndSirens;
@property (nonatomic) unsigned int updateType;

- (void).cxx_destruct;
- (id)bulletin;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)date;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBulletin;
- (BOOL)hasDate;
- (BOOL)hasShouldPlayLightsAndSirens;
- (BOOL)hasUpdateType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setBulletin:(id)arg1;
- (void)setDate:(double)arg1;
- (void)setHasDate:(BOOL)arg1;
- (void)setHasShouldPlayLightsAndSirens:(BOOL)arg1;
- (void)setHasUpdateType:(BOOL)arg1;
- (void)setShouldPlayLightsAndSirens:(BOOL)arg1;
- (void)setUpdateType:(unsigned int)arg1;
- (BOOL)shouldPlayLightsAndSirens;
- (unsigned int)updateType;
- (void)writeTo:(id)arg1;

@end
