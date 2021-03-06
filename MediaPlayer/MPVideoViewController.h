/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPViewController.h"
#import "MPSwipableViewDelegate.h"
#import "UIModalViewDelegate.h"
#import "MPVideoTransferViewController.h"

@class UIColor, MPTVOutWindow, MPVideoBackgroundView, MPSwipableView, MPVideoView, UIView, UIProgressIndicator, UIAlertView;

@interface MPVideoViewController : MPViewController <MPSwipableViewDelegate, MPVideoTransferViewController, UIModalViewDelegate> {
	MPVideoBackgroundView* _backgroundView;
	MPSwipableView* _backstopView;
	unsigned _desiredParts;
	unsigned _disabledParts;
	unsigned _visibleParts;
	unsigned _tvOutEnabled : 1;
	unsigned _itemTypeOverride;
@private
	UIAlertView* _alertSheet;
	UIColor* _backstopColor;
	UIProgressIndicator* _loadingIndicator;
	MPTVOutWindow* _tvOutWindow;
	unsigned _scaleMode;
	unsigned _canAnimateControlsOverlay : 1;
	unsigned _canShowControlsOverlay : 1;
	unsigned _disableControlsAutohide : 1;
	unsigned _ownsStatusBar : 1;
	unsigned _ownsVideoView : 1;
	unsigned _playAfterPop : 1;
	unsigned _scheduledLoadingIndicator : 1;
	unsigned _displayPlaybackErrorAlerts : 1;
	unsigned _allowsDetailScrubbing : 1;
	unsigned _attemptAutoPlayWhenControlsHidden : 1;
	unsigned _alwaysAllowHidingControlsOverlay : 1;
}
@property(assign, nonatomic) unsigned desiredParts;
@property(assign, nonatomic) unsigned disabledParts;
@property(assign, nonatomic) unsigned scaleMode;
@property(assign, nonatomic) unsigned visibleParts;
@property(retain, nonatomic) UIColor* backstopColor;
@property(assign, nonatomic) unsigned itemTypeOverride;
@property(readonly, assign, nonatomic) UIView* backgroundView;
@property(readonly, assign, nonatomic) BOOL canShowQTAudioOnlyUI;
@property(assign, nonatomic) BOOL alwaysAllowHidingControlsOverlay;
@property(assign, nonatomic) BOOL controlsOverlayVisible;
@property(assign, nonatomic) BOOL disableControlsAutohide;
@property(assign, nonatomic) BOOL canShowControlsOverlay;
@property(assign, nonatomic) BOOL canAnimateControlsOverlay;
@property(readonly, assign, nonatomic) UIView* posterImageView;
@property(readonly, assign, nonatomic) BOOL usePosterForTVOut;
@property(assign, nonatomic, getter=isFullscreen) BOOL fullscreen;
@property(assign, nonatomic) BOOL attemptAutoPlayWhenControlsHidden;
@property(assign, nonatomic) BOOL allowsDetailScrubbing;
@property(assign, nonatomic) BOOL displayPlaybackErrorAlerts;
@property(readonly, assign, nonatomic) BOOL viewControllerWillRequestExit;
@property(readonly, retain, nonatomic) MPVideoView* videoView;
@property(assign, nonatomic) BOOL TVOutEnabled;
@property(assign, nonatomic) BOOL ownsStatusBar;
@property(readonly, assign, nonatomic) BOOL canChangeScaleMode;
+(BOOL)isPlayingToTVOut;
+(CGRect)calculatePosterImageViewFrameInRect:(CGRect)rect;
+(id)sharedVideoView:(BOOL)view;
-(id)init;
-(void)dealloc;
-(void)showAlternateTracksController:(id)controller;
-(void)showChaptersControllerAndFadeViews:(id)views;
-(void)showChaptersController;
-(void)_updateIdleTimerDisabledFromPlaybackState:(unsigned)playbackState;
-(void)updateForItemAttributeChanges;
-(void)reloadPosterImageView;
-(CGRect)calculatePosterImageViewFrame;
-(void)_updateAlwaysPlayWheneverPossible;
-(void)setItem:(id)item;
-(void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;
-(void)setScaleMode:(unsigned)mode animated:(BOOL)animated;
-(void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;
-(void)toggleScaleMode:(BOOL)mode;
-(void)setControlsNeedLayout;
-(void)loadView;
-(void)noteIgnoredChangeTypes:(unsigned)types;
-(void)removeChildViewController:(id)controller;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)setFullscreen:(BOOL)fullscreen animated:(BOOL)animated;
-(void)chapterList:(id)list selectedChapter:(unsigned)chapter;
-(void)chapterListDidDisappear:(id)chapterList;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)_videoView_applicationSuspendedNotification:(id)notification;
-(void)_videoView_playbackErrorNotification:(id)notification;
-(void)_exitPlayerForPlaybackError;
-(void)_videoView_playbackStateChangedNotification:(id)notification;
-(void)_videoVideo_batteryStateDidChangeNotification:(id)_videoVideo_batteryState;
-(void)_videoView_resumeEventsOnlyNotification:(id)notification;
-(void)_videoView_scaleModeChangedNotification:(id)notification;
-(void)_videoView_effectiveScaleModeChangedNotification:(id)notification;
-(void)_videoView_validityChangedNotification:(id)notification;
-(void)_videoView_sizeChangedNotification:(id)notification;
-(void)_videoView_timedImageMetadataAvailableNotification:(id)notification;
-(void)_delayedUpdateBackgroundView;
-(void)_updateBackgroundView:(BOOL)view;
-(void)_hideLoadingForStateChange:(id)stateChange;
-(void)_popForTimeJump:(id)timeJump;
-(void)_screenDidConnect:(id)_screen;
-(void)_screenDidDisconnect:(id)_screen;
-(void)_itemDurationDidChange:(id)_itemDuration;
-(void)_delayedPopForTimeJump;
-(void)_delayedShowLoading;
-(void)_orderOutTVOutWindow;
-(void)displayVideoView;
-(void)displayVideoViewOnScreen;
-(void)displayVideoViewOnTV;
-(void)handleScaleModeChange;
-(void)_showStillFrameIfNotAlreadyPlaying;
-(void)_scheduleLoadingIndicatorIfNeeded;
-(void)setControlsOverlayVisible:(BOOL)visible animate:(BOOL)animate;
-(void)setOwnsVideoView:(BOOL)view;
-(id)newAlternateTracksTransition;
-(id)createChapterFlipTransition;
-(void)backgroundViewDidUpdate;
-(void)_hideLoadingIndicator;
-(void)_updateProgressControlForItem:(id)item;
@end

