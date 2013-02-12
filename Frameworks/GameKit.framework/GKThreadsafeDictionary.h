/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface GKThreadsafeDictionary : NSObject {
    NSMutableDictionary *_dictionary;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain) NSMutableDictionary * dictionary;

- (void)dealloc;
- (id)dictionary;
- (id)initWithName:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)readFromDictionary:(id)arg1;
- (void)removeAllObjects;
- (void)setDictionary:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)writeToDictionary:(id)arg1;

@end