//
//  BrotherUtils.h
//  another_brother
//
//  Created by admin on 4/11/21.
//

#ifndef BrotherUtils_h
#define BrotherUtils_h

#import <BRLMPrinterKit/BRLMPrinterKit.h>
#import <BRLMPrinterKit/BRLMPrinterDefine.h>


@interface LabelName : NSObject

@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) NSString *model;
- (instancetype)initWithName:(NSString *)name
                  model:(NSString *)model;
@end

@interface BrotherUtils :NSObject

+ (BRLMChannelType) portFromMapWithValue:(NSDictionary<NSString *, NSObject *>*) map;

+ (BRLMPrinterModel) modelFromMapWithValue:(NSDictionary<NSString *, NSObject *>*) map;

+ (BRLMPrintSettingsHalftone) halftoneFromMapWithValue:(NSDictionary<NSString *, NSObject *> *) map;

+ (BRLMPrintSettingsHorizontalAlignment) alignFromMapWithValue:(NSDictionary<NSString *, NSObject *> *) map;

+ (BRLMPrintSettingsVerticalAlignment) vAlignFromMapWithValue:(NSDictionary<NSString *, NSObject *> *) map;

+ (BRLMPrintSettingsOrientation) orientationFromMapWithValue:(NSDictionary<NSString *, NSObject*> *) map;

+ (BRLMPrintSettingsResolution) printQualityFromMapWithValue:(NSDictionary<NSString*, NSObject *> *) map;

+ (BRLMPrintSettingsScaleMode) printModeFromMapWithValue:(NSDictionary<NSString*, NSObject*> *) map;

+ (BRLMCustomPaperSizePaperKind) paperKindFromMapWithValue:(NSDictionary<NSString *, NSObject*> *) map;

+ (BRLMCustomPaperSizeLengthUnit) unitFromMapWithValue:(NSDictionary<NSString *, NSObject *> *) map;

+ (BRLMCustomPaperSizeMargins) customMarginFromMapWithValue:(NSDictionary<NSString*, NSObject *> *) map;

+ (BRLMPrinterModel) printerModelFromPrinterInfoMapWithValue:(NSDictionary<NSString *, NSObject*> *) map;

+ (LabelName *) labelNameFromMapWithValue:(NSDictionary<NSString *, NSObject *> *) map;

+ (BRLMQLPrintSettingsLabelSize) qlLabelSizeWithName:(LabelName *) labelName;

+ (BRLMChannel *) printChannelWithPrintSettingsMap:(NSDictionary<NSString *, NSObject *> *) map;

+ (id<BRLMPrintSettingsProtocol>) printSettingsFromMapWithValue:(NSDictionary<NSString *, NSObject *> *) map;

+ (BRLMQLPrintSettings *) qlPrintSettingsFromMapWithValue:(NSDictionary<NSString *, NSObject *> *) map;

+ (BRLMPJPrintSettings *) pjPrintSettingsFromMapWithValue:(NSDictionary<NSString *, NSObject *> *) map;

+ (BRLMRJPrintSettings *) rjPrintSettingsFromMapWithValue:(NSDictionary<NSString *, NSObject *> *) map;

+ (BRLMTDPrintSettings *) tdPrintSettingsFromMapWithValue:(NSDictionary<NSString *, NSObject *> *) map;

+ (BRLMPTPrintSettings *) ptPrintSettingsFromMapWithValue:(NSDictionary<NSString *, NSObject *> *) map;

+ (BRLMMWPrintSettings *) mwPrintSettingsFromMapWithValue:(NSDictionary<NSString *, NSObject *> *) map;

+ (NSDictionary<NSString *, NSObject *> *) errorCodeToMapWithValue:(BRLMPrintErrorCode)error;

+ (NSDictionary<NSString *, NSObject *> *) printerStatusToMapWithError:(BRLMPrintErrorCode)error status:(BRLMPrinterStatus *) status;

@end




/*
@interface  BRLMChannelType (BRLMChannelTypeEncoding)
- (NSMutableDictionary<NSString *, NSObject *>)toMap;
@end
*/



#endif /* BrotherUtils_h */
