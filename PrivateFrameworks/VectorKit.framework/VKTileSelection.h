/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTileSelection : NSObject {
    bool  _bootstrap;
    double  _lodBias;
    unsigned long long  _maxZ;
    long long  _tileSize;
}

@property (nonatomic) bool bootstrap;
@property (nonatomic) double lodBias;
@property (nonatomic) unsigned long long maxZ;
@property (nonatomic) long long tileSize;

- (bool)bootstrap;
- (id)init;
- (id)keysForContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg1 neighbors:(id)arg2 selectionScale:(float)arg3;
- (double)lodBias;
- (unsigned long long)maxZ;
- (struct { unsigned int x1; int x2; int x3; int x4; int x5; })relevantTilesForContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg1;
- (void)setBootstrap:(bool)arg1;
- (void)setLodBias:(double)arg1;
- (void)setMaxZ:(unsigned long long)arg1;
- (void)setTileSize:(long long)arg1;
- (long long)tileSize;

@end
