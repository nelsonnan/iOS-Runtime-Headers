/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MCProfileConnection, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface MPRestrictionsMonitor : NSObject <MCProfileConnectionObserver> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _allowsCollectionCompletionPurchases;
    BOOL _allowsDeletion;
    BOOL _allowsExplicitContent;
    BOOL _allowsRadioPurchases;
    NSMutableDictionary *_cachedSettings;
    MCProfileConnection *_connection;
}

@property(readonly) BOOL allowsCollectionCompletionPurchases;
@property(readonly) BOOL allowsDeletion;
@property(readonly) BOOL allowsExplicitContent;
@property(readonly) BOOL allowsRadioPurchases;

+ (id)sharedRestrictionsMonitor;

- (void).cxx_destruct;
- (void)_cacheValue:(id)arg1 forSetting:(id)arg2;
- (BOOL)_isRunningInStoreDemoMode;
- (void)_updateWithCanPostNotifications:(BOOL)arg1;
- (BOOL)allowsCollectionCompletionPurchases;
- (BOOL)allowsDeletion;
- (BOOL)allowsExplicitContent;
- (BOOL)allowsRadioPurchases;
- (void)dealloc;
- (id)effectiveValueForSetting:(id)arg1;
- (id)init;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;

@end
