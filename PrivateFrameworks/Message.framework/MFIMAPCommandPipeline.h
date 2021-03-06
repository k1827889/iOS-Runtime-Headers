/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@class NSMutableArray;

@interface MFIMAPCommandPipeline : NSObject {
    unsigned int _full : 1;
    unsigned int _sending : 1;
    unsigned int _chunkSize;
    unsigned int _expectedSize;
    NSMutableArray *_fetchUnits;
}

- (void)_removeFetchUnitMatchingResponse:(id)arg1;
- (void)addFetchCommandForUid:(unsigned long)arg1 fetchItem:(id)arg2 expectedLength:(unsigned int)arg3 bodyDataConsumer:(id)arg4 consumerSection:(id)arg5;
- (unsigned int)chunkSize;
- (void)dealloc;
- (unsigned int)expectedSize;
- (id)failureResponsesFromSendingCommandsWithConnection:(id)arg1;
- (BOOL)isFull;
- (BOOL)isSending;
- (void)setChunkSize:(unsigned int)arg1;
- (void)setFull:(BOOL)arg1;

@end
