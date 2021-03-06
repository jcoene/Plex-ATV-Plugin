//
//  PlexTopShelfController.h
//  plex
//
//  Created by tomcool
//  Modified by ccjensen
//

#import <Foundation/Foundation.h>
@class PlexMediaContainer;

@interface PlexTopShelfController : NSObject {
	BRTopShelfView *topShelfView;
    BRMediaShelfView *shelfView;
    int shelfItemCount;
}
@property (copy) NSString *containerName;
@property (retain) PlexMediaContainer *onDeckMediaContainer;
@property (retain) PlexMediaContainer *recentlyAddedMediaContainer;

- (void)selectCategoryWithIdentifier:(id)identifier;
- (id)topShelfView;
- (void)refresh;

- (void)setContentToContainer:(PlexMediaContainer *)aMediaContainer;
@end