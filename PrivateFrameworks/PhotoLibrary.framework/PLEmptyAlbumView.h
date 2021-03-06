/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSObject<PLAlbumProtocol>, NSString, UIImage, UIImageView, UILabel, UILongPressGestureRecognizer;

@interface PLEmptyAlbumView : UIView {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct NSObject { Class x1; } *_album;
    int _currentOrientation;
    } _edgeInsets;
    int _filter;
    BOOL _filterInUse;
    UIImage *_image;
    UIImageView *_imageView;
    BOOL _isCameraAlbum;
    BOOL _isSharedPhotoStreamList;
    UIImage *_landscapeImage;
    UILongPressGestureRecognizer *_longPressRecognizer;
    NSString *_message;
    UILabel *_messageLabel;
    NSString *_title;
    UILabel *_titleLabel;
    BOOL _useLargeImages;
}

@property(retain) NSObject<PLAlbumProtocol> * album;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;
@property int filter;

- (id)_emptyRollImageForAlbum:(struct NSObject { Class x1; }*)arg1 interfaceOrientation:(int)arg2;
- (void)_longPressGesture:(id)arg1;
- (id)_messageForAlbum:(struct NSObject { Class x1; }*)arg1;
- (id)_newLabelWithText:(id)arg1;
- (id)_newTextViewWithText:(id)arg1;
- (void)_sizeLabelToFitView:(id)arg1;
- (id)_titleForAlbum:(struct NSObject { Class x1; }*)arg1;
- (struct NSObject { Class x1; }*)album;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)dealloc;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (int)filter;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 useLargeImages:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)paste:(id)arg1;
- (void)setAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)setEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setFilter:(int)arg1;
- (void)setImage:(id)arg1;
- (void)setIsCameraAlbum:(BOOL)arg1;
- (void)setIsSharedPhotoStreamList:(BOOL)arg1;
- (void)setMessage:(id)arg1;
- (void)setPortraitImage:(id)arg1 landscapeImage:(id)arg2;
- (void)setTitle:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
