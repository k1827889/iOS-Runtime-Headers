/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSMutableArray, NSString;

@interface NSISObjectiveLinearExpression : NSObject <NSISRowBody> {
    struct __CFData { } *_constant;
    struct __CFDictionary { } *_priorityMap;
    NSMutableArray *_variablesSortedByPriorityVectors;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void)addExpression:(id)arg1 priority:(float)arg2 times:(double)arg3 processVariableNewToReceiver:(id)arg4 processVariableDroppedFromReceiver:(id)arg5;
- (void)addVariable:(id)arg1 priority:(float)arg2 times:(double)arg3 processVariableNewToReceiver:(id)arg4 processVariableDroppedFromReceiver:(id)arg5;
- (void)addVariable:(id)arg1 priority:(float)arg2 times:(double)arg3;
- (BOOL)constantTermIsZero;
- (void)dealloc;
- (id)description;
- (void)enumerateVariables:(id)arg1;
- (void)incrementConstantWithPriority:(float)arg1 value:(double)arg2;
- (void)incrementConstantWithPriorityVector:(struct __CFData { }*)arg1 timesScalarCoefficient:(double)arg2;
- (id)init;
- (id)initWithLinearExpression:(id)arg1 priority:(float)arg2;
- (void)leadingPriority:(float*)arg1 andValue:(double*)arg2 forVariable:(id)arg3;
- (struct __CFData { }*)priorityVectorForVariable:(id)arg1;
- (void)removeVariable:(id)arg1;
- (void)replaceVariable:(id)arg1 withExpression:(id)arg2 processVariableNewToReceiver:(id)arg3 processVariableDroppedFromReceiver:(id)arg4;
- (void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2 timesVariable:(id)arg3 processVariableNewToReceiver:(id)arg4 processVariableDroppedFromReceiver:(id)arg5;
- (void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2;
- (id)restrictedVariableWithCoefficientOfLargestNegativeMagnitude;
- (void)setPriorityVector:(struct __CFData { }*)arg1 forKnownAbsentVariable:(id)arg2;
- (unsigned int)variableCount;
- (void)verifyInternalIntegrity;

@end
