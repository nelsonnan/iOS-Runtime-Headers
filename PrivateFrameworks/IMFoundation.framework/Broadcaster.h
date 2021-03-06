/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class IMMessageContext, IMRemoteObjectBroadcaster, NSArray, Protocol;

@interface Broadcaster : NSProxy {
    IMMessageContext *_messageContext;
    IMRemoteObjectBroadcaster *_parent;
    Protocol *_protocol;
    NSArray *_targets;
}

- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)initWithNotifier:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 targets:(id)arg4;
- (id)methodSignatureForSelector:(SEL)arg1;

@end
