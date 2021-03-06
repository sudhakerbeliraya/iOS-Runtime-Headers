/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCMutableWaveform : RCWaveform {
}

- (void)_mergeBoundarySegmentsInArray:(id)arg1;
- (id)_mutableSegmentsByShiftingSegments:(id)arg1 byTimeOffset:(double)arg2;
- (id)_mutableSegmentsIntersectingTimeRange:(struct { double x1; double x2; })arg1 intersectionRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (void)addSegment:(id)arg1;
- (void)addSegments:(id)arg1;
- (id)classForCoder;
- (BOOL)clipToTimeRange:(struct { double x1; double x2; })arg1;
- (void)removeSegment:(id)arg1;
- (id)segments;

@end
