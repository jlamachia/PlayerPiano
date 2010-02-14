//
//  PlayerPianoAppDelegate.h
//  PlayerPiano
//
//  Created by Steve Streza on 2/13/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "PPPianobarController.h"

@interface PlayerPianoAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
	
	PPPianobarController *pianobar;
	
	IBOutlet NSArrayController *stationController;
}

@property (assign) IBOutlet NSWindow *window;

-(IBAction)thumbsUpCurrentSong:(id)sender;
-(IBAction)thumbsDownCurrentSong:(id)sender;
-(IBAction)playPauseCurrentSong:(id)sender;
-(IBAction)playNextSong:(id)sender;

@end
