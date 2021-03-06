/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VUSocialUpload.framework/VUSocialUpload
 */

@class <VimeoPostDelegate>, ACAccount, ALAsset, ALAssetsLibrary, NSArray, NSData, NSString, NSURL, VUDataReader;

@interface VimeoPost : NSObject {
    unsigned int _accessType;
    ACAccount *_account;
    ALAsset *_asset;
    NSData *_assetData;
    NSURL *_assetURL;
    ALAssetsLibrary *_assetsLibrary;
    NSURL *_baseURL;
    BOOL _canUploadOverCellular;
    BOOL _continuingUpload;
    VUDataReader *_dataReader;
    <VimeoPostDelegate> *_delegate;
    NSString *_description;
    NSURL *_exportedVideoURL;
    unsigned int _lastByteStored;
    int _privacySettings;
    int _retryCount;
    NSArray *_tags;
    NSString *_ticketID;
    NSString *_title;
    NSURL *_uploadEndpoint;
    int _uploadState;
    NSString *_videoID;
    int _videoSize;
}

@property unsigned int accessType;
@property(retain) ACAccount * account;
@property(retain) ALAsset * asset;
@property(retain) NSData * assetData;
@property(retain) NSURL * assetURL;
@property(retain) VUDataReader * dataReader;
@property <VimeoPostDelegate> * delegate;
@property(retain) NSString * description;
@property(retain) NSURL * exportedVideoURL;
@property int privacySettings;
@property(retain) NSArray * tags;
@property(retain) NSString * title;
@property int videoSize;

+ (BOOL)_isUsingCellular;
+ (id)dictionaryWithResponseData:(id)arg1 error:(id*)arg2;
+ (void)getAvailableQuotaForAccount:(id)arg1 completion:(id)arg2;

- (void)_checkQuota;
- (void)_cleanup;
- (void)_commit;
- (void)_errorWithCode:(int)arg1;
- (void)_getTicket;
- (void)_setDescription;
- (void)_setPrivacy;
- (void)_setTags;
- (void)_setTitle;
- (id)_tags;
- (void)_uploadData;
- (void)_verify;
- (void)_warningWithCode:(int)arg1;
- (unsigned int)accessType;
- (id)account;
- (id)asset;
- (id)assetData;
- (id)assetURL;
- (id)assetsLibrary;
- (id)dataReader;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)exportedVideoURL;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)postSize;
- (int)privacySettings;
- (id)serializedDictionary;
- (void)setAccessType:(unsigned int)arg1;
- (void)setAccount:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)setAssetData:(id)arg1;
- (void)setAssetURL:(id)arg1;
- (void)setDataReader:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDescription:(id)arg1;
- (void)setExportedVideoURL:(id)arg1;
- (void)setPrivacySettings:(int)arg1;
- (void)setTags:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setVideoSize:(int)arg1;
- (id)tags;
- (id)title;
- (void)uploadToAccount:(id)arg1;
- (int)videoSize;

@end
