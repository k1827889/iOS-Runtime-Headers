/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class ADLayerHostWindow, ADSRVBannerView, ADStoryboardController, NSTimer, NSMutableArray, ADAlertView, <AdSheetSessionDelegate>, NSString, ADStoryboardTransitionWindow;

@interface ADSRVBannerController : NSObject <ADStoryboardTransitionWindowDelegate, AdSheetBannerViewDelegate, ADStoryboardControllerDelegate, ADCacheSubscriber> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGPoint { 
        float x; 
        float y; 
    struct dispatch_source_s { } *_adEventDispatchTimer;
    NSMutableArray *_adEventQueue;
    NSString *_authenticationUserName;
    } _bannerFrame;
    NSString *_bannerId;
    ADSRVBannerView *_bannerView;
    ADLayerHostWindow *_bannerViewWindow;
    } _clickLocation;
    int _clientViewControllerOrientation;
    double _createdAt;
    int _creativeType;
    ADAlertView *_currentAlertView;
    <AdSheetSessionDelegate> *_delegate;
    NSString *_fsExtensionToken;
    BOOL _isOpen;
    BOOL _isPrivilegedClient;
    BOOL _isWaitingToRequestDataLoad;
    id _remoteBannerController;
    int _reportedErrorCount;
    NSString *_serverURL;
    ADStoryboardController *_storyboard;
    ADStoryboardTransitionWindow *_storyboardWindow;
    NSTimer *_unloadStoryboardWatchdog;
    BOOL _userIsInStoryboard;
}

@property struct dispatch_source_s { }* adEventDispatchTimer;
@property(retain) NSMutableArray * adEventQueue;
@property(retain) NSString * authenticationUserName;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bannerFrame;
@property(retain) NSString * bannerId;
@property(retain) ADSRVBannerView * bannerView;
@property(retain) ADLayerHostWindow * bannerViewWindow;
@property(readonly) NSString * bundleId;
@property struct CGPoint { float x1; float x2; } clickLocation;
@property int clientViewControllerOrientation;
@property double createdAt;
@property int creativeType;
@property(retain) ADAlertView * currentAlertView;
@property <AdSheetSessionDelegate> * delegate;
@property(copy) NSString * fsExtensionToken;
@property(readonly) BOOL isBusy;
@property(readonly) BOOL isOpen;
@property BOOL isPrivilegedClient;
@property(readonly) BOOL isWaitingToRequestDataLoad;
@property(retain) id remoteBannerController;
@property int reportedErrorCount;
@property(retain) NSString * serverURL;
@property(retain) ADStoryboardController * storyboard;
@property(retain) ADStoryboardTransitionWindow * storyboardWindow;
@property(retain) NSTimer * unloadStoryboardWatchdog;
@property BOOL userIsInStoryboard;

