/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSCore.framework/IDSCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class IMTimer, NSRecursiveLock, NSString;

@interface IDSAppleRegistrationKeyManager : NSObject {
    IMTimer *_cleanupOldIdentityTimer;
    BOOL _detectedMigrationNeeded;
    struct _SecMPFullIdentity { } *_identity;
    BOOL _identityLoaded;
    BOOL _isMigratedSignature;
    BOOL _loaded;
    NSRecursiveLock *_lock;
    struct _SecMPFullIdentity { } *_oldIdentity;
    struct __SecKey { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __SecKeyDescriptor {} *x2; void *x3; } *_privateKey;
    struct __SecKey { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __SecKeyDescriptor {} *x2; void *x3; } *_publicKey;
    id _purgeCancelBlock;
    id _purgeEnqueueBlock;
    IMTimer *_purgeTimer;
    IMTimer *_regenerateIdentityTimer;
    NSString *_signature;
    struct _SecMPFullIdentity { } *_unregisteredIdentity;
}

+ (BOOL)setupKeys;
+ (id)sharedInstance;

- (void)_generateUnregisteredIdentity;
- (BOOL)_isUnderFirstDataProtectionLock;
- (void)_loadIfNeeded:(BOOL)arg1;
- (void)_notifyUnregisteredIdentityRegenerated;
- (void)_purgeMap;
- (void)_purgeOldIdentity;
- (void)_regenerateIdentityTimerHit;
- (void)_save;
- (void)_setPurgeTimer;
- (struct _SecMPFullIdentity { }*)copyMessageProtectionIdentity;
- (struct _SecMPFullIdentity { }*)copyOldMessageProtectionIdentity;
- (void)dealloc;
- (void)didRegisterIdentity;
- (id)generateCSRForUserID:(id)arg1;
- (struct __SecKey { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)identityPrivateKey;
- (struct __SecKey { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)identityPublicKey;
- (id)init;
- (BOOL)isMigratedKeyPairSignature;
- (id)keyPairSignature;
- (id)publicMessageProtectionData;
- (id)publicMessageProtectionDataToRegister;
- (void)purgeMessageProtectionIdentity;
- (BOOL)requiresKeychainMigration;
- (void)systemDidLeaveFirstDataProtectionLock;

@end
