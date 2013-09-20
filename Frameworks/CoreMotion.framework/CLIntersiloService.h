/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@class CLIntersiloInterface, CLSilo;

@interface CLIntersiloService : NSObject <CLIntersiloServiceProtocol> {
    CLIntersiloInterface *_inboundInterface;
    CLIntersiloInterface *_outboundInterface;
    CLSilo *_silo;
}

@property(readonly) CLIntersiloInterface * inboundInterface;
@property(readonly) CLIntersiloInterface * outboundInterface;
@property(readonly) CLSilo * silo;

+ (id)getSilo;

- (void).cxx_destruct;
- (id)debugDescription;
- (void)heartAttack;
- (id)inboundInterface;
- (id)init;
- (id)initInSilo:(id)arg1;
- (id)initWithInboundProtocol:(id)arg1 outboundProtocol:(id)arg2 andSilo:(id)arg3;
- (BOOL)isHydrated;
- (id)outboundInterface;
- (id)silo;

@end