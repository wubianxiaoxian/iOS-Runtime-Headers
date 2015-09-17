/* Generated by RuntimeBrowser.
 */

@protocol PHUpdateChangeRequest <PHChangeRequest>

@required

- (BOOL)allowMutationToManagedObject:(NSManagedObject *)arg1 propertyKey:(NSString *)arg2 error:(id*)arg3;
- (BOOL)applyMutationsToManagedObject:(NSManagedObject *)arg1 error:(id*)arg2;
- (BOOL)isMutated;
- (BOOL)validateMutationsToManagedObject:(NSManagedObject *)arg1 error:(id*)arg2;

@end