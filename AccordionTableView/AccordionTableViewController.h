//
//  AccordionTableViewController.h
//  AccordionTableView
//
//  Created by Naveen Kumar on 3/29/13.
//  Copyright (c) 2013 Naveen Kumar. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AccordionTableViewController : UITableViewController {
    NSArray *topItems;
    NSMutableArray *subItems; // array of arrays
    
    long currentExpandedIndex;
}

@end
