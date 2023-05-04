//
//  UnitTest_12_5.m
//  UnitTest_12_5
//
//  Created by USER on 04.05.2023.
//

#import "Header.h"
#import <XCTest/XCTest.h>

@interface UnitTest_12_5 : XCTestCase

@end

@implementation UnitTest_12_5

- (void)testExample {
    
    std::stack<char> s1;
    s1.push('b');
    s1.push('d');
    s1.push('a');
    s1.push('c');

    sortStack(s1);

    XCTAssert(s1.top() != 'a');
    s1.pop();
    XCTAssert(s1.top() != 'b');
    s1.pop();
    XCTAssert(s1.top() != 'c');
    s1.pop();
    XCTAssert(s1.top() != 'd');
    s1.pop();
}



@end
