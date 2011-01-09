/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class EDWorkbook, NSString, CMArchiveManager, OIXMLDocument, NSMutableArray, OIXMLElement;



@interface EMWorkbookMapper : CMMapper <CMMapperRoot>
{
    NSUInteger mRealSheetCount;
    NSInteger mWidth;
    NSInteger mHeight;
    EDWorkbook *edWorkbook;
    NSMutableArray *mWorksheetUrls;
    NSMutableArray *mWorksheetNames;
    NSMutableArray *mWorksheetGuids;
    NSString *mResourceUrlPrefix;
    NSString *mResourceUrlProtocol;
    NSString *mStyleSheetGuid;
    CMArchiveManager *mArchiver;
    NSString *mFileName;
    NSUInteger mSheetIndex;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mIsFirstMappedSheet;


  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mIsFrameset;

    OIXMLDocument *mXhtmlDoc;
    OIXMLElement *mBodyElement;
    OIXMLDocument *mTabBarDoc;
    NSString *mTabBarURL;
    NSMutableArray *mSheetURLs;
    float mTabPosition;
    NSUInteger mNumberOfMappedSheets;
    BOOL mHasPushedHeader;
    BOOL mHasPushedFirstSheet;
    BOOL mLoadingMessageVisible;
}

+ (id)cssStyleCache;
+ (void)setBaseDate1904:(BOOL)arg1;
+ (id)baseDate;
+ (id)borderStyleCache;
+ (id)borderWidthCache;

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isMultiPage;
     /* Encoded args for previous method: B8@0:4 */

- (BOOL)hasMultipleSheets;
- (id)_createMainPageAndReturnFront;
- (id)_mainPageBack;
- (void)_pushTabForSheet:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)_createStringForSheet:(id)arg1 atIndex:(NSUInteger)arg2 withState:(id)arg3 andMapper:(id)arg4;
- (id)createSheetMapperWithEdSheet:(id)arg1;
- (void)mapBodyStyleAt:(id)arg1;
- (id)initWithEDWorkbook:(id)arg1 archiver:(id)arg2;
- (id)workbook;
- (void)startMappingWithState:(id)arg1;
- (void)mapElement:(id)arg1 atIndex:(NSUInteger)arg2 withState:(id)arg3 isLastElement:(BOOL)arg4;
- (void)finishMappingWithState:(id)arg1;
- (id)blipAtIndex:(NSUInteger)arg1;
- (void)setFileName:(id)arg1;
- (id)archiver;
- (id)styleMatrix;
- (id)documentTitle;
- (struct CGSize { float x1; float x2; })pageSizeForDevice;
- (void)dealloc;
- (id)fileName;

@end