/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@class NSData;

@interface _GCExtendedGamepadSnapshot : _GCExtendedGamepad <_GCSnapshot> {
    NSData *_snapshotData;
}

@property(copy) NSData * snapshotData;

- (void).cxx_destruct;
- (id)init;
- (id)initWithController:(id)arg1 snapshotData:(id)arg2;
- (id)initWithSnapshotData:(id)arg1;
- (void)setSnapshotData:(id)arg1;
- (id)snapshotData;

@end
