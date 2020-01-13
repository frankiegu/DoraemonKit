//
//  DoraemonHealthManager.h
//  AFNetworking
//
//  Created by didi on 2020/1/2.
//

#import <Foundation/Foundation.h>
#import "DoraemonNetFlowHttpModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface DoraemonHealthManager : NSObject

+ (instancetype)sharedInstance;

@property (nonatomic, assign) BOOL start;
@property (nonatomic, assign) BOOL alert;

- (void)startHealthCheck;

- (void)stopHealthCheck;

- (void)startEnterPage:(Class)vcClass;

- (void)enterPage:(Class)vcClass;

- (void)leavePage:(Class)vcClass;

- (void)addHttpModel:(DoraemonNetFlowHttpModel *)httpModel;

- (void)addANRInfo:(NSDictionary *)anrInfo;

- (void)addSubThreadUI:(NSDictionary *)info;

- (void)addUILevel:(NSDictionary *)info;

- (void)addLeak:(NSDictionary *)info;

//检测结果
@property (nonatomic, assign) CGFloat startTime;//本次启动时间
@property (nonatomic, copy) NSString *costDetail;//启动流程耗时详情

@end

NS_ASSUME_NONNULL_END