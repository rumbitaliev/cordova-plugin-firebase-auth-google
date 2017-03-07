#import <Foundation/Foundation.h>
#import <Cordova/CDV.h>
#import <GoogleSignIn/GoogleSignIn.h>

@interface FirebaseAuthPlugin : CDVPlugin <GIDSignInDelegate, GIDSignInUIDelegate>

- (void)initialize:(CDVInvokedUrlCommand *)command;
- (void)signIn:(CDVInvokedUrlCommand *)command;
- (void)signOut:(CDVInvokedUrlCommand *)command;
- (void)getToken:(CDVInvokedUrlCommand *)command;
- (void)signInWithCustomToken:(CDVInvokedUrlCommand *)command;
@property (nonatomic) NSString *eventCallbackId;
@property (strong, nonatomic) NSArray *allowedDomains;
@end
