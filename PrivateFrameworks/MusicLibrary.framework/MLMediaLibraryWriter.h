/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSOperationQueue, NSTimer, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSMutableDictionary;

@interface MLMediaLibraryWriter : NSObject  {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_mediaLibraries;
    NSMutableDictionary *_transactionMap;
    NSOperationQueue *_templatedOperationsQueue;
    NSTimer *_timeoutTimer;
    NSObject<OS_dispatch_source> *_signalDispatchSource;
    double _transactionTimeout;
}

@property double transactionTimeout;

+ (id)writerErrorWithCode:(int)arg1 description:(id)arg2;

- (void)setTransactionTimeout:(double)arg1;
- (double)transactionTimeout;
- (id)_transactionForProcessIdentifier:(int)arg1;
- (void)cancelActiveTransactionForProcess:(int)arg1;
- (void)_handleDebugSignal;
- (void)cancelAllActiveDatabaseOperations;
- (id)_mediaLibraryForPath:(id)arg1;
- (id)_transactionForIdentifier:(id)arg1;
- (void)_destroyTransactionForIdentifier:(id)arg1 forceRelinquishConnection:(BOOL)arg2;
- (id)_newTransactionForDatabaseAtPath:(id)arg1 fromXPCConnection:(id)arg2;
- (void)cancelAllActiveTransactions;
- (void)_setupSignalHandler;
- (void)_timeoutTimerFired:(id)arg1;
- (void)setConnectionsProfilingLevel:(int)arg1;
- (void)executeTemplatedDatabaseOperation:(unsigned int)arg1 withAttributes:(id)arg2 options:(id)arg3 fromXPCConnection:(id)arg4 completionHandler:(id)arg5;
- (void)endTransaction:(id)arg1 shouldCommit:(BOOL)arg2 withCompletionHandler:(id)arg3;
- (void)executeQuery:(id)arg1 withParameters:(id)arg2 options:(id)arg3 onTransaction:(id)arg4 withCompletionHandler:(id)arg5;
- (void)executeUpdate:(id)arg1 withParameters:(id)arg2 onTransaction:(id)arg3 withCompletionHandler:(id)arg4;
- (void)beginTransactionForDatabaseAtPath:(id)arg1 withPriorityLevel:(unsigned int)arg2 fromXPCConnection:(id)arg3 withCompletionHandler:(id)arg4;
- (void)reset;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end