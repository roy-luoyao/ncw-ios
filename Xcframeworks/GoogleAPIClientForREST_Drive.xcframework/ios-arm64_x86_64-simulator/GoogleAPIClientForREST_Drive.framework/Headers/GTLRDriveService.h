// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Drive API (drive/v3)
// Description:
//   The Google Drive API allows clients to access resources from Google Drive.
// Documentation:
//   https://developers.google.com/drive/

#import <GoogleAPIClientForREST_Drive/GTLRService.h>

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Authorization scopes

/**
 *  Authorization scope: See, edit, create, and delete all of your Google Drive
 *  files
 *
 *  Value "https://www.googleapis.com/auth/drive"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeDrive;
/**
 *  Authorization scope: See, create, and delete its own configuration data in
 *  your Google Drive
 *
 *  Value "https://www.googleapis.com/auth/drive.appdata"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeDriveAppdata;
/**
 *  Authorization scope: View your Google Drive apps
 *
 *  Value "https://www.googleapis.com/auth/drive.apps.readonly"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeDriveAppsReadonly;
/**
 *  Authorization scope: See, edit, create, and delete only the specific Google
 *  Drive files you use with this app
 *
 *  Value "https://www.googleapis.com/auth/drive.file"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeDriveFile;
/**
 *  Authorization scope: See and download your Google Drive files that were
 *  created or edited by Google Meet.
 *
 *  Value "https://www.googleapis.com/auth/drive.meet.readonly"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeDriveMeetReadonly;
/**
 *  Authorization scope: View and manage metadata of files in your Google Drive
 *
 *  Value "https://www.googleapis.com/auth/drive.metadata"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeDriveMetadata;
/**
 *  Authorization scope: See information about your Google Drive files
 *
 *  Value "https://www.googleapis.com/auth/drive.metadata.readonly"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeDriveMetadataReadonly;
/**
 *  Authorization scope: View the photos, videos and albums in your Google
 *  Photos
 *
 *  Value "https://www.googleapis.com/auth/drive.photos.readonly"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeDrivePhotosReadonly;
/**
 *  Authorization scope: See and download all your Google Drive files
 *
 *  Value "https://www.googleapis.com/auth/drive.readonly"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeDriveReadonly;
/**
 *  Authorization scope: Modify your Google Apps Script scripts' behavior
 *
 *  Value "https://www.googleapis.com/auth/drive.scripts"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeDriveScripts;

// ----------------------------------------------------------------------------
//   GTLRDriveService
//

/**
 *  Service for executing Google Drive API queries.
 *
 *  The Google Drive API allows clients to access resources from Google Drive.
 */
@interface GTLRDriveService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRDriveQuery.h. The query can the be sent with GTLRService's execute
// methods,
//
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                     completionHandler:(void (^)(GTLRServiceTicket *ticket,
//                                                 id object, NSError *error))handler;
// or
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                              delegate:(id)delegate
//                     didFinishSelector:(SEL)finishedSelector;
//
// where finishedSelector has a signature of:
//
//   - (void)serviceTicket:(GTLRServiceTicket *)ticket
//      finishedWithObject:(id)object
//                   error:(NSError *)error;
//
// The object passed to the completion handler or delegate method
// is a subclass of GTLRObject, determined by the query method executed.

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
