/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSOperationQueue;

@interface TSKDocumentRootICloudObserver : NSObject {
    id _block;
    long long _identifer;
    long long _identifier;
    NSOperationQueue *_operationQueue;
}

@property(readonly) long long identifer;

- (void)dealloc;
- (long long)identifer;
- (id)initWithBlock:(id)arg1;
- (void)invokeWithDocumentRoot:(id)arg1;

@end