- (void)_externalActionApproved:(BOOL)arg1;
- (void)_flushAdEventQueue;
- (void)_logSysEvent:(int)arg1 forAd:(id)arg2 sequence:(unsigned int)arg3 overclick:(unsigned int)arg4 clickLocation:(id)arg5;
- (void)_priv_loadDebugger:(id)arg1;
- (void)_priv_loadLocalAd:(id)arg1;
- (void)_remote_bannerBeginAction:(id)arg1;
- (void)_remote_bannerCancelBannerViewAction:(id)arg1;
- (void)_remote_bannerFrameDidChange:(id)arg1;
- (void)_remote_bannerKeysDidChange:(id)arg1;
- (void)_remote_bannerRefuseAction:(id)arg1;
- (void)_remote_bannerVisibilityHeartbeat:(id)arg1;
- (void)_remote_close:(id)arg1;
- (void)_remote_controllerKeysDidChange:(id)arg1;
- (void)_remote_interstitialPresentedInView:(id)arg1;
- (void)_remote_interstitialTouchDismiss:(id)arg1;
- (void)_remote_removedFromSuperview:(id)arg1;
- (void)_remote_updateSpecification:(id)arg1;
- (struct dispatch_source_s { }*)adEventDispatchTimer;
- (id)adEventQueue;
- (void)applicationMenuButtonUp:(id)arg1;
- (id)authenticationUserName;
- (void)authoredTransitionInComplete;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bannerFrame;
- (id)bannerId;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)bannerView:(id)arg1 shouldLogClickForAd:(id)arg2 impressionSequence:(unsigned int)arg3 overclickCount:(unsigned int)arg4;
- (void)bannerView:(id)arg1 shouldLogImpressionForAd:(id)arg2 impressionSequence:(unsigned int)arg3;
- (id)bannerView;
- (void)bannerViewDidCancelDataLoad:(id)arg1;
- (void)bannerViewDidLoadAd:(id)arg1;
- (void)bannerViewDidRequestDataLoad:(id)arg1;
- (int)bannerViewRequestsHostInterfaceOrientation:(id)arg1;
- (id)bannerViewWindow;
- (id)bundleId;
- (void)cacheFailedToLoadBanner:(id)arg1 withError:(id)arg2;
- (void)cacheLoadedBannerData:(id)arg1;
- (void)cacheWillLoadBannerData;
- (struct CGPoint { float x1; float x2; })clickLocation;
- (void)clientApplicationDidEnterBackground;
- (void)clientApplicationWillEnterForeground;
- (int)clientViewControllerOrientation;
- (void)close;
- (double)createdAt;
- (int)creativeType;
- (id)currentAlertView;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)dismissStoryboardWithDelay:(BOOL)arg1;
- (id)fsExtensionToken;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hostBannerRectCorrectedForInterfaceOrientation:(BOOL)arg1;
- (int)hostInterfaceOrientation;
- (id)init;
- (void)interstitialView:(id)arg1 shouldLogSystemEvent:(int)arg2 forAd:(id)arg3 impressionSequence:(unsigned int)arg4 overclickCount:(unsigned int)arg5;
- (void)interstitialViewExpiredAndWasUnloaded:(id)arg1;
- (BOOL)isBusy;
- (BOOL)isInWindow;
- (BOOL)isOpen;
- (BOOL)isPrivilegedClient;
- (BOOL)isVisible;
- (BOOL)isWaitingToRequestDataLoad;
- (BOOL)loadStoryboardController;
- (void)loadStoryboardWindow;
- (void)open;
- (id)proxyItemIdentifier;
- (void)readyForAuthoredTransitionIn;
- (id)remoteBannerController;
- (void)reportActionableDuration:(double)arg1 withMetadata:(id)arg2;
- (void)reportContentErrorForAd:(id)arg1 withInfo:(id)arg2;
- (int)reportedErrorCount;
- (id)serverURL;
- (void)setAdEventDispatchTimer:(struct dispatch_source_s { }*)arg1;
- (void)setAdEventQueue:(id)arg1;
- (void)setAuthenticationUserName:(id)arg1;
- (void)setBannerFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBannerId:(id)arg1;
- (void)setBannerView:(id)arg1;
- (void)setBannerViewWindow:(id)arg1;
- (void)setClickLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)setClientViewControllerOrientation:(int)arg1;
- (void)setCreatedAt:(double)arg1;
- (void)setCreativeType:(int)arg1;
- (void)setCurrentAlertView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFsExtensionToken:(id)arg1;
- (void)setIsPrivilegedClient:(BOOL)arg1;
- (void)setRemoteBannerController:(id)arg1;
- (void)setReportedErrorCount:(int)arg1;
- (void)setServerURL:(id)arg1;
- (void)setStoryboard:(id)arg1;
- (void)setStoryboardWindow:(id)arg1;
- (void)setUnloadStoryboardWatchdog:(id)arg1;
- (void)setUserIsInStoryboard:(BOOL)arg1;
- (void)storyboard:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)storyboard:(id)arg1 didReportContentEventWithMessage:(id)arg2;
- (void)storyboard:(id)arg1 didReportSystemEventWithType:(int)arg2;
- (id)storyboard;
- (void)storyboardContentRequestsGeolocation:(id)arg1 approval:(id)arg2;
- (void)storyboardContentSignalsReady:(id)arg1;
- (void)storyboardDidChangeSupportedOrientations:(id)arg1;
- (void)storyboardDidFinishFirstSignificantDraw:(id)arg1;
- (id)storyboardHumanReadableContentName:(id)arg1;
- (void)storyboardRequestsOpenURL:(id)arg1;
- (void)storyboardShouldDismiss:(id)arg1;
- (id)storyboardWindow;
- (double)timeRemaining;
- (void)transitionFromAdDidFinish;
- (void)transitionFromAdWillBegin;
- (void)transitionToAdDidFinish;
- (void)transitionToAdWillBegin;
- (id)uniqueIdentifier;
- (id)unloadStoryboardWatchdog;
- (void)unloadStoryboardWindow;
- (BOOL)userIsInStoryboard;

@end