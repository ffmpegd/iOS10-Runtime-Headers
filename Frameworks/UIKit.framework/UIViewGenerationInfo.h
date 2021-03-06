/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIViewGenerationInfo : NSObject {
    NSMutableArray * _dependentViewGenerators;
    bool  _hasUpdatesToApply;
    bool  _needsUpdateViewHierarchy;
    long long  _numberOfDependencies;
    <_UIViewGenerator> * _viewGenerator;
}

@property (nonatomic, retain) NSMutableArray *dependentViewGenerators;
@property (nonatomic) bool hasUpdatesToApply;
@property (nonatomic) bool needsUpdateViewHierarchy;
@property (nonatomic) long long numberOfDependencies;
@property (nonatomic) <_UIViewGenerator> *viewGenerator;

- (void).cxx_destruct;
- (id)dependentViewGenerators;
- (bool)hasUpdatesToApply;
- (id)initWithGenerator:(id)arg1;
- (bool)needsUpdateViewHierarchy;
- (long long)numberOfDependencies;
- (void)setDependentViewGenerators:(id)arg1;
- (void)setHasUpdatesToApply:(bool)arg1;
- (void)setNeedsUpdateViewHierarchy:(bool)arg1;
- (void)setNumberOfDependencies:(long long)arg1;
- (void)setViewGenerator:(id)arg1;
- (id)viewGenerator;

@end
