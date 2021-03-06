/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIColor, UIImage;

@interface ABTransportButton : UIButton {
    UIColor *_glyphColor;
    UIImage *_image;
    int _transportType;
}

@property(retain) UIColor * glyphColor;
@property(retain) UIImage * image;
@property int transportType;

+ (id)transportButton;

- (void)_updateImageWithType:(int)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })backgroundRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)glyphColor;
- (id)image;
- (id)imageNameForType:(int)arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)setGlyphColor:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setTransportType:(int)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)tintColorDidChange;
- (int)transportType;

@end
