//
//  MoreController.h
//  newsyc
//
//  Created by Grant Paul on 3/9/11.
//  Copyright 2011 Xuzz Productions, LLC. All rights reserved.
//

#import "OrangeTableView.h"

@interface MoreController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    HNSession *session;
    
    OrangeTableView *tableView;
}

- (id)initWithSession:(HNSession *)session_;

@end
