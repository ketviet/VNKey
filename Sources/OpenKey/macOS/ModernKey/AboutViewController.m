//
//  AboutViewController.m
//  VNKey — KétViệt (ketviet.vn)
//

#import "AboutViewController.h"
#import "OpenKeyManager.h"
#import "VNKeyBranding.h"

@interface AboutViewController ()

@end

@implementation AboutViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.VersionInfo.stringValue = [NSString stringWithFormat:@"Phiên bản %@ (build %@) — KétViệt · Ngày build %@",
                                    [[NSBundle mainBundle] objectForInfoDictionaryKey: @"CFBundleShortVersionString"],
                                    [[NSBundle mainBundle] objectForInfoDictionaryKey: @"CFBundleVersion"],
                                    [OpenKeyManager getBuildDate]] ;
    
    NSInteger dontCheckUpdate = [[NSUserDefaults standardUserDefaults] integerForKey:@"DontCheckUpdate"];
    self.CheckUpdateOnStatus.state = dontCheckUpdate ? NSControlStateValueOff :NSControlStateValueOn;
}

- (IBAction)onHomePage:(id)sender {
    [[NSWorkspace sharedWorkspace] openURL: [NSURL URLWithString:VNKEY_HOMEPAGE_URL]];
}

- (IBAction)onFanPage:(id)sender {
    [[NSWorkspace sharedWorkspace] openURL: [NSURL URLWithString:VNKEY_HOMEPAGE_URL]];
}

- (IBAction)onLatestReleaseVersion:(id)sender {
    [[NSWorkspace sharedWorkspace] openURL: [NSURL URLWithString:VNKEY_HOMEPAGE_URL]];
}

- (IBAction)onCheckUpdateOnStartup:(NSButton *)sender {
    NSInteger val = sender.state == NSControlStateValueOn ? 0 : 1;
    [[NSUserDefaults standardUserDefaults] setInteger:val forKey:@"DontCheckUpdate"];
}

- (IBAction)onCheckNewVersion:(id)sender {
    
    self.CheckNewVersionButton.title = @"Đang kiểm tra...";
    self.CheckNewVersionButton.enabled = false;
    
    [OpenKeyManager checkNewVersion: self.view.window callbackFunc:^{
        self.CheckNewVersionButton.enabled = true;
        self.CheckNewVersionButton.title = @"Kiểm tra bản mới...";
    }];
}

@end
