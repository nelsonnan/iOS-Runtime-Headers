/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSObject<OS_dispatch_queue>;

@interface TSDTilingLimitedQueue : NSObject {
    int mLimit;
    NSObject<OS_dispatch_queue> *mManagerQueue;
    int mReaderCount;
    int mSpinLock;
    NSObject<OS_dispatch_queue> *mTargetQueue;
}

- (void)dealloc;
- (id)init;
- (id)initWithLimit:(int)arg1;
- (void)performAsync:(id)arg1;

@end
