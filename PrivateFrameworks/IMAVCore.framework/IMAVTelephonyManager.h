/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class CTCallCenter;



@interface IMAVTelephonyManager : NSObject 
{
    CTCallCenter *_callCenter;
}

+ (id)sharedInstance;
+ (id)numberToDialForNumber:(id)arg1 dialAssist:(BOOL*)arg2;

- (id)init;
- (void)dealloc;
- (void)_handleCallEvent:(id)arg1;
- (NSUInteger)callState;

@end