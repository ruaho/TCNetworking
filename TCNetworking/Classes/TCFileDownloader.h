//
//  TCFileDownloader.h
//  TCNetworking
//
//  Created by 陈 胜 on 16/5/23.
//  Copyright © 2016年 陈胜. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCBaseAPIClient.h"

typedef void (^TCDownloadProgressBlock)(NSUInteger total, NSUInteger completed);
typedef NSURL *(^TCDownloadDestinationBlock)(NSURL *targetPath, NSURLResponse *response);
typedef void (^TCDownloadSuccessBlock)(NSURLResponse *response, NSURL *filePath);
typedef void (^TCDownloadFailureBlock)(NSURLResponse *response, NSError *error);
typedef void (^TCDownloadCancelBlock)();

@interface TCFileDownloader : NSObject

/**
 *  文件下载
 *
 *  @param URLString   文件路径，全路径
 *  @param progress    下载进度
 *  @param destination 存储路径
 *  @param success     成功回调
 *  @param failure     失败回调
 *  @param client      TCBaseAPIClient
 *
 *  @return NSURLSessionDownloadTask
 */
+ (NSURLSessionDownloadTask *)downloadFile:(NSString *)URLString
                                  progress:(TCDownloadProgressBlock)progress
                               destination:(TCDownloadDestinationBlock)destination
                                   success:(TCDownloadSuccessBlock)success
                                   failure:(TCDownloadFailureBlock)failure
                                 useClient:(TCBaseAPIClient *)client;

/**
 *  文件下载
 *
 *  @param URLString   文件路径，全路径
 *  @param progress    下载进度
 *  @param success     成功回调
 *  @param failure     失败回调
 *  @param client      TCBaseAPIClient
 *
 *  @return NSURLSessionDownloadTask
 */
+ (NSURLSessionDownloadTask *)downloadFile:(NSString *)URLString
                                  progress:(TCDownloadProgressBlock)progress
                                   success:(TCDownloadSuccessBlock)success
                                   failure:(TCDownloadFailureBlock)failure
                                 useClient:(TCBaseAPIClient *)client;

@end
