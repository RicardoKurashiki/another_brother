//
//  PrintPdfFileMethodCall.h
//  another_brother
//
//  Created by admin on 4/15/21.
//

#ifndef PrintPdfFileMethodCall_h
#define PrintPdfFileMethodCall_h


#import <Flutter/Flutter.h>
#import "BrotherUtils.h"

@interface PrintPdfFileMethodCall : NSObject

//val call: MethodCall, val result: MethodChannel.Resul

@property (strong, nonatomic) FlutterMethodCall* call;
@property (strong, nonatomic) FlutterResult result;
@property (class, nonatomic, assign, readonly) NSString * METHOD_NAME;

- (instancetype)initWithCall:(FlutterMethodCall *)call
                  result:(FlutterResult) result;

- (void) execute;
@end

#endif /* PrintPdfFileMethodCall_h */
