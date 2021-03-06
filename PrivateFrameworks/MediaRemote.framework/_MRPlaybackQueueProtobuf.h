/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRPlaybackQueueProtobuf : PBCodable <NSCopying> {
    NSMutableArray * _contentItems;
    _MRPlaybackQueueContextProtobuf * _context;
    struct { 
        unsigned int location : 1; 
    }  _has;
    int  _location;
    NSString * _requestID;
}

@property (nonatomic, retain) NSMutableArray *contentItems;
@property (nonatomic, retain) _MRPlaybackQueueContextProtobuf *context;
@property (nonatomic, readonly) BOOL hasContext;
@property (nonatomic) BOOL hasLocation;
@property (nonatomic, readonly) BOOL hasRequestID;
@property (nonatomic) int location;
@property (nonatomic, retain) NSString *requestID;

+ (Class)contentItemType;

- (void)addContentItem:(id)arg1;
- (void)clearContentItems;
- (id)contentItemAtIndex:(unsigned int)arg1;
- (id)contentItems;
- (unsigned int)contentItemsCount;
- (id)context;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasContext;
- (BOOL)hasLocation;
- (BOOL)hasRequestID;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)location;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)requestID;
- (void)setContentItems:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setHasLocation:(BOOL)arg1;
- (void)setLocation:(int)arg1;
- (void)setRequestID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
