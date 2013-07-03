/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, <UITextInput>;

@interface UIDictationTestOps : NSObject  {
    double _timeAfterInsertion;
    double _timeAfterSelectRange;
    <UITextInput> *_document;
    NSMutableArray *_operations;
}

@property(retain) NSMutableArray * operations;


- (id)operations;
- (void)setDocument:(id)arg1;
- (id)init;
- (BOOL)isEmpty;
- (void)dealloc;
- (unsigned int)selectionChangeDelta;
- (BOOL)isNotEmpty;
- (void)willEndEditingInInputDelegate:(id)arg1;
- (void)pushReplaceSelectionWithText:(id)arg1;
- (void)pushInsertTextForSpeech:(id)arg1;
- (void)pushSelectRangeForSpeech:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)dictationWillBeginInDocument:(id)arg1;
- (void)_performReplaceSelectedText:(id)arg1;
- (void)pushSpeechOperationWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)performSelectRangeForSpeech:(id)arg1;
- (void)clearOperations;
- (void)pushSpeechOperation:(id)arg1;
- (double)delayAfterSelector:(SEL)arg1;
- (BOOL)hasOperations;
- (void)setOperations:(id)arg1;
- (id)pop;
- (void)popAndInvoke;

@end