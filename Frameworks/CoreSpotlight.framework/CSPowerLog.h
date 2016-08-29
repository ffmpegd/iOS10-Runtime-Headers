/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface CSPowerLog : NSObject {
    unsigned long long  _cachedCount;
    NSDate * _lastFlushDate;
    NSMutableDictionary * _operationsByBundleID;
}

@property (nonatomic) unsigned long long cachedCount;
@property (nonatomic, retain) NSDate *lastFlushDate;
@property (nonatomic, retain) NSMutableDictionary *operationsByBundleID;

+ (id)keyNameForOperation:(long long)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addToDictionary:(long long)arg1 bundleID:(id)arg2 itemCount:(unsigned long long)arg3;
- (unsigned long long)cachedCount;
- (void)flushToPowerLog;
- (id)init;
- (id)lastFlushDate;
- (void)logWithBundleID:(id)arg1 indexOperation:(long long)arg2 itemCount:(unsigned long long)arg3;
- (id)operationsByBundleID;
- (void)setCachedCount:(unsigned long long)arg1;
- (void)setLastFlushDate:(id)arg1;
- (void)setOperationsByBundleID:(id)arg1;

@end