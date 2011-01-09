/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView<UITextSelectingContainer>, DOMRange;



@interface UITextSelection : NSObject 
{
    UIView<UITextSelectingContainer> *_view;
    NSInteger _state;
    NSInteger _affinity;
    NSInteger _granularity;
    DOMRange *_selectedRange;
    DOMRange *_base;
    DOMRange *_initialExtent;
    NSUInteger _selectionChangeCount;
}

@property(readonly) UIView<UITextSelectingContainer> *view;
@property(readonly) NSInteger state;
@property(readonly) NSUInteger selectionChangeCount;
@property NSInteger affinity;
@property(retain) DOMRange *selectedRange;
@property(retain) DOMRange *initialExtent;
@property NSInteger granularity;
@property(retain) DOMRange *base;


- (BOOL)pointAtStartOfLine:(struct CGPoint { float x1; float x2; })arg1;
- (id)simpleSmartExtendDownstream:(BOOL)arg1 start:(id)arg2 end:(id)arg3 initialExtent:(id)arg4;
- (NSInteger)affinity;
- (void)setAffinity:(NSInteger)arg1;
- (id)initialExtent;
- (void)setInitialExtent:(id)arg1;
- (NSInteger)granularity;
- (void)setSelectedRange:(id)arg1;
- (id)base;
- (void)setBase:(id)arg1;
- (BOOL)setRangedSelectionExtentPoint:(struct CGPoint { float x1; float x2; })arg1 baseIsStart:(BOOL)arg2 allowFlipping:(BOOL)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })closestCaretRectForPoint:(struct CGPoint { float x1; float x2; })arg1 inSelection:(BOOL)arg2;
- (void)smartExtendRangedSelection:(NSInteger)arg1 downstream:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRect;
- (void)aggressivelyExpandSelectionToWordContainingCaretSelection;
- (void)setRangedSelectionBaseToCurrentSelectionStart;
- (void)setRangedSelectionBaseToCurrentSelectionEnd;
- (void)setRangedSelectionInitialExtentToCurrentSelectionStart;
- (void)setRangedSelectionInitialExtentToCurrentSelectionEnd;
- (BOOL)setRangedSelectionExtentPoint:(struct CGPoint { float x1; float x2; })arg1 baseIsStart:(BOOL)arg2;
- (void)setGranularity:(NSInteger)arg1;
- (void)commit;
- (NSUInteger)offsetInMarkedText;
- (void)alterSelection:(struct CGPoint { float x1; float x2; })arg1 granularity:(NSInteger)arg2;
- (void)setRangedSelectionBaseToCurrentSelection;
- (void)clearRangedSelectionInitialExtent;
- (void)setRangedSelectionWithExtentPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)hasEditableSelection;
- (id)selectionRects;
- (void)moveCaretToBoundaryOfWhitespaceOrLine;
- (id)wordContainingCaretSelection;
- (BOOL)pointAtEndOfLine:(struct CGPoint { float x1; float x2; })arg1;
- (void)setSelectionWithFirstPoint:(struct CGPoint { float x1; float x2; })arg1 secondPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)clearSelection;
- (NSUInteger)selectionChangeCount;
- (void)collapseSelection;
- (id)initWithView:(id)arg1;
- (id)selectedRange;
- (void)selectionChanged;
- (id)selectedText;
- (id)view;
- (void)dealloc;
- (NSInteger)state;

@end