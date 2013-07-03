/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class NSString, NSLock;

@interface CPDistributedNotificationCenter : NSObject  {
    NSString *_centerName;
    NSLock *_lock;
    struct __CFRunLoopSource { } *_receiveNotificationSource;
    BOOL _isServer;
    struct __CFDictionary { } *_sendPorts;
    unsigned int _startCount;
}

+ (id)centerNamed:(id)arg1;
+ (id)centerForServerPort:(unsigned int)arg1;
+ (void)setCenter:(id)arg1 forServerPort:(unsigned int)arg2;
+ (struct __CFDictionary { }*)_serverPortToNotificationCenterMap;
+ (id)_serverPortToNotificationCenterMapDispatchQueue;

- (void)runServerOnCurrentThread;
- (void)postNotificationName:(id)arg1;
- (void)postNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)stopDeliveringNotifications;
- (void)startDeliveringNotificationsToMainThread;
- (void)_notificationServerWasRestarted;
- (void)_receivedCheckIn:(unsigned int)arg1 auditToken:(struct { unsigned int x1[8]; }*)arg2;
- (BOOL)postNotificationName:(id)arg1 userInfo:(id)arg2 toBundleIdentifier:(id)arg3;
- (void)runServer;
- (void)deliverNotification:(id)arg1 userInfo:(id)arg2;
- (void)_createReceiveSourceForRunLoop:(struct __CFRunLoop { }*)arg1;
- (void)startDeliveringNotificationsToRunLoop:(struct __CFRunLoop { }*)arg1;
- (void)_checkIn;
- (void)_checkOutAndRemoveSource;
- (id)_initWithServerName:(id)arg1;
- (id)name;
- (void)dealloc;

@end