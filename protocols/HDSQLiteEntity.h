/* Generated by RuntimeBrowser.
 */

@protocol HDSQLiteEntity <NSObject>

@required

+ (void)applyPropertySetters:(NSDictionary *)arg1 toObject:(id)arg2 withProperties:(NSArray *)arg3 values:(id*)arg4;
+ (NSString *)associationPropertyForEntityClass:(Class)arg1;
+ (NSMutableDictionary *)copyDatabaseDictionaryToSetClientDictionary:(NSDictionary *)arg1;
+ (NSString *)databaseName;
+ (NSString *)databasePropertyToGetClientProperty:(NSString *)arg1;
+ (NSString *)databasePropertyToSetClientProperty:(NSString *)arg1;
+ (NSString *)databaseTable;
+ (id)databaseValueForProperty:(NSString *)arg1 clientValue:(id)arg2;
+ (HDSQLiteStatement *)deleteStatementWithProperty:(NSString *)arg1 database:(HDSQLiteDatabase *)arg2;
+ (NSString *)disambiguatedDatabaseTable;
+ (NSString *)disambiguatedSQLForProperty:(NSString *)arg1;
+ (NSString *)foreignDatabaseColumnForProperty:(NSString *)arg1;
+ (NSString *)foreignDatabaseTableForProperty:(NSString *)arg1;
+ (NSSet *)foreignDatabaseTablesToDelete;
+ (NSString *)foreignKeyColumnForTable:(NSString *)arg1;
+ (NSString *)joinClauseForProperty:(NSString *)arg1;

- (BOOL)deleteFromDatabase:(HDSQLiteDatabase *)arg1;
- (BOOL)deleteFromDatabase:(HDSQLiteDatabase *)arg1 error:(id*)arg2;
- (BOOL)getValues:(id*)arg1 forProperties:(id*)arg2 count:(unsigned int)arg3 database:(HDSQLiteDatabase *)arg4;
- (BOOL)getValuesForProperties:(void *)arg1 withDatabase:(void *)arg2 applier:(void *)arg3; // needs 3 arg types, found 8: NSArray *, HDSQLiteDatabase *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, id*
- (void)setExternalValuesWithDictionary:(NSDictionary *)arg1;
- (BOOL)setValue:(id)arg1 forProperty:(NSString *)arg2 database:(HDSQLiteDatabase *)arg3;
- (BOOL)setValuesWithDictionary:(NSDictionary *)arg1 database:(HDSQLiteDatabase *)arg2;
- (id)valueForExternalProperty:(NSString *)arg1;
- (id)valueForProperty:(NSString *)arg1 database:(HDSQLiteDatabase *)arg2;

@optional

+ (NSString *)columnNameForSortIdentifier:(NSString *)arg1;

@end
