/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPreheatItem : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    int _bestFormat;
    int _format;
    BOOL _heated;
    int _imageType;
    } _optimalSourcePixelSize;
    int _prefetchCount;
}

@property int bestFormat;
@property(readonly) int format;
@property BOOL heated;
@property(readonly) int imageType;
@property(readonly) struct CGSize { float x1; float x2; } optimalSourcePixelSize;

- (BOOL)addImageHandler:(id)arg1;
- (int)bestFormat;
- (id)cachedImage:(BOOL*)arg1;
- (id)cachedImageIfAvailable:(BOOL*)arg1;
- (void)cancelPreheatRequest;
- (int)decrementPrefetchCount;
- (int)format;
- (BOOL)hasPrefetchCount;
- (BOOL)heated;
- (int)imageType;
- (int)incrementPrefetchCount;
- (BOOL)isCancelled;
- (struct CGSize { float x1; float x2; })optimalSourcePixelSize;
- (void)resetPrefetchCount;
- (void)setBestFormat:(int)arg1;
- (void)setHeated:(BOOL)arg1;
- (void)startPreheatRequestWithCompletionHandler:(id)arg1;

@end
