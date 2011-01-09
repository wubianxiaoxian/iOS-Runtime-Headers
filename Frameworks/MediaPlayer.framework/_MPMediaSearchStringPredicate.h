/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSSet, NSString;



@interface _MPMediaSearchStringPredicate : MPMediaPredicate 
{
    NSString *_searchString;
    NSSet *_properties;
}

@property(copy) NSSet *properties;
@property(copy) NSString *searchString;

+ (id)predicateWithSearchString:(id)arg1 forProperties:(id)arg2;

- (void)setProperties:(id)arg1;
- (id)properties;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)_ML3PredicateForEntityClass:(Class)arg1;
- (id)ML3PredicateForTrack;
- (id)ML3PredicateForContainer;
- (id)searchString;
- (void)setSearchString:(id)arg1;

@end