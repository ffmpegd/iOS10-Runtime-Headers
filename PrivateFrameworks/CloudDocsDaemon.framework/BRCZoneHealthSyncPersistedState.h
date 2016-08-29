/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCZoneHealthSyncPersistedState : BRCPersistedState {
    CKServerChangeToken * _changeToken;
    NSDate * _lastSyncDownDate;
    bool  _needsSyncDown;
    unsigned long long  _requestID;
}

@property (nonatomic, readonly) CKServerChangeToken *changeToken;
@property (readonly) NSDate *lastSyncDownDate;
@property (nonatomic) bool needsSyncDown;
@property (nonatomic, readonly) unsigned long long requestID;

+ (id)loadFromClientStateInSession:(id)arg1 options:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)allocateNextRequestID;
- (id)changeToken;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithZoneHealthState:(id)arg1;
- (id)lastSyncDownDate;
- (bool)needsSyncDown;
- (unsigned long long)requestID;
- (void)setNeedsSyncDown:(bool)arg1;
- (void)updateWithServerChangeToken:(id)arg1 requestID:(unsigned long long)arg2;
- (void)zoneHealthWasReset;

@end