/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSString;

@interface CardDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup {
    NSString *_addressBookHomePath;
    NSString *_directoryGatewayPath;
}

@property(readonly) NSString *addressBookHomePath;
@property(readonly) NSString *directoryGatewayPath;

- (id)_copyAccountPropertiesPropFindElements;
- (void)_setPropertiesFromParsedResponces:(id)arg1;
- (id)addressBookHomePath;
- (void)dealloc;
- (id)description;
- (id)directoryGatewayPath;

@end