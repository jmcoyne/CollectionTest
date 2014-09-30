//
//  classCollectionViewController.h
//  CollectionTest
//
//  Created by Joan Coyne on 9/17/14.
//  Copyright (c) 2014 Mzinga. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "classCVCCell.h"
#import "classListHeaderCRV.h"

@interface classCollectionViewController : UICollectionViewController
<UICollectionViewDataSource, UICollectionViewDelegate>

@property (strong, nonatomic) NSMutableArray *randomImages;
@property (strong, nonatomic) NSDictionary *class;

@end
