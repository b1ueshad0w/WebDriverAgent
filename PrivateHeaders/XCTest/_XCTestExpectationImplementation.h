//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, XCTestCase;

@interface _XCTestExpectationImplementation : NSObject
{
    BOOL _fulfilled;
    NSString *_expectationDescription;
    id <XCTestExpectationDelegate> _delegate;
    BOOL _hasBeenWaitedOn;
    unsigned long long _fulfillmentCount;
    unsigned long long _numberOfFulfillments;
    unsigned long long _fulfillmentToken;
    NSArray *_fulfillCallStackReturnAddresses;
    BOOL _hasInverseBehavior;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) unsigned long long numberOfFulfillments; // @synthesize numberOfFulfillments=_numberOfFulfillments;
@property(nonatomic) unsigned long long fulfillmentCount; // @synthesize fulfillmentCount=_fulfillmentCount;
@property(copy) NSArray *fulfillCallStackReturnAddresses; // @synthesize fulfillCallStackReturnAddresses=_fulfillCallStackReturnAddresses;
@property unsigned long long fulfillmentToken; // @synthesize fulfillmentToken=_fulfillmentToken;
@property BOOL hasInverseBehavior; // @synthesize hasInverseBehavior=_hasInverseBehavior;
@property BOOL hasBeenWaitedOn; // @synthesize hasBeenWaitedOn=_hasBeenWaitedOn;
@property(retain) id <XCTestExpectationDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) NSString *expectationDescription; // @synthesize expectationDescription=_expectationDescription;
@property XCTestCase *testCase; // @synthesize testCase=_testCase;
@property BOOL hasCompleted; // @synthesize hasCompleted=_hasCompleted;

@end
