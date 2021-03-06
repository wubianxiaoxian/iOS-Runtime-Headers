/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
 */

@interface IPFeatureData : IPFeature {
    NSMutableDictionary * _contextDictionary;
    unsigned int  _type;
    id  _value;
}

@property (readonly) NSMutableDictionary *contextDictionary;
@property unsigned int type;
@property (retain) id value;

+ (id)featureDataWithType:(unsigned int)arg1 value:(id)arg2 matchRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;

- (void).cxx_destruct;
- (id)contextDictionary;
- (id)description;
- (id)nGramMarker;
- (void)setType:(unsigned int)arg1;
- (void)setValue:(id)arg1;
- (unsigned int)type;
- (id)value;

@end
