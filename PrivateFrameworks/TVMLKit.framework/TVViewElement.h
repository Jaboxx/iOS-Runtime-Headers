/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface TVViewElement : NSObject <NSCopying> {
    BOOL  _disabled;
    IKViewElement * _element;
}

@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) NSString *autoHighlightIdentifier;
@property (nonatomic, readonly) NSArray *childViewElements;
@property (getter=isDisabled, nonatomic) BOOL disabled;
@property (nonatomic, readonly) IKViewElement *element;
@property (nonatomic, readonly) NSString *elementIdentifier;
@property (nonatomic, readonly) NSString *elementName;
@property (nonatomic, readonly) TVViewElement *parentViewElement;
@property (nonatomic, readonly) TVViewElementStyle *style;
@property (nonatomic, readonly) int updateType;

- (void).cxx_destruct;
- (id)attributes;
- (id)autoHighlightIdentifier;
- (id)childViewElements;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dispatchEventOfType:(int)arg1 canBubble:(BOOL)arg2 cancellable:(BOOL)arg3 extraInfo:(id)arg4 completion:(id /* block */)arg5;
- (void)dispatchEventWithName:(id)arg1 canBubble:(BOOL)arg2 cancellable:(BOOL)arg3 extraInfo:(id)arg4 completion:(id /* block */)arg5;
- (id)element;
- (id)elementIdentifier;
- (id)elementName;
- (id)initWithViewElement:(id)arg1;
- (BOOL)isDisabled;
- (id)parentViewElement;
- (void)resetProperty:(int)arg1;
- (void)setDisabled:(BOOL)arg1;
- (id)style;
- (int)updateType;

@end
