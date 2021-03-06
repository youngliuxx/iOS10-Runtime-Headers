/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONavigationServerPeer : GEONavdPeer {
    GEONavigationServer * _delegate;
}

@property (nonatomic) GEONavigationServer *delegate;

- (void)dealloc;
- (id)delegate;
- (void)requestActiveRouteDetailsData;
- (void)requestGuidanceState;
- (void)requestRouteSummary;
- (void)requestStepIndex;
- (void)requestTransitSummary;
- (void)requestUpdates;
- (void)setDelegate:(id)arg1;

@end
