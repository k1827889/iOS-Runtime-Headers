/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLXPCShMemData : NSData {
    void *_buffer;
    unsigned long _bufferLength;
    unsigned long _dataLength;
}

- (const void*)bytes;
- (void)dealloc;
- (id)description;
- (id)initWithXPCShmem:(id)arg1 length:(long long)arg2;
- (id)initWithXPCShmem:(id)arg1;
- (unsigned int)length;

@end
