/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class ASAsset, NSString;

@interface _UIDefinitionDictionary : NSObject {
    BOOL _activated;
    NSString *_definitionLanguage;
    struct __DCSDictionary { } *_dictionary;
    ASAsset *_rawAsset;
}

@property BOOL activated;
@property(readonly) NSString * definitionLanguage;
@property(readonly) NSString * localizedDictionaryName;
@property(readonly) ASAsset * rawAsset;

- (id)_HTMLDefinitionForTerm:(id)arg1 type:(long)arg2;
- (id)_attributedDefinitionForTerm:(id)arg1;
- (id)_definitionValueForTerm:(id)arg1;
- (id)_fullHTMLDefinitionForTerm:(id)arg1;
- (BOOL)_hasDefinitionForTerm:(id)arg1;
- (id)_shortHTMLDefinitionForTerm:(id)arg1;
- (BOOL)activated;
- (void)dealloc;
- (id)definitionLanguage;
- (id)description;
- (id)initWithAsset:(id)arg1;
- (id)localizedDictionaryName;
- (id)rawAsset;
- (void)setActivated:(BOOL)arg1;

@end
