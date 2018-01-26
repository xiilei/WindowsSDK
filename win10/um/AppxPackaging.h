

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __appxpackaging_h__
#define __appxpackaging_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IAppxFactory_FWD_DEFINED__
#define __IAppxFactory_FWD_DEFINED__
typedef interface IAppxFactory IAppxFactory;

#endif 	/* __IAppxFactory_FWD_DEFINED__ */


#ifndef __IAppxFactory2_FWD_DEFINED__
#define __IAppxFactory2_FWD_DEFINED__
typedef interface IAppxFactory2 IAppxFactory2;

#endif 	/* __IAppxFactory2_FWD_DEFINED__ */


#ifndef __IAppxPackageReader_FWD_DEFINED__
#define __IAppxPackageReader_FWD_DEFINED__
typedef interface IAppxPackageReader IAppxPackageReader;

#endif 	/* __IAppxPackageReader_FWD_DEFINED__ */


#ifndef __IAppxPackageReader2_FWD_DEFINED__
#define __IAppxPackageReader2_FWD_DEFINED__
typedef interface IAppxPackageReader2 IAppxPackageReader2;

#endif 	/* __IAppxPackageReader2_FWD_DEFINED__ */


#ifndef __IAppxPackageWriter_FWD_DEFINED__
#define __IAppxPackageWriter_FWD_DEFINED__
typedef interface IAppxPackageWriter IAppxPackageWriter;

#endif 	/* __IAppxPackageWriter_FWD_DEFINED__ */


#ifndef __IAppxPackageWriter2_FWD_DEFINED__
#define __IAppxPackageWriter2_FWD_DEFINED__
typedef interface IAppxPackageWriter2 IAppxPackageWriter2;

#endif 	/* __IAppxPackageWriter2_FWD_DEFINED__ */


#ifndef __IAppxPackageWriter3_FWD_DEFINED__
#define __IAppxPackageWriter3_FWD_DEFINED__
typedef interface IAppxPackageWriter3 IAppxPackageWriter3;

#endif 	/* __IAppxPackageWriter3_FWD_DEFINED__ */


#ifndef __IAppxFile_FWD_DEFINED__
#define __IAppxFile_FWD_DEFINED__
typedef interface IAppxFile IAppxFile;

#endif 	/* __IAppxFile_FWD_DEFINED__ */


#ifndef __IAppxFilesEnumerator_FWD_DEFINED__
#define __IAppxFilesEnumerator_FWD_DEFINED__
typedef interface IAppxFilesEnumerator IAppxFilesEnumerator;

#endif 	/* __IAppxFilesEnumerator_FWD_DEFINED__ */


#ifndef __IAppxBlockMapReader_FWD_DEFINED__
#define __IAppxBlockMapReader_FWD_DEFINED__
typedef interface IAppxBlockMapReader IAppxBlockMapReader;

#endif 	/* __IAppxBlockMapReader_FWD_DEFINED__ */


#ifndef __IAppxBlockMapFile_FWD_DEFINED__
#define __IAppxBlockMapFile_FWD_DEFINED__
typedef interface IAppxBlockMapFile IAppxBlockMapFile;

#endif 	/* __IAppxBlockMapFile_FWD_DEFINED__ */


#ifndef __IAppxBlockMapFilesEnumerator_FWD_DEFINED__
#define __IAppxBlockMapFilesEnumerator_FWD_DEFINED__
typedef interface IAppxBlockMapFilesEnumerator IAppxBlockMapFilesEnumerator;

#endif 	/* __IAppxBlockMapFilesEnumerator_FWD_DEFINED__ */


#ifndef __IAppxBlockMapBlock_FWD_DEFINED__
#define __IAppxBlockMapBlock_FWD_DEFINED__
typedef interface IAppxBlockMapBlock IAppxBlockMapBlock;

#endif 	/* __IAppxBlockMapBlock_FWD_DEFINED__ */


#ifndef __IAppxBlockMapBlocksEnumerator_FWD_DEFINED__
#define __IAppxBlockMapBlocksEnumerator_FWD_DEFINED__
typedef interface IAppxBlockMapBlocksEnumerator IAppxBlockMapBlocksEnumerator;

#endif 	/* __IAppxBlockMapBlocksEnumerator_FWD_DEFINED__ */


#ifndef __IAppxManifestReader_FWD_DEFINED__
#define __IAppxManifestReader_FWD_DEFINED__
typedef interface IAppxManifestReader IAppxManifestReader;

#endif 	/* __IAppxManifestReader_FWD_DEFINED__ */


#ifndef __IAppxManifestReader2_FWD_DEFINED__
#define __IAppxManifestReader2_FWD_DEFINED__
typedef interface IAppxManifestReader2 IAppxManifestReader2;

#endif 	/* __IAppxManifestReader2_FWD_DEFINED__ */


#ifndef __IAppxManifestReader3_FWD_DEFINED__
#define __IAppxManifestReader3_FWD_DEFINED__
typedef interface IAppxManifestReader3 IAppxManifestReader3;

#endif 	/* __IAppxManifestReader3_FWD_DEFINED__ */


#ifndef __IAppxManifestReader4_FWD_DEFINED__
#define __IAppxManifestReader4_FWD_DEFINED__
typedef interface IAppxManifestReader4 IAppxManifestReader4;

#endif 	/* __IAppxManifestReader4_FWD_DEFINED__ */


#ifndef __IAppxManifestReader5_FWD_DEFINED__
#define __IAppxManifestReader5_FWD_DEFINED__
typedef interface IAppxManifestReader5 IAppxManifestReader5;

#endif 	/* __IAppxManifestReader5_FWD_DEFINED__ */


#ifndef __IAppxManifestOptionalPackageInfo_FWD_DEFINED__
#define __IAppxManifestOptionalPackageInfo_FWD_DEFINED__
typedef interface IAppxManifestOptionalPackageInfo IAppxManifestOptionalPackageInfo;

#endif 	/* __IAppxManifestOptionalPackageInfo_FWD_DEFINED__ */


#ifndef __IAppxManifestMainPackageDependenciesEnumerator_FWD_DEFINED__
#define __IAppxManifestMainPackageDependenciesEnumerator_FWD_DEFINED__
typedef interface IAppxManifestMainPackageDependenciesEnumerator IAppxManifestMainPackageDependenciesEnumerator;

#endif 	/* __IAppxManifestMainPackageDependenciesEnumerator_FWD_DEFINED__ */


#ifndef __IAppxManifestMainPackageDependency_FWD_DEFINED__
#define __IAppxManifestMainPackageDependency_FWD_DEFINED__
typedef interface IAppxManifestMainPackageDependency IAppxManifestMainPackageDependency;

#endif 	/* __IAppxManifestMainPackageDependency_FWD_DEFINED__ */


#ifndef __IAppxManifestPackageId_FWD_DEFINED__
#define __IAppxManifestPackageId_FWD_DEFINED__
typedef interface IAppxManifestPackageId IAppxManifestPackageId;

#endif 	/* __IAppxManifestPackageId_FWD_DEFINED__ */


#ifndef __IAppxManifestPackageId2_FWD_DEFINED__
#define __IAppxManifestPackageId2_FWD_DEFINED__
typedef interface IAppxManifestPackageId2 IAppxManifestPackageId2;

#endif 	/* __IAppxManifestPackageId2_FWD_DEFINED__ */


#ifndef __IAppxManifestProperties_FWD_DEFINED__
#define __IAppxManifestProperties_FWD_DEFINED__
typedef interface IAppxManifestProperties IAppxManifestProperties;

#endif 	/* __IAppxManifestProperties_FWD_DEFINED__ */


#ifndef __IAppxManifestTargetDeviceFamiliesEnumerator_FWD_DEFINED__
#define __IAppxManifestTargetDeviceFamiliesEnumerator_FWD_DEFINED__
typedef interface IAppxManifestTargetDeviceFamiliesEnumerator IAppxManifestTargetDeviceFamiliesEnumerator;

#endif 	/* __IAppxManifestTargetDeviceFamiliesEnumerator_FWD_DEFINED__ */


#ifndef __IAppxManifestTargetDeviceFamily_FWD_DEFINED__
#define __IAppxManifestTargetDeviceFamily_FWD_DEFINED__
typedef interface IAppxManifestTargetDeviceFamily IAppxManifestTargetDeviceFamily;

#endif 	/* __IAppxManifestTargetDeviceFamily_FWD_DEFINED__ */


#ifndef __IAppxManifestPackageDependenciesEnumerator_FWD_DEFINED__
#define __IAppxManifestPackageDependenciesEnumerator_FWD_DEFINED__
typedef interface IAppxManifestPackageDependenciesEnumerator IAppxManifestPackageDependenciesEnumerator;

#endif 	/* __IAppxManifestPackageDependenciesEnumerator_FWD_DEFINED__ */


#ifndef __IAppxManifestPackageDependency_FWD_DEFINED__
#define __IAppxManifestPackageDependency_FWD_DEFINED__
typedef interface IAppxManifestPackageDependency IAppxManifestPackageDependency;

#endif 	/* __IAppxManifestPackageDependency_FWD_DEFINED__ */


#ifndef __IAppxManifestPackageDependency2_FWD_DEFINED__
#define __IAppxManifestPackageDependency2_FWD_DEFINED__
typedef interface IAppxManifestPackageDependency2 IAppxManifestPackageDependency2;

#endif 	/* __IAppxManifestPackageDependency2_FWD_DEFINED__ */


#ifndef __IAppxManifestResourcesEnumerator_FWD_DEFINED__
#define __IAppxManifestResourcesEnumerator_FWD_DEFINED__
typedef interface IAppxManifestResourcesEnumerator IAppxManifestResourcesEnumerator;

#endif 	/* __IAppxManifestResourcesEnumerator_FWD_DEFINED__ */


#ifndef __IAppxManifestDeviceCapabilitiesEnumerator_FWD_DEFINED__
#define __IAppxManifestDeviceCapabilitiesEnumerator_FWD_DEFINED__
typedef interface IAppxManifestDeviceCapabilitiesEnumerator IAppxManifestDeviceCapabilitiesEnumerator;

#endif 	/* __IAppxManifestDeviceCapabilitiesEnumerator_FWD_DEFINED__ */


#ifndef __IAppxManifestCapabilitiesEnumerator_FWD_DEFINED__
#define __IAppxManifestCapabilitiesEnumerator_FWD_DEFINED__
typedef interface IAppxManifestCapabilitiesEnumerator IAppxManifestCapabilitiesEnumerator;

#endif 	/* __IAppxManifestCapabilitiesEnumerator_FWD_DEFINED__ */


#ifndef __IAppxManifestApplicationsEnumerator_FWD_DEFINED__
#define __IAppxManifestApplicationsEnumerator_FWD_DEFINED__
typedef interface IAppxManifestApplicationsEnumerator IAppxManifestApplicationsEnumerator;

#endif 	/* __IAppxManifestApplicationsEnumerator_FWD_DEFINED__ */


#ifndef __IAppxManifestApplication_FWD_DEFINED__
#define __IAppxManifestApplication_FWD_DEFINED__
typedef interface IAppxManifestApplication IAppxManifestApplication;

#endif 	/* __IAppxManifestApplication_FWD_DEFINED__ */


#ifndef __IAppxManifestQualifiedResourcesEnumerator_FWD_DEFINED__
#define __IAppxManifestQualifiedResourcesEnumerator_FWD_DEFINED__
typedef interface IAppxManifestQualifiedResourcesEnumerator IAppxManifestQualifiedResourcesEnumerator;

#endif 	/* __IAppxManifestQualifiedResourcesEnumerator_FWD_DEFINED__ */


#ifndef __IAppxManifestQualifiedResource_FWD_DEFINED__
#define __IAppxManifestQualifiedResource_FWD_DEFINED__
typedef interface IAppxManifestQualifiedResource IAppxManifestQualifiedResource;

#endif 	/* __IAppxManifestQualifiedResource_FWD_DEFINED__ */


#ifndef __IAppxBundleFactory_FWD_DEFINED__
#define __IAppxBundleFactory_FWD_DEFINED__
typedef interface IAppxBundleFactory IAppxBundleFactory;

#endif 	/* __IAppxBundleFactory_FWD_DEFINED__ */


#ifndef __IAppxBundleWriter_FWD_DEFINED__
#define __IAppxBundleWriter_FWD_DEFINED__
typedef interface IAppxBundleWriter IAppxBundleWriter;

#endif 	/* __IAppxBundleWriter_FWD_DEFINED__ */


#ifndef __IAppxBundleWriter2_FWD_DEFINED__
#define __IAppxBundleWriter2_FWD_DEFINED__
typedef interface IAppxBundleWriter2 IAppxBundleWriter2;

#endif 	/* __IAppxBundleWriter2_FWD_DEFINED__ */


#ifndef __IAppxBundleWriter3_FWD_DEFINED__
#define __IAppxBundleWriter3_FWD_DEFINED__
typedef interface IAppxBundleWriter3 IAppxBundleWriter3;

#endif 	/* __IAppxBundleWriter3_FWD_DEFINED__ */


#ifndef __IAppxBundleReader_FWD_DEFINED__
#define __IAppxBundleReader_FWD_DEFINED__
typedef interface IAppxBundleReader IAppxBundleReader;

#endif 	/* __IAppxBundleReader_FWD_DEFINED__ */


#ifndef __IAppxBundleManifestReader_FWD_DEFINED__
#define __IAppxBundleManifestReader_FWD_DEFINED__
typedef interface IAppxBundleManifestReader IAppxBundleManifestReader;

#endif 	/* __IAppxBundleManifestReader_FWD_DEFINED__ */


#ifndef __IAppxBundleManifestReader2_FWD_DEFINED__
#define __IAppxBundleManifestReader2_FWD_DEFINED__
typedef interface IAppxBundleManifestReader2 IAppxBundleManifestReader2;

#endif 	/* __IAppxBundleManifestReader2_FWD_DEFINED__ */


#ifndef __IAppxBundleManifestPackageInfoEnumerator_FWD_DEFINED__
#define __IAppxBundleManifestPackageInfoEnumerator_FWD_DEFINED__
typedef interface IAppxBundleManifestPackageInfoEnumerator IAppxBundleManifestPackageInfoEnumerator;

#endif 	/* __IAppxBundleManifestPackageInfoEnumerator_FWD_DEFINED__ */


#ifndef __IAppxBundleManifestPackageInfo_FWD_DEFINED__
#define __IAppxBundleManifestPackageInfo_FWD_DEFINED__
typedef interface IAppxBundleManifestPackageInfo IAppxBundleManifestPackageInfo;

#endif 	/* __IAppxBundleManifestPackageInfo_FWD_DEFINED__ */


#ifndef __IAppxBundleManifestOptionalBundleInfoEnumerator_FWD_DEFINED__
#define __IAppxBundleManifestOptionalBundleInfoEnumerator_FWD_DEFINED__
typedef interface IAppxBundleManifestOptionalBundleInfoEnumerator IAppxBundleManifestOptionalBundleInfoEnumerator;

#endif 	/* __IAppxBundleManifestOptionalBundleInfoEnumerator_FWD_DEFINED__ */


#ifndef __IAppxBundleManifestOptionalBundleInfo_FWD_DEFINED__
#define __IAppxBundleManifestOptionalBundleInfo_FWD_DEFINED__
typedef interface IAppxBundleManifestOptionalBundleInfo IAppxBundleManifestOptionalBundleInfo;

#endif 	/* __IAppxBundleManifestOptionalBundleInfo_FWD_DEFINED__ */


#ifndef __IAppxContentGroupFilesEnumerator_FWD_DEFINED__
#define __IAppxContentGroupFilesEnumerator_FWD_DEFINED__
typedef interface IAppxContentGroupFilesEnumerator IAppxContentGroupFilesEnumerator;

#endif 	/* __IAppxContentGroupFilesEnumerator_FWD_DEFINED__ */


#ifndef __IAppxContentGroup_FWD_DEFINED__
#define __IAppxContentGroup_FWD_DEFINED__
typedef interface IAppxContentGroup IAppxContentGroup;

#endif 	/* __IAppxContentGroup_FWD_DEFINED__ */


#ifndef __IAppxContentGroupsEnumerator_FWD_DEFINED__
#define __IAppxContentGroupsEnumerator_FWD_DEFINED__
typedef interface IAppxContentGroupsEnumerator IAppxContentGroupsEnumerator;

#endif 	/* __IAppxContentGroupsEnumerator_FWD_DEFINED__ */


#ifndef __IAppxContentGroupMapReader_FWD_DEFINED__
#define __IAppxContentGroupMapReader_FWD_DEFINED__
typedef interface IAppxContentGroupMapReader IAppxContentGroupMapReader;

#endif 	/* __IAppxContentGroupMapReader_FWD_DEFINED__ */


#ifndef __IAppxSourceContentGroupMapReader_FWD_DEFINED__
#define __IAppxSourceContentGroupMapReader_FWD_DEFINED__
typedef interface IAppxSourceContentGroupMapReader IAppxSourceContentGroupMapReader;

#endif 	/* __IAppxSourceContentGroupMapReader_FWD_DEFINED__ */


#ifndef __IAppxContentGroupMapWriter_FWD_DEFINED__
#define __IAppxContentGroupMapWriter_FWD_DEFINED__
typedef interface IAppxContentGroupMapWriter IAppxContentGroupMapWriter;

#endif 	/* __IAppxContentGroupMapWriter_FWD_DEFINED__ */


#ifndef __IAppxEncryptionFactory_FWD_DEFINED__
#define __IAppxEncryptionFactory_FWD_DEFINED__
typedef interface IAppxEncryptionFactory IAppxEncryptionFactory;

#endif 	/* __IAppxEncryptionFactory_FWD_DEFINED__ */


#ifndef __IAppxEncryptionFactory2_FWD_DEFINED__
#define __IAppxEncryptionFactory2_FWD_DEFINED__
typedef interface IAppxEncryptionFactory2 IAppxEncryptionFactory2;

#endif 	/* __IAppxEncryptionFactory2_FWD_DEFINED__ */


#ifndef __IAppxEncryptionFactory3_FWD_DEFINED__
#define __IAppxEncryptionFactory3_FWD_DEFINED__
typedef interface IAppxEncryptionFactory3 IAppxEncryptionFactory3;

#endif 	/* __IAppxEncryptionFactory3_FWD_DEFINED__ */


#ifndef __IAppxEncryptionFactory4_FWD_DEFINED__
#define __IAppxEncryptionFactory4_FWD_DEFINED__
typedef interface IAppxEncryptionFactory4 IAppxEncryptionFactory4;

#endif 	/* __IAppxEncryptionFactory4_FWD_DEFINED__ */


#ifndef __IAppxEncryptedPackageWriter_FWD_DEFINED__
#define __IAppxEncryptedPackageWriter_FWD_DEFINED__
typedef interface IAppxEncryptedPackageWriter IAppxEncryptedPackageWriter;

#endif 	/* __IAppxEncryptedPackageWriter_FWD_DEFINED__ */


#ifndef __IAppxEncryptedPackageWriter2_FWD_DEFINED__
#define __IAppxEncryptedPackageWriter2_FWD_DEFINED__
typedef interface IAppxEncryptedPackageWriter2 IAppxEncryptedPackageWriter2;

#endif 	/* __IAppxEncryptedPackageWriter2_FWD_DEFINED__ */


#ifndef __IAppxEncryptedBundleWriter_FWD_DEFINED__
#define __IAppxEncryptedBundleWriter_FWD_DEFINED__
typedef interface IAppxEncryptedBundleWriter IAppxEncryptedBundleWriter;

#endif 	/* __IAppxEncryptedBundleWriter_FWD_DEFINED__ */


#ifndef __IAppxEncryptedBundleWriter2_FWD_DEFINED__
#define __IAppxEncryptedBundleWriter2_FWD_DEFINED__
typedef interface IAppxEncryptedBundleWriter2 IAppxEncryptedBundleWriter2;

#endif 	/* __IAppxEncryptedBundleWriter2_FWD_DEFINED__ */


#ifndef __AppxFactory_FWD_DEFINED__
#define __AppxFactory_FWD_DEFINED__

#ifdef __cplusplus
typedef class AppxFactory AppxFactory;
#else
typedef struct AppxFactory AppxFactory;
#endif /* __cplusplus */

#endif 	/* __AppxFactory_FWD_DEFINED__ */


#ifndef __AppxBundleFactory_FWD_DEFINED__
#define __AppxBundleFactory_FWD_DEFINED__

#ifdef __cplusplus
typedef class AppxBundleFactory AppxBundleFactory;
#else
typedef struct AppxBundleFactory AppxBundleFactory;
#endif /* __cplusplus */

#endif 	/* __AppxBundleFactory_FWD_DEFINED__ */


#ifndef __AppxEncryptionFactory_FWD_DEFINED__
#define __AppxEncryptionFactory_FWD_DEFINED__

#ifdef __cplusplus
typedef class AppxEncryptionFactory AppxEncryptionFactory;
#else
typedef struct AppxEncryptionFactory AppxEncryptionFactory;
#endif /* __cplusplus */

#endif 	/* __AppxEncryptionFactory_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_appxpackaging_0000_0000 */
/* [local] */ 

#include <winapifamily.h>
#if (NTDDI_VERSION >= NTDDI_WIN7)
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef struct APPX_PACKAGE_SETTINGS
    {
    BOOL forceZip32;
    IUri *hashMethod;
    } 	APPX_PACKAGE_SETTINGS;

typedef /* [v1_enum] */ 
enum APPX_COMPRESSION_OPTION
    {
        APPX_COMPRESSION_OPTION_NONE	= 0,
        APPX_COMPRESSION_OPTION_NORMAL	= 1,
        APPX_COMPRESSION_OPTION_MAXIMUM	= 2,
        APPX_COMPRESSION_OPTION_FAST	= 3,
        APPX_COMPRESSION_OPTION_SUPERFAST	= 4
    } 	APPX_COMPRESSION_OPTION;

typedef struct APPX_PACKAGE_WRITER_PAYLOAD_STREAM
    {
    IStream *inputStream;
    LPCWSTR fileName;
    LPCWSTR contentType;
    APPX_COMPRESSION_OPTION compressionOption;
    } 	APPX_PACKAGE_WRITER_PAYLOAD_STREAM;

typedef /* [v1_enum] */ 
enum APPX_FOOTPRINT_FILE_TYPE
    {
        APPX_FOOTPRINT_FILE_TYPE_MANIFEST	= 0,
        APPX_FOOTPRINT_FILE_TYPE_BLOCKMAP	= 1,
        APPX_FOOTPRINT_FILE_TYPE_SIGNATURE	= 2,
        APPX_FOOTPRINT_FILE_TYPE_CODEINTEGRITY	= 3,
        APPX_FOOTPRINT_FILE_TYPE_CONTENTGROUPMAP	= 4
    } 	APPX_FOOTPRINT_FILE_TYPE;

typedef /* [v1_enum] */ 
enum APPX_BUNDLE_FOOTPRINT_FILE_TYPE
    {
        APPX_BUNDLE_FOOTPRINT_FILE_TYPE_FIRST	= 0,
        APPX_BUNDLE_FOOTPRINT_FILE_TYPE_MANIFEST	= 0,
        APPX_BUNDLE_FOOTPRINT_FILE_TYPE_BLOCKMAP	= 1,
        APPX_BUNDLE_FOOTPRINT_FILE_TYPE_SIGNATURE	= 2,
        APPX_BUNDLE_FOOTPRINT_FILE_TYPE_LAST	= 2
    } 	APPX_BUNDLE_FOOTPRINT_FILE_TYPE;

typedef /* [v1_enum] */ 
enum APPX_CAPABILITIES
    {
        APPX_CAPABILITY_INTERNET_CLIENT	= 0x1,
        APPX_CAPABILITY_INTERNET_CLIENT_SERVER	= 0x2,
        APPX_CAPABILITY_PRIVATE_NETWORK_CLIENT_SERVER	= 0x4,
        APPX_CAPABILITY_DOCUMENTS_LIBRARY	= 0x8,
        APPX_CAPABILITY_PICTURES_LIBRARY	= 0x10,
        APPX_CAPABILITY_VIDEOS_LIBRARY	= 0x20,
        APPX_CAPABILITY_MUSIC_LIBRARY	= 0x40,
        APPX_CAPABILITY_ENTERPRISE_AUTHENTICATION	= 0x80,
        APPX_CAPABILITY_SHARED_USER_CERTIFICATES	= 0x100,
        APPX_CAPABILITY_REMOVABLE_STORAGE	= 0x200,
        APPX_CAPABILITY_APPOINTMENTS	= 0x400,
        APPX_CAPABILITY_CONTACTS	= 0x800
    } 	APPX_CAPABILITIES;

DEFINE_ENUM_FLAG_OPERATORS(APPX_CAPABILITIES);
typedef /* [v1_enum] */ 
enum APPX_PACKAGE_ARCHITECTURE
    {
        APPX_PACKAGE_ARCHITECTURE_X86	= 0,
        APPX_PACKAGE_ARCHITECTURE_ARM	= 5,
        APPX_PACKAGE_ARCHITECTURE_X64	= 9,
        APPX_PACKAGE_ARCHITECTURE_NEUTRAL	= 11,
        APPX_PACKAGE_ARCHITECTURE_ARM64	= 12
    } 	APPX_PACKAGE_ARCHITECTURE;

typedef /* [v1_enum] */ 
enum APPX_PACKAGE_ARCHITECTURE2
    {
        APPX_PACKAGE_ARCHITECTURE2_X86	= 0,
        APPX_PACKAGE_ARCHITECTURE2_ARM	= 5,
        APPX_PACKAGE_ARCHITECTURE2_X64	= 9,
        APPX_PACKAGE_ARCHITECTURE2_NEUTRAL	= 11,
        APPX_PACKAGE_ARCHITECTURE2_ARM64	= 12,
        APPX_PACKAGE_ARCHITECTURE2_X86_ON_ARM64	= 14,
        APPX_PACKAGE_ARCHITECTURE2_UNKNOWN	= 0xffff
    } 	APPX_PACKAGE_ARCHITECTURE2;

typedef /* [v1_enum] */ 
enum APPX_BUNDLE_PAYLOAD_PACKAGE_TYPE
    {
        APPX_BUNDLE_PAYLOAD_PACKAGE_TYPE_APPLICATION	= 0,
        APPX_BUNDLE_PAYLOAD_PACKAGE_TYPE_RESOURCE	= 1
    } 	APPX_BUNDLE_PAYLOAD_PACKAGE_TYPE;

typedef /* [v1_enum] */ 
enum DX_FEATURE_LEVEL
    {
        DX_FEATURE_LEVEL_UNSPECIFIED	= 0,
        DX_FEATURE_LEVEL_9	= 1,
        DX_FEATURE_LEVEL_10	= 2,
        DX_FEATURE_LEVEL_11	= 3
    } 	DX_FEATURE_LEVEL;

typedef /* [v1_enum] */ 
enum APPX_CAPABILITY_CLASS_TYPE
    {
        APPX_CAPABILITY_CLASS_DEFAULT	= 0,
        APPX_CAPABILITY_CLASS_GENERAL	= 0x1,
        APPX_CAPABILITY_CLASS_RESTRICTED	= 0x2,
        APPX_CAPABILITY_CLASS_WINDOWS	= 0x4,
        APPX_CAPABILITY_CLASS_ALL	= 0x7,
        APPX_CAPABILITY_CLASS_CUSTOM	= 0x8
    } 	APPX_CAPABILITY_CLASS_TYPE;














































#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)




#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)


extern RPC_IF_HANDLE __MIDL_itf_appxpackaging_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_appxpackaging_0000_0000_v0_0_s_ifspec;

#ifndef __IAppxFactory_INTERFACE_DEFINED__
#define __IAppxFactory_INTERFACE_DEFINED__

/* interface IAppxFactory */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("beb94909-e451-438b-b5a7-d79e767b75d8")
    IAppxFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreatePackageWriter( 
            /* [in] */ __RPC__in_opt IStream *outputStream,
            /* [in] */ __RPC__in APPX_PACKAGE_SETTINGS *settings,
            /* [retval][out] */ __RPC__deref_out_opt IAppxPackageWriter **packageWriter) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreatePackageReader( 
            /* [in] */ __RPC__in_opt IStream *inputStream,
            /* [retval][out] */ __RPC__deref_out_opt IAppxPackageReader **packageReader) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateManifestReader( 
            /* [in] */ __RPC__in_opt IStream *inputStream,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestReader **manifestReader) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateBlockMapReader( 
            /* [in] */ __RPC__in_opt IStream *inputStream,
            /* [retval][out] */ __RPC__deref_out_opt IAppxBlockMapReader **blockMapReader) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateValidatedBlockMapReader( 
            /* [in] */ __RPC__in_opt IStream *blockMapStream,
            /* [in] */ __RPC__in LPCWSTR signatureFileName,
            /* [retval][out] */ __RPC__deref_out_opt IAppxBlockMapReader **blockMapReader) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreatePackageWriter )( 
            __RPC__in IAppxFactory * This,
            /* [in] */ __RPC__in_opt IStream *outputStream,
            /* [in] */ __RPC__in APPX_PACKAGE_SETTINGS *settings,
            /* [retval][out] */ __RPC__deref_out_opt IAppxPackageWriter **packageWriter);
        
        HRESULT ( STDMETHODCALLTYPE *CreatePackageReader )( 
            __RPC__in IAppxFactory * This,
            /* [in] */ __RPC__in_opt IStream *inputStream,
            /* [retval][out] */ __RPC__deref_out_opt IAppxPackageReader **packageReader);
        
        HRESULT ( STDMETHODCALLTYPE *CreateManifestReader )( 
            __RPC__in IAppxFactory * This,
            /* [in] */ __RPC__in_opt IStream *inputStream,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestReader **manifestReader);
        
        HRESULT ( STDMETHODCALLTYPE *CreateBlockMapReader )( 
            __RPC__in IAppxFactory * This,
            /* [in] */ __RPC__in_opt IStream *inputStream,
            /* [retval][out] */ __RPC__deref_out_opt IAppxBlockMapReader **blockMapReader);
        
        HRESULT ( STDMETHODCALLTYPE *CreateValidatedBlockMapReader )( 
            __RPC__in IAppxFactory * This,
            /* [in] */ __RPC__in_opt IStream *blockMapStream,
            /* [in] */ __RPC__in LPCWSTR signatureFileName,
            /* [retval][out] */ __RPC__deref_out_opt IAppxBlockMapReader **blockMapReader);
        
        END_INTERFACE
    } IAppxFactoryVtbl;

    interface IAppxFactory
    {
        CONST_VTBL struct IAppxFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxFactory_CreatePackageWriter(This,outputStream,settings,packageWriter)	\
    ( (This)->lpVtbl -> CreatePackageWriter(This,outputStream,settings,packageWriter) ) 

#define IAppxFactory_CreatePackageReader(This,inputStream,packageReader)	\
    ( (This)->lpVtbl -> CreatePackageReader(This,inputStream,packageReader) ) 

#define IAppxFactory_CreateManifestReader(This,inputStream,manifestReader)	\
    ( (This)->lpVtbl -> CreateManifestReader(This,inputStream,manifestReader) ) 

#define IAppxFactory_CreateBlockMapReader(This,inputStream,blockMapReader)	\
    ( (This)->lpVtbl -> CreateBlockMapReader(This,inputStream,blockMapReader) ) 

#define IAppxFactory_CreateValidatedBlockMapReader(This,blockMapStream,signatureFileName,blockMapReader)	\
    ( (This)->lpVtbl -> CreateValidatedBlockMapReader(This,blockMapStream,signatureFileName,blockMapReader) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxFactory_INTERFACE_DEFINED__ */


#ifndef __IAppxFactory2_INTERFACE_DEFINED__
#define __IAppxFactory2_INTERFACE_DEFINED__

/* interface IAppxFactory2 */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxFactory2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f1346df2-c282-4e22-b918-743a929a8d55")
    IAppxFactory2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateContentGroupMapReader( 
            /* [in] */ __RPC__in_opt IStream *inputStream,
            /* [retval][out] */ __RPC__deref_out_opt IAppxContentGroupMapReader **contentGroupMapReader) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateSourceContentGroupMapReader( 
            /* [in] */ __RPC__in_opt IStream *inputStream,
            /* [retval][out] */ __RPC__deref_out_opt IAppxSourceContentGroupMapReader **reader) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateContentGroupMapWriter( 
            /* [in] */ __RPC__in_opt IStream *stream,
            /* [retval][out] */ __RPC__deref_out_opt IAppxContentGroupMapWriter **contentGroupMapWriter) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxFactory2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxFactory2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxFactory2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxFactory2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateContentGroupMapReader )( 
            __RPC__in IAppxFactory2 * This,
            /* [in] */ __RPC__in_opt IStream *inputStream,
            /* [retval][out] */ __RPC__deref_out_opt IAppxContentGroupMapReader **contentGroupMapReader);
        
        HRESULT ( STDMETHODCALLTYPE *CreateSourceContentGroupMapReader )( 
            __RPC__in IAppxFactory2 * This,
            /* [in] */ __RPC__in_opt IStream *inputStream,
            /* [retval][out] */ __RPC__deref_out_opt IAppxSourceContentGroupMapReader **reader);
        
        HRESULT ( STDMETHODCALLTYPE *CreateContentGroupMapWriter )( 
            __RPC__in IAppxFactory2 * This,
            /* [in] */ __RPC__in_opt IStream *stream,
            /* [retval][out] */ __RPC__deref_out_opt IAppxContentGroupMapWriter **contentGroupMapWriter);
        
        END_INTERFACE
    } IAppxFactory2Vtbl;

    interface IAppxFactory2
    {
        CONST_VTBL struct IAppxFactory2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxFactory2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxFactory2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxFactory2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxFactory2_CreateContentGroupMapReader(This,inputStream,contentGroupMapReader)	\
    ( (This)->lpVtbl -> CreateContentGroupMapReader(This,inputStream,contentGroupMapReader) ) 

#define IAppxFactory2_CreateSourceContentGroupMapReader(This,inputStream,reader)	\
    ( (This)->lpVtbl -> CreateSourceContentGroupMapReader(This,inputStream,reader) ) 

#define IAppxFactory2_CreateContentGroupMapWriter(This,stream,contentGroupMapWriter)	\
    ( (This)->lpVtbl -> CreateContentGroupMapWriter(This,stream,contentGroupMapWriter) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxFactory2_INTERFACE_DEFINED__ */


#ifndef __IAppxPackageReader_INTERFACE_DEFINED__
#define __IAppxPackageReader_INTERFACE_DEFINED__

/* interface IAppxPackageReader */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxPackageReader;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b5c49650-99bc-481c-9a34-3d53a4106708")
    IAppxPackageReader : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetBlockMap( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxBlockMapReader **blockMapReader) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFootprintFile( 
            /* [in] */ APPX_FOOTPRINT_FILE_TYPE type,
            /* [retval][out] */ __RPC__deref_out_opt IAppxFile **file) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPayloadFile( 
            /* [string][in] */ __RPC__in_string LPCWSTR fileName,
            /* [retval][out] */ __RPC__deref_out_opt IAppxFile **file) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPayloadFiles( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxFilesEnumerator **filesEnumerator) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetManifest( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestReader **manifestReader) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxPackageReaderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxPackageReader * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxPackageReader * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxPackageReader * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetBlockMap )( 
            __RPC__in IAppxPackageReader * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxBlockMapReader **blockMapReader);
        
        HRESULT ( STDMETHODCALLTYPE *GetFootprintFile )( 
            __RPC__in IAppxPackageReader * This,
            /* [in] */ APPX_FOOTPRINT_FILE_TYPE type,
            /* [retval][out] */ __RPC__deref_out_opt IAppxFile **file);
        
        HRESULT ( STDMETHODCALLTYPE *GetPayloadFile )( 
            __RPC__in IAppxPackageReader * This,
            /* [string][in] */ __RPC__in_string LPCWSTR fileName,
            /* [retval][out] */ __RPC__deref_out_opt IAppxFile **file);
        
        HRESULT ( STDMETHODCALLTYPE *GetPayloadFiles )( 
            __RPC__in IAppxPackageReader * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxFilesEnumerator **filesEnumerator);
        
        HRESULT ( STDMETHODCALLTYPE *GetManifest )( 
            __RPC__in IAppxPackageReader * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestReader **manifestReader);
        
        END_INTERFACE
    } IAppxPackageReaderVtbl;

    interface IAppxPackageReader
    {
        CONST_VTBL struct IAppxPackageReaderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxPackageReader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxPackageReader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxPackageReader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxPackageReader_GetBlockMap(This,blockMapReader)	\
    ( (This)->lpVtbl -> GetBlockMap(This,blockMapReader) ) 

#define IAppxPackageReader_GetFootprintFile(This,type,file)	\
    ( (This)->lpVtbl -> GetFootprintFile(This,type,file) ) 

#define IAppxPackageReader_GetPayloadFile(This,fileName,file)	\
    ( (This)->lpVtbl -> GetPayloadFile(This,fileName,file) ) 

#define IAppxPackageReader_GetPayloadFiles(This,filesEnumerator)	\
    ( (This)->lpVtbl -> GetPayloadFiles(This,filesEnumerator) ) 

#define IAppxPackageReader_GetManifest(This,manifestReader)	\
    ( (This)->lpVtbl -> GetManifest(This,manifestReader) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxPackageReader_INTERFACE_DEFINED__ */


#ifndef __IAppxPackageReader2_INTERFACE_DEFINED__
#define __IAppxPackageReader2_INTERFACE_DEFINED__

/* interface IAppxPackageReader2 */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxPackageReader2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("37e8d3d5-1aea-4204-9c50-ff715932c249")
    IAppxPackageReader2 : public IAppxPackageReader
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetContentGroupMap( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxContentGroupMapReader **contentGroupMapReader) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxPackageReader2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxPackageReader2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxPackageReader2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxPackageReader2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetBlockMap )( 
            __RPC__in IAppxPackageReader2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxBlockMapReader **blockMapReader);
        
        HRESULT ( STDMETHODCALLTYPE *GetFootprintFile )( 
            __RPC__in IAppxPackageReader2 * This,
            /* [in] */ APPX_FOOTPRINT_FILE_TYPE type,
            /* [retval][out] */ __RPC__deref_out_opt IAppxFile **file);
        
        HRESULT ( STDMETHODCALLTYPE *GetPayloadFile )( 
            __RPC__in IAppxPackageReader2 * This,
            /* [string][in] */ __RPC__in_string LPCWSTR fileName,
            /* [retval][out] */ __RPC__deref_out_opt IAppxFile **file);
        
        HRESULT ( STDMETHODCALLTYPE *GetPayloadFiles )( 
            __RPC__in IAppxPackageReader2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxFilesEnumerator **filesEnumerator);
        
        HRESULT ( STDMETHODCALLTYPE *GetManifest )( 
            __RPC__in IAppxPackageReader2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestReader **manifestReader);
        
        HRESULT ( STDMETHODCALLTYPE *GetContentGroupMap )( 
            __RPC__in IAppxPackageReader2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxContentGroupMapReader **contentGroupMapReader);
        
        END_INTERFACE
    } IAppxPackageReader2Vtbl;

    interface IAppxPackageReader2
    {
        CONST_VTBL struct IAppxPackageReader2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxPackageReader2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxPackageReader2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxPackageReader2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxPackageReader2_GetBlockMap(This,blockMapReader)	\
    ( (This)->lpVtbl -> GetBlockMap(This,blockMapReader) ) 

#define IAppxPackageReader2_GetFootprintFile(This,type,file)	\
    ( (This)->lpVtbl -> GetFootprintFile(This,type,file) ) 

#define IAppxPackageReader2_GetPayloadFile(This,fileName,file)	\
    ( (This)->lpVtbl -> GetPayloadFile(This,fileName,file) ) 

#define IAppxPackageReader2_GetPayloadFiles(This,filesEnumerator)	\
    ( (This)->lpVtbl -> GetPayloadFiles(This,filesEnumerator) ) 

#define IAppxPackageReader2_GetManifest(This,manifestReader)	\
    ( (This)->lpVtbl -> GetManifest(This,manifestReader) ) 


#define IAppxPackageReader2_GetContentGroupMap(This,contentGroupMapReader)	\
    ( (This)->lpVtbl -> GetContentGroupMap(This,contentGroupMapReader) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxPackageReader2_INTERFACE_DEFINED__ */


#ifndef __IAppxPackageWriter_INTERFACE_DEFINED__
#define __IAppxPackageWriter_INTERFACE_DEFINED__

/* interface IAppxPackageWriter */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxPackageWriter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9099e33b-246f-41e4-881a-008eb613f858")
    IAppxPackageWriter : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddPayloadFile( 
            /* [string][in] */ __RPC__in_string LPCWSTR fileName,
            /* [string][in] */ __RPC__in_string LPCWSTR contentType,
            /* [in] */ APPX_COMPRESSION_OPTION compressionOption,
            /* [in] */ __RPC__in_opt IStream *inputStream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Close( 
            /* [in] */ __RPC__in_opt IStream *manifest) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxPackageWriterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxPackageWriter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxPackageWriter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxPackageWriter * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddPayloadFile )( 
            __RPC__in IAppxPackageWriter * This,
            /* [string][in] */ __RPC__in_string LPCWSTR fileName,
            /* [string][in] */ __RPC__in_string LPCWSTR contentType,
            /* [in] */ APPX_COMPRESSION_OPTION compressionOption,
            /* [in] */ __RPC__in_opt IStream *inputStream);
        
        HRESULT ( STDMETHODCALLTYPE *Close )( 
            __RPC__in IAppxPackageWriter * This,
            /* [in] */ __RPC__in_opt IStream *manifest);
        
        END_INTERFACE
    } IAppxPackageWriterVtbl;

    interface IAppxPackageWriter
    {
        CONST_VTBL struct IAppxPackageWriterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxPackageWriter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxPackageWriter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxPackageWriter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxPackageWriter_AddPayloadFile(This,fileName,contentType,compressionOption,inputStream)	\
    ( (This)->lpVtbl -> AddPayloadFile(This,fileName,contentType,compressionOption,inputStream) ) 

#define IAppxPackageWriter_Close(This,manifest)	\
    ( (This)->lpVtbl -> Close(This,manifest) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxPackageWriter_INTERFACE_DEFINED__ */


#ifndef __IAppxPackageWriter2_INTERFACE_DEFINED__
#define __IAppxPackageWriter2_INTERFACE_DEFINED__

/* interface IAppxPackageWriter2 */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxPackageWriter2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2cf5c4fd-e54c-4ea5-ba4e-f8c4b105a8c8")
    IAppxPackageWriter2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Close( 
            /* [in] */ __RPC__in_opt IStream *manifest,
            /* [in] */ __RPC__in_opt IStream *contentGroupMap) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxPackageWriter2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxPackageWriter2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxPackageWriter2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxPackageWriter2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Close )( 
            __RPC__in IAppxPackageWriter2 * This,
            /* [in] */ __RPC__in_opt IStream *manifest,
            /* [in] */ __RPC__in_opt IStream *contentGroupMap);
        
        END_INTERFACE
    } IAppxPackageWriter2Vtbl;

    interface IAppxPackageWriter2
    {
        CONST_VTBL struct IAppxPackageWriter2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxPackageWriter2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxPackageWriter2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxPackageWriter2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxPackageWriter2_Close(This,manifest,contentGroupMap)	\
    ( (This)->lpVtbl -> Close(This,manifest,contentGroupMap) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxPackageWriter2_INTERFACE_DEFINED__ */


#ifndef __IAppxPackageWriter3_INTERFACE_DEFINED__
#define __IAppxPackageWriter3_INTERFACE_DEFINED__

/* interface IAppxPackageWriter3 */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxPackageWriter3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a83aacd3-41c0-4501-b8a3-74164f50b2fd")
    IAppxPackageWriter3 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddPayloadFiles( 
            /* [in] */ UINT32 fileCount,
            /* [size_is][in] */ __RPC__in_ecount_full(fileCount) APPX_PACKAGE_WRITER_PAYLOAD_STREAM *payloadFiles,
            /* [in] */ UINT64 memoryLimit) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxPackageWriter3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxPackageWriter3 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxPackageWriter3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxPackageWriter3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddPayloadFiles )( 
            __RPC__in IAppxPackageWriter3 * This,
            /* [in] */ UINT32 fileCount,
            /* [size_is][in] */ __RPC__in_ecount_full(fileCount) APPX_PACKAGE_WRITER_PAYLOAD_STREAM *payloadFiles,
            /* [in] */ UINT64 memoryLimit);
        
        END_INTERFACE
    } IAppxPackageWriter3Vtbl;

    interface IAppxPackageWriter3
    {
        CONST_VTBL struct IAppxPackageWriter3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxPackageWriter3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxPackageWriter3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxPackageWriter3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxPackageWriter3_AddPayloadFiles(This,fileCount,payloadFiles,memoryLimit)	\
    ( (This)->lpVtbl -> AddPayloadFiles(This,fileCount,payloadFiles,memoryLimit) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxPackageWriter3_INTERFACE_DEFINED__ */


#ifndef __IAppxFile_INTERFACE_DEFINED__
#define __IAppxFile_INTERFACE_DEFINED__

/* interface IAppxFile */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxFile;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("91df827b-94fd-468f-827b-57f41b2f6f2e")
    IAppxFile : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCompressionOption( 
            /* [retval][out] */ __RPC__out APPX_COMPRESSION_OPTION *compressionOption) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetContentType( 
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *contentType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *fileName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSize( 
            /* [retval][out] */ __RPC__out UINT64 *size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStream( 
            /* [retval][out] */ __RPC__deref_out_opt IStream **stream) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxFileVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxFile * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxFile * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxFile * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCompressionOption )( 
            __RPC__in IAppxFile * This,
            /* [retval][out] */ __RPC__out APPX_COMPRESSION_OPTION *compressionOption);
        
        HRESULT ( STDMETHODCALLTYPE *GetContentType )( 
            __RPC__in IAppxFile * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *contentType);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            __RPC__in IAppxFile * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *fileName);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            __RPC__in IAppxFile * This,
            /* [retval][out] */ __RPC__out UINT64 *size);
        
        HRESULT ( STDMETHODCALLTYPE *GetStream )( 
            __RPC__in IAppxFile * This,
            /* [retval][out] */ __RPC__deref_out_opt IStream **stream);
        
        END_INTERFACE
    } IAppxFileVtbl;

    interface IAppxFile
    {
        CONST_VTBL struct IAppxFileVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxFile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxFile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxFile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxFile_GetCompressionOption(This,compressionOption)	\
    ( (This)->lpVtbl -> GetCompressionOption(This,compressionOption) ) 

#define IAppxFile_GetContentType(This,contentType)	\
    ( (This)->lpVtbl -> GetContentType(This,contentType) ) 

#define IAppxFile_GetName(This,fileName)	\
    ( (This)->lpVtbl -> GetName(This,fileName) ) 

#define IAppxFile_GetSize(This,size)	\
    ( (This)->lpVtbl -> GetSize(This,size) ) 

#define IAppxFile_GetStream(This,stream)	\
    ( (This)->lpVtbl -> GetStream(This,stream) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxFile_INTERFACE_DEFINED__ */


#ifndef __IAppxFilesEnumerator_INTERFACE_DEFINED__
#define __IAppxFilesEnumerator_INTERFACE_DEFINED__

/* interface IAppxFilesEnumerator */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxFilesEnumerator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f007eeaf-9831-411c-9847-917cdc62d1fe")
    IAppxFilesEnumerator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrent( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxFile **file) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHasCurrent( 
            /* [retval][out] */ __RPC__out BOOL *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ __RPC__out BOOL *hasNext) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxFilesEnumeratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxFilesEnumerator * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxFilesEnumerator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxFilesEnumerator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )( 
            __RPC__in IAppxFilesEnumerator * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxFile **file);
        
        HRESULT ( STDMETHODCALLTYPE *GetHasCurrent )( 
            __RPC__in IAppxFilesEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in IAppxFilesEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasNext);
        
        END_INTERFACE
    } IAppxFilesEnumeratorVtbl;

    interface IAppxFilesEnumerator
    {
        CONST_VTBL struct IAppxFilesEnumeratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxFilesEnumerator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxFilesEnumerator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxFilesEnumerator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxFilesEnumerator_GetCurrent(This,file)	\
    ( (This)->lpVtbl -> GetCurrent(This,file) ) 

#define IAppxFilesEnumerator_GetHasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> GetHasCurrent(This,hasCurrent) ) 

#define IAppxFilesEnumerator_MoveNext(This,hasNext)	\
    ( (This)->lpVtbl -> MoveNext(This,hasNext) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxFilesEnumerator_INTERFACE_DEFINED__ */


#ifndef __IAppxBlockMapReader_INTERFACE_DEFINED__
#define __IAppxBlockMapReader_INTERFACE_DEFINED__

/* interface IAppxBlockMapReader */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxBlockMapReader;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5efec991-bca3-42d1-9ec2-e92d609ec22a")
    IAppxBlockMapReader : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetFile( 
            /* [string][in] */ __RPC__in_string LPCWSTR filename,
            /* [retval][out] */ __RPC__deref_out_opt IAppxBlockMapFile **file) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFiles( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxBlockMapFilesEnumerator **enumerator) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHashMethod( 
            /* [retval][out] */ __RPC__deref_out_opt IUri **hashMethod) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStream( 
            /* [retval][out] */ __RPC__deref_out_opt IStream **blockMapStream) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxBlockMapReaderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxBlockMapReader * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxBlockMapReader * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxBlockMapReader * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetFile )( 
            __RPC__in IAppxBlockMapReader * This,
            /* [string][in] */ __RPC__in_string LPCWSTR filename,
            /* [retval][out] */ __RPC__deref_out_opt IAppxBlockMapFile **file);
        
        HRESULT ( STDMETHODCALLTYPE *GetFiles )( 
            __RPC__in IAppxBlockMapReader * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxBlockMapFilesEnumerator **enumerator);
        
        HRESULT ( STDMETHODCALLTYPE *GetHashMethod )( 
            __RPC__in IAppxBlockMapReader * This,
            /* [retval][out] */ __RPC__deref_out_opt IUri **hashMethod);
        
        HRESULT ( STDMETHODCALLTYPE *GetStream )( 
            __RPC__in IAppxBlockMapReader * This,
            /* [retval][out] */ __RPC__deref_out_opt IStream **blockMapStream);
        
        END_INTERFACE
    } IAppxBlockMapReaderVtbl;

    interface IAppxBlockMapReader
    {
        CONST_VTBL struct IAppxBlockMapReaderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxBlockMapReader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxBlockMapReader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxBlockMapReader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxBlockMapReader_GetFile(This,filename,file)	\
    ( (This)->lpVtbl -> GetFile(This,filename,file) ) 

#define IAppxBlockMapReader_GetFiles(This,enumerator)	\
    ( (This)->lpVtbl -> GetFiles(This,enumerator) ) 

#define IAppxBlockMapReader_GetHashMethod(This,hashMethod)	\
    ( (This)->lpVtbl -> GetHashMethod(This,hashMethod) ) 

#define IAppxBlockMapReader_GetStream(This,blockMapStream)	\
    ( (This)->lpVtbl -> GetStream(This,blockMapStream) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxBlockMapReader_INTERFACE_DEFINED__ */


#ifndef __IAppxBlockMapFile_INTERFACE_DEFINED__
#define __IAppxBlockMapFile_INTERFACE_DEFINED__

/* interface IAppxBlockMapFile */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxBlockMapFile;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("277672ac-4f63-42c1-8abc-beae3600eb59")
    IAppxBlockMapFile : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetBlocks( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxBlockMapBlocksEnumerator **blocks) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLocalFileHeaderSize( 
            /* [retval][out] */ __RPC__out UINT32 *lfhSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetUncompressedSize( 
            /* [retval][out] */ __RPC__out UINT64 *size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ValidateFileHash( 
            /* [in] */ __RPC__in_opt IStream *fileStream,
            /* [retval][out] */ __RPC__out BOOL *isValid) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxBlockMapFileVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxBlockMapFile * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxBlockMapFile * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxBlockMapFile * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetBlocks )( 
            __RPC__in IAppxBlockMapFile * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxBlockMapBlocksEnumerator **blocks);
        
        HRESULT ( STDMETHODCALLTYPE *GetLocalFileHeaderSize )( 
            __RPC__in IAppxBlockMapFile * This,
            /* [retval][out] */ __RPC__out UINT32 *lfhSize);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            __RPC__in IAppxBlockMapFile * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *GetUncompressedSize )( 
            __RPC__in IAppxBlockMapFile * This,
            /* [retval][out] */ __RPC__out UINT64 *size);
        
        HRESULT ( STDMETHODCALLTYPE *ValidateFileHash )( 
            __RPC__in IAppxBlockMapFile * This,
            /* [in] */ __RPC__in_opt IStream *fileStream,
            /* [retval][out] */ __RPC__out BOOL *isValid);
        
        END_INTERFACE
    } IAppxBlockMapFileVtbl;

    interface IAppxBlockMapFile
    {
        CONST_VTBL struct IAppxBlockMapFileVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxBlockMapFile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxBlockMapFile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxBlockMapFile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxBlockMapFile_GetBlocks(This,blocks)	\
    ( (This)->lpVtbl -> GetBlocks(This,blocks) ) 

#define IAppxBlockMapFile_GetLocalFileHeaderSize(This,lfhSize)	\
    ( (This)->lpVtbl -> GetLocalFileHeaderSize(This,lfhSize) ) 

#define IAppxBlockMapFile_GetName(This,name)	\
    ( (This)->lpVtbl -> GetName(This,name) ) 

#define IAppxBlockMapFile_GetUncompressedSize(This,size)	\
    ( (This)->lpVtbl -> GetUncompressedSize(This,size) ) 

#define IAppxBlockMapFile_ValidateFileHash(This,fileStream,isValid)	\
    ( (This)->lpVtbl -> ValidateFileHash(This,fileStream,isValid) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxBlockMapFile_INTERFACE_DEFINED__ */


#ifndef __IAppxBlockMapFilesEnumerator_INTERFACE_DEFINED__
#define __IAppxBlockMapFilesEnumerator_INTERFACE_DEFINED__

/* interface IAppxBlockMapFilesEnumerator */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxBlockMapFilesEnumerator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("02b856a2-4262-4070-bacb-1a8cbbc42305")
    IAppxBlockMapFilesEnumerator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrent( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxBlockMapFile **file) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHasCurrent( 
            /* [retval][out] */ __RPC__out BOOL *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ __RPC__out BOOL *hasCurrent) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxBlockMapFilesEnumeratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxBlockMapFilesEnumerator * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxBlockMapFilesEnumerator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxBlockMapFilesEnumerator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )( 
            __RPC__in IAppxBlockMapFilesEnumerator * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxBlockMapFile **file);
        
        HRESULT ( STDMETHODCALLTYPE *GetHasCurrent )( 
            __RPC__in IAppxBlockMapFilesEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in IAppxBlockMapFilesEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasCurrent);
        
        END_INTERFACE
    } IAppxBlockMapFilesEnumeratorVtbl;

    interface IAppxBlockMapFilesEnumerator
    {
        CONST_VTBL struct IAppxBlockMapFilesEnumeratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxBlockMapFilesEnumerator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxBlockMapFilesEnumerator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxBlockMapFilesEnumerator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxBlockMapFilesEnumerator_GetCurrent(This,file)	\
    ( (This)->lpVtbl -> GetCurrent(This,file) ) 

#define IAppxBlockMapFilesEnumerator_GetHasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> GetHasCurrent(This,hasCurrent) ) 

#define IAppxBlockMapFilesEnumerator_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxBlockMapFilesEnumerator_INTERFACE_DEFINED__ */


#ifndef __IAppxBlockMapBlock_INTERFACE_DEFINED__
#define __IAppxBlockMapBlock_INTERFACE_DEFINED__

/* interface IAppxBlockMapBlock */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IAppxBlockMapBlock;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("75cf3930-3244-4fe0-a8c8-e0bcb270b889")
    IAppxBlockMapBlock : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetHash( 
            /* [out] */ __RPC__out UINT32 *bufferSize,
            /* [retval][size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*bufferSize) BYTE **buffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCompressedSize( 
            /* [retval][out] */ __RPC__out UINT32 *size) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxBlockMapBlockVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxBlockMapBlock * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxBlockMapBlock * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxBlockMapBlock * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetHash )( 
            __RPC__in IAppxBlockMapBlock * This,
            /* [out] */ __RPC__out UINT32 *bufferSize,
            /* [retval][size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*bufferSize) BYTE **buffer);
        
        HRESULT ( STDMETHODCALLTYPE *GetCompressedSize )( 
            __RPC__in IAppxBlockMapBlock * This,
            /* [retval][out] */ __RPC__out UINT32 *size);
        
        END_INTERFACE
    } IAppxBlockMapBlockVtbl;

    interface IAppxBlockMapBlock
    {
        CONST_VTBL struct IAppxBlockMapBlockVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxBlockMapBlock_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxBlockMapBlock_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxBlockMapBlock_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxBlockMapBlock_GetHash(This,bufferSize,buffer)	\
    ( (This)->lpVtbl -> GetHash(This,bufferSize,buffer) ) 

#define IAppxBlockMapBlock_GetCompressedSize(This,size)	\
    ( (This)->lpVtbl -> GetCompressedSize(This,size) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxBlockMapBlock_INTERFACE_DEFINED__ */


#ifndef __IAppxBlockMapBlocksEnumerator_INTERFACE_DEFINED__
#define __IAppxBlockMapBlocksEnumerator_INTERFACE_DEFINED__

/* interface IAppxBlockMapBlocksEnumerator */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxBlockMapBlocksEnumerator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6b429b5b-36ef-479e-b9eb-0c1482b49e16")
    IAppxBlockMapBlocksEnumerator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrent( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxBlockMapBlock **block) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHasCurrent( 
            /* [retval][out] */ __RPC__out BOOL *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ __RPC__out BOOL *hasNext) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxBlockMapBlocksEnumeratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxBlockMapBlocksEnumerator * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxBlockMapBlocksEnumerator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxBlockMapBlocksEnumerator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )( 
            __RPC__in IAppxBlockMapBlocksEnumerator * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxBlockMapBlock **block);
        
        HRESULT ( STDMETHODCALLTYPE *GetHasCurrent )( 
            __RPC__in IAppxBlockMapBlocksEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in IAppxBlockMapBlocksEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasNext);
        
        END_INTERFACE
    } IAppxBlockMapBlocksEnumeratorVtbl;

    interface IAppxBlockMapBlocksEnumerator
    {
        CONST_VTBL struct IAppxBlockMapBlocksEnumeratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxBlockMapBlocksEnumerator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxBlockMapBlocksEnumerator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxBlockMapBlocksEnumerator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxBlockMapBlocksEnumerator_GetCurrent(This,block)	\
    ( (This)->lpVtbl -> GetCurrent(This,block) ) 

#define IAppxBlockMapBlocksEnumerator_GetHasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> GetHasCurrent(This,hasCurrent) ) 

#define IAppxBlockMapBlocksEnumerator_MoveNext(This,hasNext)	\
    ( (This)->lpVtbl -> MoveNext(This,hasNext) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxBlockMapBlocksEnumerator_INTERFACE_DEFINED__ */


#ifndef __IAppxManifestReader_INTERFACE_DEFINED__
#define __IAppxManifestReader_INTERFACE_DEFINED__

/* interface IAppxManifestReader */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxManifestReader;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4e1bd148-55a0-4480-a3d1-15544710637c")
    IAppxManifestReader : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPackageId( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestPackageId **packageId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProperties( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestProperties **packageProperties) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPackageDependencies( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestPackageDependenciesEnumerator **dependencies) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCapabilities( 
            /* [retval][out] */ __RPC__out APPX_CAPABILITIES *capabilities) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetResources( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestResourcesEnumerator **resources) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDeviceCapabilities( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestDeviceCapabilitiesEnumerator **deviceCapabilities) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPrerequisite( 
            /* [string][in] */ __RPC__in_string LPCWSTR name,
            /* [retval][out] */ __RPC__out UINT64 *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetApplications( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestApplicationsEnumerator **applications) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStream( 
            /* [retval][out] */ __RPC__deref_out_opt IStream **manifestStream) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxManifestReaderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxManifestReader * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxManifestReader * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxManifestReader * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPackageId )( 
            __RPC__in IAppxManifestReader * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestPackageId **packageId);
        
        HRESULT ( STDMETHODCALLTYPE *GetProperties )( 
            __RPC__in IAppxManifestReader * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestProperties **packageProperties);
        
        HRESULT ( STDMETHODCALLTYPE *GetPackageDependencies )( 
            __RPC__in IAppxManifestReader * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestPackageDependenciesEnumerator **dependencies);
        
        HRESULT ( STDMETHODCALLTYPE *GetCapabilities )( 
            __RPC__in IAppxManifestReader * This,
            /* [retval][out] */ __RPC__out APPX_CAPABILITIES *capabilities);
        
        HRESULT ( STDMETHODCALLTYPE *GetResources )( 
            __RPC__in IAppxManifestReader * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestResourcesEnumerator **resources);
        
        HRESULT ( STDMETHODCALLTYPE *GetDeviceCapabilities )( 
            __RPC__in IAppxManifestReader * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestDeviceCapabilitiesEnumerator **deviceCapabilities);
        
        HRESULT ( STDMETHODCALLTYPE *GetPrerequisite )( 
            __RPC__in IAppxManifestReader * This,
            /* [string][in] */ __RPC__in_string LPCWSTR name,
            /* [retval][out] */ __RPC__out UINT64 *value);
        
        HRESULT ( STDMETHODCALLTYPE *GetApplications )( 
            __RPC__in IAppxManifestReader * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestApplicationsEnumerator **applications);
        
        HRESULT ( STDMETHODCALLTYPE *GetStream )( 
            __RPC__in IAppxManifestReader * This,
            /* [retval][out] */ __RPC__deref_out_opt IStream **manifestStream);
        
        END_INTERFACE
    } IAppxManifestReaderVtbl;

    interface IAppxManifestReader
    {
        CONST_VTBL struct IAppxManifestReaderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxManifestReader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxManifestReader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxManifestReader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxManifestReader_GetPackageId(This,packageId)	\
    ( (This)->lpVtbl -> GetPackageId(This,packageId) ) 

#define IAppxManifestReader_GetProperties(This,packageProperties)	\
    ( (This)->lpVtbl -> GetProperties(This,packageProperties) ) 

#define IAppxManifestReader_GetPackageDependencies(This,dependencies)	\
    ( (This)->lpVtbl -> GetPackageDependencies(This,dependencies) ) 

#define IAppxManifestReader_GetCapabilities(This,capabilities)	\
    ( (This)->lpVtbl -> GetCapabilities(This,capabilities) ) 

#define IAppxManifestReader_GetResources(This,resources)	\
    ( (This)->lpVtbl -> GetResources(This,resources) ) 

#define IAppxManifestReader_GetDeviceCapabilities(This,deviceCapabilities)	\
    ( (This)->lpVtbl -> GetDeviceCapabilities(This,deviceCapabilities) ) 

#define IAppxManifestReader_GetPrerequisite(This,name,value)	\
    ( (This)->lpVtbl -> GetPrerequisite(This,name,value) ) 

#define IAppxManifestReader_GetApplications(This,applications)	\
    ( (This)->lpVtbl -> GetApplications(This,applications) ) 

#define IAppxManifestReader_GetStream(This,manifestStream)	\
    ( (This)->lpVtbl -> GetStream(This,manifestStream) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxManifestReader_INTERFACE_DEFINED__ */


#ifndef __IAppxManifestReader2_INTERFACE_DEFINED__
#define __IAppxManifestReader2_INTERFACE_DEFINED__

/* interface IAppxManifestReader2 */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxManifestReader2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d06f67bc-b31d-4eba-a8af-638e73e77b4d")
    IAppxManifestReader2 : public IAppxManifestReader
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetQualifiedResources( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestQualifiedResourcesEnumerator **resources) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxManifestReader2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxManifestReader2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxManifestReader2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxManifestReader2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPackageId )( 
            __RPC__in IAppxManifestReader2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestPackageId **packageId);
        
        HRESULT ( STDMETHODCALLTYPE *GetProperties )( 
            __RPC__in IAppxManifestReader2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestProperties **packageProperties);
        
        HRESULT ( STDMETHODCALLTYPE *GetPackageDependencies )( 
            __RPC__in IAppxManifestReader2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestPackageDependenciesEnumerator **dependencies);
        
        HRESULT ( STDMETHODCALLTYPE *GetCapabilities )( 
            __RPC__in IAppxManifestReader2 * This,
            /* [retval][out] */ __RPC__out APPX_CAPABILITIES *capabilities);
        
        HRESULT ( STDMETHODCALLTYPE *GetResources )( 
            __RPC__in IAppxManifestReader2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestResourcesEnumerator **resources);
        
        HRESULT ( STDMETHODCALLTYPE *GetDeviceCapabilities )( 
            __RPC__in IAppxManifestReader2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestDeviceCapabilitiesEnumerator **deviceCapabilities);
        
        HRESULT ( STDMETHODCALLTYPE *GetPrerequisite )( 
            __RPC__in IAppxManifestReader2 * This,
            /* [string][in] */ __RPC__in_string LPCWSTR name,
            /* [retval][out] */ __RPC__out UINT64 *value);
        
        HRESULT ( STDMETHODCALLTYPE *GetApplications )( 
            __RPC__in IAppxManifestReader2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestApplicationsEnumerator **applications);
        
        HRESULT ( STDMETHODCALLTYPE *GetStream )( 
            __RPC__in IAppxManifestReader2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IStream **manifestStream);
        
        HRESULT ( STDMETHODCALLTYPE *GetQualifiedResources )( 
            __RPC__in IAppxManifestReader2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestQualifiedResourcesEnumerator **resources);
        
        END_INTERFACE
    } IAppxManifestReader2Vtbl;

    interface IAppxManifestReader2
    {
        CONST_VTBL struct IAppxManifestReader2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxManifestReader2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxManifestReader2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxManifestReader2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxManifestReader2_GetPackageId(This,packageId)	\
    ( (This)->lpVtbl -> GetPackageId(This,packageId) ) 

#define IAppxManifestReader2_GetProperties(This,packageProperties)	\
    ( (This)->lpVtbl -> GetProperties(This,packageProperties) ) 

#define IAppxManifestReader2_GetPackageDependencies(This,dependencies)	\
    ( (This)->lpVtbl -> GetPackageDependencies(This,dependencies) ) 

#define IAppxManifestReader2_GetCapabilities(This,capabilities)	\
    ( (This)->lpVtbl -> GetCapabilities(This,capabilities) ) 

#define IAppxManifestReader2_GetResources(This,resources)	\
    ( (This)->lpVtbl -> GetResources(This,resources) ) 

#define IAppxManifestReader2_GetDeviceCapabilities(This,deviceCapabilities)	\
    ( (This)->lpVtbl -> GetDeviceCapabilities(This,deviceCapabilities) ) 

#define IAppxManifestReader2_GetPrerequisite(This,name,value)	\
    ( (This)->lpVtbl -> GetPrerequisite(This,name,value) ) 

#define IAppxManifestReader2_GetApplications(This,applications)	\
    ( (This)->lpVtbl -> GetApplications(This,applications) ) 

#define IAppxManifestReader2_GetStream(This,manifestStream)	\
    ( (This)->lpVtbl -> GetStream(This,manifestStream) ) 


#define IAppxManifestReader2_GetQualifiedResources(This,resources)	\
    ( (This)->lpVtbl -> GetQualifiedResources(This,resources) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxManifestReader2_INTERFACE_DEFINED__ */


#ifndef __IAppxManifestReader3_INTERFACE_DEFINED__
#define __IAppxManifestReader3_INTERFACE_DEFINED__

/* interface IAppxManifestReader3 */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxManifestReader3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C43825AB-69B7-400A-9709-CC37F5A72D24")
    IAppxManifestReader3 : public IAppxManifestReader2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCapabilitiesByCapabilityClass( 
            /* [in] */ APPX_CAPABILITY_CLASS_TYPE capabilityClass,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestCapabilitiesEnumerator **capabilities) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTargetDeviceFamilies( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestTargetDeviceFamiliesEnumerator **targetDeviceFamilies) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxManifestReader3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxManifestReader3 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxManifestReader3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxManifestReader3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPackageId )( 
            __RPC__in IAppxManifestReader3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestPackageId **packageId);
        
        HRESULT ( STDMETHODCALLTYPE *GetProperties )( 
            __RPC__in IAppxManifestReader3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestProperties **packageProperties);
        
        HRESULT ( STDMETHODCALLTYPE *GetPackageDependencies )( 
            __RPC__in IAppxManifestReader3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestPackageDependenciesEnumerator **dependencies);
        
        HRESULT ( STDMETHODCALLTYPE *GetCapabilities )( 
            __RPC__in IAppxManifestReader3 * This,
            /* [retval][out] */ __RPC__out APPX_CAPABILITIES *capabilities);
        
        HRESULT ( STDMETHODCALLTYPE *GetResources )( 
            __RPC__in IAppxManifestReader3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestResourcesEnumerator **resources);
        
        HRESULT ( STDMETHODCALLTYPE *GetDeviceCapabilities )( 
            __RPC__in IAppxManifestReader3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestDeviceCapabilitiesEnumerator **deviceCapabilities);
        
        HRESULT ( STDMETHODCALLTYPE *GetPrerequisite )( 
            __RPC__in IAppxManifestReader3 * This,
            /* [string][in] */ __RPC__in_string LPCWSTR name,
            /* [retval][out] */ __RPC__out UINT64 *value);
        
        HRESULT ( STDMETHODCALLTYPE *GetApplications )( 
            __RPC__in IAppxManifestReader3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestApplicationsEnumerator **applications);
        
        HRESULT ( STDMETHODCALLTYPE *GetStream )( 
            __RPC__in IAppxManifestReader3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IStream **manifestStream);
        
        HRESULT ( STDMETHODCALLTYPE *GetQualifiedResources )( 
            __RPC__in IAppxManifestReader3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestQualifiedResourcesEnumerator **resources);
        
        HRESULT ( STDMETHODCALLTYPE *GetCapabilitiesByCapabilityClass )( 
            __RPC__in IAppxManifestReader3 * This,
            /* [in] */ APPX_CAPABILITY_CLASS_TYPE capabilityClass,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestCapabilitiesEnumerator **capabilities);
        
        HRESULT ( STDMETHODCALLTYPE *GetTargetDeviceFamilies )( 
            __RPC__in IAppxManifestReader3 * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestTargetDeviceFamiliesEnumerator **targetDeviceFamilies);
        
        END_INTERFACE
    } IAppxManifestReader3Vtbl;

    interface IAppxManifestReader3
    {
        CONST_VTBL struct IAppxManifestReader3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxManifestReader3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxManifestReader3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxManifestReader3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxManifestReader3_GetPackageId(This,packageId)	\
    ( (This)->lpVtbl -> GetPackageId(This,packageId) ) 

#define IAppxManifestReader3_GetProperties(This,packageProperties)	\
    ( (This)->lpVtbl -> GetProperties(This,packageProperties) ) 

#define IAppxManifestReader3_GetPackageDependencies(This,dependencies)	\
    ( (This)->lpVtbl -> GetPackageDependencies(This,dependencies) ) 

#define IAppxManifestReader3_GetCapabilities(This,capabilities)	\
    ( (This)->lpVtbl -> GetCapabilities(This,capabilities) ) 

#define IAppxManifestReader3_GetResources(This,resources)	\
    ( (This)->lpVtbl -> GetResources(This,resources) ) 

#define IAppxManifestReader3_GetDeviceCapabilities(This,deviceCapabilities)	\
    ( (This)->lpVtbl -> GetDeviceCapabilities(This,deviceCapabilities) ) 

#define IAppxManifestReader3_GetPrerequisite(This,name,value)	\
    ( (This)->lpVtbl -> GetPrerequisite(This,name,value) ) 

#define IAppxManifestReader3_GetApplications(This,applications)	\
    ( (This)->lpVtbl -> GetApplications(This,applications) ) 

#define IAppxManifestReader3_GetStream(This,manifestStream)	\
    ( (This)->lpVtbl -> GetStream(This,manifestStream) ) 


#define IAppxManifestReader3_GetQualifiedResources(This,resources)	\
    ( (This)->lpVtbl -> GetQualifiedResources(This,resources) ) 


#define IAppxManifestReader3_GetCapabilitiesByCapabilityClass(This,capabilityClass,capabilities)	\
    ( (This)->lpVtbl -> GetCapabilitiesByCapabilityClass(This,capabilityClass,capabilities) ) 

#define IAppxManifestReader3_GetTargetDeviceFamilies(This,targetDeviceFamilies)	\
    ( (This)->lpVtbl -> GetTargetDeviceFamilies(This,targetDeviceFamilies) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxManifestReader3_INTERFACE_DEFINED__ */


#ifndef __IAppxManifestReader4_INTERFACE_DEFINED__
#define __IAppxManifestReader4_INTERFACE_DEFINED__

/* interface IAppxManifestReader4 */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxManifestReader4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4579BB7C-741D-4161-B5A1-47BD3B78AD9B")
    IAppxManifestReader4 : public IAppxManifestReader3
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetOptionalPackageInfo( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestOptionalPackageInfo **optionalPackageInfo) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxManifestReader4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxManifestReader4 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxManifestReader4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxManifestReader4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPackageId )( 
            __RPC__in IAppxManifestReader4 * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestPackageId **packageId);
        
        HRESULT ( STDMETHODCALLTYPE *GetProperties )( 
            __RPC__in IAppxManifestReader4 * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestProperties **packageProperties);
        
        HRESULT ( STDMETHODCALLTYPE *GetPackageDependencies )( 
            __RPC__in IAppxManifestReader4 * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestPackageDependenciesEnumerator **dependencies);
        
        HRESULT ( STDMETHODCALLTYPE *GetCapabilities )( 
            __RPC__in IAppxManifestReader4 * This,
            /* [retval][out] */ __RPC__out APPX_CAPABILITIES *capabilities);
        
        HRESULT ( STDMETHODCALLTYPE *GetResources )( 
            __RPC__in IAppxManifestReader4 * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestResourcesEnumerator **resources);
        
        HRESULT ( STDMETHODCALLTYPE *GetDeviceCapabilities )( 
            __RPC__in IAppxManifestReader4 * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestDeviceCapabilitiesEnumerator **deviceCapabilities);
        
        HRESULT ( STDMETHODCALLTYPE *GetPrerequisite )( 
            __RPC__in IAppxManifestReader4 * This,
            /* [string][in] */ __RPC__in_string LPCWSTR name,
            /* [retval][out] */ __RPC__out UINT64 *value);
        
        HRESULT ( STDMETHODCALLTYPE *GetApplications )( 
            __RPC__in IAppxManifestReader4 * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestApplicationsEnumerator **applications);
        
        HRESULT ( STDMETHODCALLTYPE *GetStream )( 
            __RPC__in IAppxManifestReader4 * This,
            /* [retval][out] */ __RPC__deref_out_opt IStream **manifestStream);
        
        HRESULT ( STDMETHODCALLTYPE *GetQualifiedResources )( 
            __RPC__in IAppxManifestReader4 * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestQualifiedResourcesEnumerator **resources);
        
        HRESULT ( STDMETHODCALLTYPE *GetCapabilitiesByCapabilityClass )( 
            __RPC__in IAppxManifestReader4 * This,
            /* [in] */ APPX_CAPABILITY_CLASS_TYPE capabilityClass,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestCapabilitiesEnumerator **capabilities);
        
        HRESULT ( STDMETHODCALLTYPE *GetTargetDeviceFamilies )( 
            __RPC__in IAppxManifestReader4 * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestTargetDeviceFamiliesEnumerator **targetDeviceFamilies);
        
        HRESULT ( STDMETHODCALLTYPE *GetOptionalPackageInfo )( 
            __RPC__in IAppxManifestReader4 * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestOptionalPackageInfo **optionalPackageInfo);
        
        END_INTERFACE
    } IAppxManifestReader4Vtbl;

    interface IAppxManifestReader4
    {
        CONST_VTBL struct IAppxManifestReader4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxManifestReader4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxManifestReader4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxManifestReader4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxManifestReader4_GetPackageId(This,packageId)	\
    ( (This)->lpVtbl -> GetPackageId(This,packageId) ) 

#define IAppxManifestReader4_GetProperties(This,packageProperties)	\
    ( (This)->lpVtbl -> GetProperties(This,packageProperties) ) 

#define IAppxManifestReader4_GetPackageDependencies(This,dependencies)	\
    ( (This)->lpVtbl -> GetPackageDependencies(This,dependencies) ) 

#define IAppxManifestReader4_GetCapabilities(This,capabilities)	\
    ( (This)->lpVtbl -> GetCapabilities(This,capabilities) ) 

#define IAppxManifestReader4_GetResources(This,resources)	\
    ( (This)->lpVtbl -> GetResources(This,resources) ) 

#define IAppxManifestReader4_GetDeviceCapabilities(This,deviceCapabilities)	\
    ( (This)->lpVtbl -> GetDeviceCapabilities(This,deviceCapabilities) ) 

#define IAppxManifestReader4_GetPrerequisite(This,name,value)	\
    ( (This)->lpVtbl -> GetPrerequisite(This,name,value) ) 

#define IAppxManifestReader4_GetApplications(This,applications)	\
    ( (This)->lpVtbl -> GetApplications(This,applications) ) 

#define IAppxManifestReader4_GetStream(This,manifestStream)	\
    ( (This)->lpVtbl -> GetStream(This,manifestStream) ) 


#define IAppxManifestReader4_GetQualifiedResources(This,resources)	\
    ( (This)->lpVtbl -> GetQualifiedResources(This,resources) ) 


#define IAppxManifestReader4_GetCapabilitiesByCapabilityClass(This,capabilityClass,capabilities)	\
    ( (This)->lpVtbl -> GetCapabilitiesByCapabilityClass(This,capabilityClass,capabilities) ) 

#define IAppxManifestReader4_GetTargetDeviceFamilies(This,targetDeviceFamilies)	\
    ( (This)->lpVtbl -> GetTargetDeviceFamilies(This,targetDeviceFamilies) ) 


#define IAppxManifestReader4_GetOptionalPackageInfo(This,optionalPackageInfo)	\
    ( (This)->lpVtbl -> GetOptionalPackageInfo(This,optionalPackageInfo) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxManifestReader4_INTERFACE_DEFINED__ */


#ifndef __IAppxManifestReader5_INTERFACE_DEFINED__
#define __IAppxManifestReader5_INTERFACE_DEFINED__

/* interface IAppxManifestReader5 */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxManifestReader5;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8D7AE132-A690-4C00-B75A-6AAE1FEAAC80")
    IAppxManifestReader5 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetMainPackageDependencies( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestMainPackageDependenciesEnumerator **mainPackageDependencies) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxManifestReader5Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxManifestReader5 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxManifestReader5 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxManifestReader5 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetMainPackageDependencies )( 
            __RPC__in IAppxManifestReader5 * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestMainPackageDependenciesEnumerator **mainPackageDependencies);
        
        END_INTERFACE
    } IAppxManifestReader5Vtbl;

    interface IAppxManifestReader5
    {
        CONST_VTBL struct IAppxManifestReader5Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxManifestReader5_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxManifestReader5_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxManifestReader5_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxManifestReader5_GetMainPackageDependencies(This,mainPackageDependencies)	\
    ( (This)->lpVtbl -> GetMainPackageDependencies(This,mainPackageDependencies) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxManifestReader5_INTERFACE_DEFINED__ */


#ifndef __IAppxManifestOptionalPackageInfo_INTERFACE_DEFINED__
#define __IAppxManifestOptionalPackageInfo_INTERFACE_DEFINED__

/* interface IAppxManifestOptionalPackageInfo */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxManifestOptionalPackageInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2634847D-5B5D-4FE5-A243-002FF95EDC7E")
    IAppxManifestOptionalPackageInfo : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetIsOptionalPackage( 
            /* [retval][out] */ __RPC__out BOOL *isOptionalPackage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMainPackageName( 
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *mainPackageName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxManifestOptionalPackageInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxManifestOptionalPackageInfo * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxManifestOptionalPackageInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxManifestOptionalPackageInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIsOptionalPackage )( 
            __RPC__in IAppxManifestOptionalPackageInfo * This,
            /* [retval][out] */ __RPC__out BOOL *isOptionalPackage);
        
        HRESULT ( STDMETHODCALLTYPE *GetMainPackageName )( 
            __RPC__in IAppxManifestOptionalPackageInfo * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *mainPackageName);
        
        END_INTERFACE
    } IAppxManifestOptionalPackageInfoVtbl;

    interface IAppxManifestOptionalPackageInfo
    {
        CONST_VTBL struct IAppxManifestOptionalPackageInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxManifestOptionalPackageInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxManifestOptionalPackageInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxManifestOptionalPackageInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxManifestOptionalPackageInfo_GetIsOptionalPackage(This,isOptionalPackage)	\
    ( (This)->lpVtbl -> GetIsOptionalPackage(This,isOptionalPackage) ) 

#define IAppxManifestOptionalPackageInfo_GetMainPackageName(This,mainPackageName)	\
    ( (This)->lpVtbl -> GetMainPackageName(This,mainPackageName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxManifestOptionalPackageInfo_INTERFACE_DEFINED__ */


#ifndef __IAppxManifestMainPackageDependenciesEnumerator_INTERFACE_DEFINED__
#define __IAppxManifestMainPackageDependenciesEnumerator_INTERFACE_DEFINED__

/* interface IAppxManifestMainPackageDependenciesEnumerator */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxManifestMainPackageDependenciesEnumerator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A99C4F00-51D2-4F0F-BA46-7ED5255EBDFF")
    IAppxManifestMainPackageDependenciesEnumerator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrent( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestMainPackageDependency **mainPackageDependency) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHasCurrent( 
            /* [retval][out] */ __RPC__out BOOL *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ __RPC__out BOOL *hasNext) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxManifestMainPackageDependenciesEnumeratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxManifestMainPackageDependenciesEnumerator * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxManifestMainPackageDependenciesEnumerator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxManifestMainPackageDependenciesEnumerator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )( 
            __RPC__in IAppxManifestMainPackageDependenciesEnumerator * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestMainPackageDependency **mainPackageDependency);
        
        HRESULT ( STDMETHODCALLTYPE *GetHasCurrent )( 
            __RPC__in IAppxManifestMainPackageDependenciesEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in IAppxManifestMainPackageDependenciesEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasNext);
        
        END_INTERFACE
    } IAppxManifestMainPackageDependenciesEnumeratorVtbl;

    interface IAppxManifestMainPackageDependenciesEnumerator
    {
        CONST_VTBL struct IAppxManifestMainPackageDependenciesEnumeratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxManifestMainPackageDependenciesEnumerator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxManifestMainPackageDependenciesEnumerator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxManifestMainPackageDependenciesEnumerator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxManifestMainPackageDependenciesEnumerator_GetCurrent(This,mainPackageDependency)	\
    ( (This)->lpVtbl -> GetCurrent(This,mainPackageDependency) ) 

#define IAppxManifestMainPackageDependenciesEnumerator_GetHasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> GetHasCurrent(This,hasCurrent) ) 

#define IAppxManifestMainPackageDependenciesEnumerator_MoveNext(This,hasNext)	\
    ( (This)->lpVtbl -> MoveNext(This,hasNext) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxManifestMainPackageDependenciesEnumerator_INTERFACE_DEFINED__ */


#ifndef __IAppxManifestMainPackageDependency_INTERFACE_DEFINED__
#define __IAppxManifestMainPackageDependency_INTERFACE_DEFINED__

/* interface IAppxManifestMainPackageDependency */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxManifestMainPackageDependency;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("05D0611C-BC29-46D5-97E2-84B9C79BD8AE")
    IAppxManifestMainPackageDependency : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPublisher( 
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *publisher) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPackageFamilyName( 
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *packageFamilyName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxManifestMainPackageDependencyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxManifestMainPackageDependency * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxManifestMainPackageDependency * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxManifestMainPackageDependency * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            __RPC__in IAppxManifestMainPackageDependency * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *GetPublisher )( 
            __RPC__in IAppxManifestMainPackageDependency * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *publisher);
        
        HRESULT ( STDMETHODCALLTYPE *GetPackageFamilyName )( 
            __RPC__in IAppxManifestMainPackageDependency * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *packageFamilyName);
        
        END_INTERFACE
    } IAppxManifestMainPackageDependencyVtbl;

    interface IAppxManifestMainPackageDependency
    {
        CONST_VTBL struct IAppxManifestMainPackageDependencyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxManifestMainPackageDependency_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxManifestMainPackageDependency_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxManifestMainPackageDependency_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxManifestMainPackageDependency_GetName(This,name)	\
    ( (This)->lpVtbl -> GetName(This,name) ) 

#define IAppxManifestMainPackageDependency_GetPublisher(This,publisher)	\
    ( (This)->lpVtbl -> GetPublisher(This,publisher) ) 

#define IAppxManifestMainPackageDependency_GetPackageFamilyName(This,packageFamilyName)	\
    ( (This)->lpVtbl -> GetPackageFamilyName(This,packageFamilyName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxManifestMainPackageDependency_INTERFACE_DEFINED__ */


#ifndef __IAppxManifestPackageId_INTERFACE_DEFINED__
#define __IAppxManifestPackageId_INTERFACE_DEFINED__

/* interface IAppxManifestPackageId */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxManifestPackageId;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("283ce2d7-7153-4a91-9649-7a0f7240945f")
    IAppxManifestPackageId : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetArchitecture( 
            /* [retval][out] */ __RPC__out APPX_PACKAGE_ARCHITECTURE *architecture) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPublisher( 
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *publisher) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVersion( 
            /* [retval][out] */ __RPC__out UINT64 *packageVersion) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetResourceId( 
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *resourceId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ComparePublisher( 
            /* [string][in] */ __RPC__in_string LPCWSTR other,
            /* [retval][out] */ __RPC__out BOOL *isSame) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPackageFullName( 
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *packageFullName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPackageFamilyName( 
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *packageFamilyName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxManifestPackageIdVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxManifestPackageId * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxManifestPackageId * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxManifestPackageId * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            __RPC__in IAppxManifestPackageId * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *GetArchitecture )( 
            __RPC__in IAppxManifestPackageId * This,
            /* [retval][out] */ __RPC__out APPX_PACKAGE_ARCHITECTURE *architecture);
        
        HRESULT ( STDMETHODCALLTYPE *GetPublisher )( 
            __RPC__in IAppxManifestPackageId * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *publisher);
        
        HRESULT ( STDMETHODCALLTYPE *GetVersion )( 
            __RPC__in IAppxManifestPackageId * This,
            /* [retval][out] */ __RPC__out UINT64 *packageVersion);
        
        HRESULT ( STDMETHODCALLTYPE *GetResourceId )( 
            __RPC__in IAppxManifestPackageId * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *resourceId);
        
        HRESULT ( STDMETHODCALLTYPE *ComparePublisher )( 
            __RPC__in IAppxManifestPackageId * This,
            /* [string][in] */ __RPC__in_string LPCWSTR other,
            /* [retval][out] */ __RPC__out BOOL *isSame);
        
        HRESULT ( STDMETHODCALLTYPE *GetPackageFullName )( 
            __RPC__in IAppxManifestPackageId * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *packageFullName);
        
        HRESULT ( STDMETHODCALLTYPE *GetPackageFamilyName )( 
            __RPC__in IAppxManifestPackageId * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *packageFamilyName);
        
        END_INTERFACE
    } IAppxManifestPackageIdVtbl;

    interface IAppxManifestPackageId
    {
        CONST_VTBL struct IAppxManifestPackageIdVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxManifestPackageId_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxManifestPackageId_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxManifestPackageId_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxManifestPackageId_GetName(This,name)	\
    ( (This)->lpVtbl -> GetName(This,name) ) 

#define IAppxManifestPackageId_GetArchitecture(This,architecture)	\
    ( (This)->lpVtbl -> GetArchitecture(This,architecture) ) 

#define IAppxManifestPackageId_GetPublisher(This,publisher)	\
    ( (This)->lpVtbl -> GetPublisher(This,publisher) ) 

#define IAppxManifestPackageId_GetVersion(This,packageVersion)	\
    ( (This)->lpVtbl -> GetVersion(This,packageVersion) ) 

#define IAppxManifestPackageId_GetResourceId(This,resourceId)	\
    ( (This)->lpVtbl -> GetResourceId(This,resourceId) ) 

#define IAppxManifestPackageId_ComparePublisher(This,other,isSame)	\
    ( (This)->lpVtbl -> ComparePublisher(This,other,isSame) ) 

#define IAppxManifestPackageId_GetPackageFullName(This,packageFullName)	\
    ( (This)->lpVtbl -> GetPackageFullName(This,packageFullName) ) 

#define IAppxManifestPackageId_GetPackageFamilyName(This,packageFamilyName)	\
    ( (This)->lpVtbl -> GetPackageFamilyName(This,packageFamilyName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxManifestPackageId_INTERFACE_DEFINED__ */


#ifndef __IAppxManifestPackageId2_INTERFACE_DEFINED__
#define __IAppxManifestPackageId2_INTERFACE_DEFINED__

/* interface IAppxManifestPackageId2 */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxManifestPackageId2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2256999d-d617-42f1-880e-0ba4542319d5")
    IAppxManifestPackageId2 : public IAppxManifestPackageId
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetArchitecture2( 
            /* [retval][out] */ __RPC__out APPX_PACKAGE_ARCHITECTURE2 *architecture) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxManifestPackageId2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxManifestPackageId2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxManifestPackageId2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxManifestPackageId2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            __RPC__in IAppxManifestPackageId2 * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *GetArchitecture )( 
            __RPC__in IAppxManifestPackageId2 * This,
            /* [retval][out] */ __RPC__out APPX_PACKAGE_ARCHITECTURE *architecture);
        
        HRESULT ( STDMETHODCALLTYPE *GetPublisher )( 
            __RPC__in IAppxManifestPackageId2 * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *publisher);
        
        HRESULT ( STDMETHODCALLTYPE *GetVersion )( 
            __RPC__in IAppxManifestPackageId2 * This,
            /* [retval][out] */ __RPC__out UINT64 *packageVersion);
        
        HRESULT ( STDMETHODCALLTYPE *GetResourceId )( 
            __RPC__in IAppxManifestPackageId2 * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *resourceId);
        
        HRESULT ( STDMETHODCALLTYPE *ComparePublisher )( 
            __RPC__in IAppxManifestPackageId2 * This,
            /* [string][in] */ __RPC__in_string LPCWSTR other,
            /* [retval][out] */ __RPC__out BOOL *isSame);
        
        HRESULT ( STDMETHODCALLTYPE *GetPackageFullName )( 
            __RPC__in IAppxManifestPackageId2 * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *packageFullName);
        
        HRESULT ( STDMETHODCALLTYPE *GetPackageFamilyName )( 
            __RPC__in IAppxManifestPackageId2 * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *packageFamilyName);
        
        HRESULT ( STDMETHODCALLTYPE *GetArchitecture2 )( 
            __RPC__in IAppxManifestPackageId2 * This,
            /* [retval][out] */ __RPC__out APPX_PACKAGE_ARCHITECTURE2 *architecture);
        
        END_INTERFACE
    } IAppxManifestPackageId2Vtbl;

    interface IAppxManifestPackageId2
    {
        CONST_VTBL struct IAppxManifestPackageId2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxManifestPackageId2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxManifestPackageId2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxManifestPackageId2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxManifestPackageId2_GetName(This,name)	\
    ( (This)->lpVtbl -> GetName(This,name) ) 

#define IAppxManifestPackageId2_GetArchitecture(This,architecture)	\
    ( (This)->lpVtbl -> GetArchitecture(This,architecture) ) 

#define IAppxManifestPackageId2_GetPublisher(This,publisher)	\
    ( (This)->lpVtbl -> GetPublisher(This,publisher) ) 

#define IAppxManifestPackageId2_GetVersion(This,packageVersion)	\
    ( (This)->lpVtbl -> GetVersion(This,packageVersion) ) 

#define IAppxManifestPackageId2_GetResourceId(This,resourceId)	\
    ( (This)->lpVtbl -> GetResourceId(This,resourceId) ) 

#define IAppxManifestPackageId2_ComparePublisher(This,other,isSame)	\
    ( (This)->lpVtbl -> ComparePublisher(This,other,isSame) ) 

#define IAppxManifestPackageId2_GetPackageFullName(This,packageFullName)	\
    ( (This)->lpVtbl -> GetPackageFullName(This,packageFullName) ) 

#define IAppxManifestPackageId2_GetPackageFamilyName(This,packageFamilyName)	\
    ( (This)->lpVtbl -> GetPackageFamilyName(This,packageFamilyName) ) 


#define IAppxManifestPackageId2_GetArchitecture2(This,architecture)	\
    ( (This)->lpVtbl -> GetArchitecture2(This,architecture) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxManifestPackageId2_INTERFACE_DEFINED__ */


#ifndef __IAppxManifestProperties_INTERFACE_DEFINED__
#define __IAppxManifestProperties_INTERFACE_DEFINED__

/* interface IAppxManifestProperties */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxManifestProperties;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("03faf64d-f26f-4b2c-aaf7-8fe7789b8bca")
    IAppxManifestProperties : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetBoolValue( 
            /* [string][in] */ __RPC__in_string LPCWSTR name,
            /* [retval][out] */ __RPC__out BOOL *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStringValue( 
            /* [string][in] */ __RPC__in_string LPCWSTR name,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxManifestPropertiesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxManifestProperties * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxManifestProperties * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxManifestProperties * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetBoolValue )( 
            __RPC__in IAppxManifestProperties * This,
            /* [string][in] */ __RPC__in_string LPCWSTR name,
            /* [retval][out] */ __RPC__out BOOL *value);
        
        HRESULT ( STDMETHODCALLTYPE *GetStringValue )( 
            __RPC__in IAppxManifestProperties * This,
            /* [string][in] */ __RPC__in_string LPCWSTR name,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *value);
        
        END_INTERFACE
    } IAppxManifestPropertiesVtbl;

    interface IAppxManifestProperties
    {
        CONST_VTBL struct IAppxManifestPropertiesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxManifestProperties_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxManifestProperties_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxManifestProperties_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxManifestProperties_GetBoolValue(This,name,value)	\
    ( (This)->lpVtbl -> GetBoolValue(This,name,value) ) 

#define IAppxManifestProperties_GetStringValue(This,name,value)	\
    ( (This)->lpVtbl -> GetStringValue(This,name,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxManifestProperties_INTERFACE_DEFINED__ */


#ifndef __IAppxManifestTargetDeviceFamiliesEnumerator_INTERFACE_DEFINED__
#define __IAppxManifestTargetDeviceFamiliesEnumerator_INTERFACE_DEFINED__

/* interface IAppxManifestTargetDeviceFamiliesEnumerator */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxManifestTargetDeviceFamiliesEnumerator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("36537F36-27A4-4788-88C0-733819575017")
    IAppxManifestTargetDeviceFamiliesEnumerator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrent( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestTargetDeviceFamily **targetDeviceFamily) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHasCurrent( 
            /* [retval][out] */ __RPC__out BOOL *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ __RPC__out BOOL *hasNext) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxManifestTargetDeviceFamiliesEnumeratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxManifestTargetDeviceFamiliesEnumerator * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxManifestTargetDeviceFamiliesEnumerator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxManifestTargetDeviceFamiliesEnumerator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )( 
            __RPC__in IAppxManifestTargetDeviceFamiliesEnumerator * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestTargetDeviceFamily **targetDeviceFamily);
        
        HRESULT ( STDMETHODCALLTYPE *GetHasCurrent )( 
            __RPC__in IAppxManifestTargetDeviceFamiliesEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in IAppxManifestTargetDeviceFamiliesEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasNext);
        
        END_INTERFACE
    } IAppxManifestTargetDeviceFamiliesEnumeratorVtbl;

    interface IAppxManifestTargetDeviceFamiliesEnumerator
    {
        CONST_VTBL struct IAppxManifestTargetDeviceFamiliesEnumeratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxManifestTargetDeviceFamiliesEnumerator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxManifestTargetDeviceFamiliesEnumerator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxManifestTargetDeviceFamiliesEnumerator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxManifestTargetDeviceFamiliesEnumerator_GetCurrent(This,targetDeviceFamily)	\
    ( (This)->lpVtbl -> GetCurrent(This,targetDeviceFamily) ) 

#define IAppxManifestTargetDeviceFamiliesEnumerator_GetHasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> GetHasCurrent(This,hasCurrent) ) 

#define IAppxManifestTargetDeviceFamiliesEnumerator_MoveNext(This,hasNext)	\
    ( (This)->lpVtbl -> MoveNext(This,hasNext) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxManifestTargetDeviceFamiliesEnumerator_INTERFACE_DEFINED__ */


#ifndef __IAppxManifestTargetDeviceFamily_INTERFACE_DEFINED__
#define __IAppxManifestTargetDeviceFamily_INTERFACE_DEFINED__

/* interface IAppxManifestTargetDeviceFamily */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxManifestTargetDeviceFamily;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9091B09B-C8D5-4F31-8687-A338259FAEFB")
    IAppxManifestTargetDeviceFamily : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMinVersion( 
            /* [retval][out] */ __RPC__out UINT64 *minVersion) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaxVersionTested( 
            /* [retval][out] */ __RPC__out UINT64 *maxVersionTested) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxManifestTargetDeviceFamilyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxManifestTargetDeviceFamily * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxManifestTargetDeviceFamily * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxManifestTargetDeviceFamily * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            __RPC__in IAppxManifestTargetDeviceFamily * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *GetMinVersion )( 
            __RPC__in IAppxManifestTargetDeviceFamily * This,
            /* [retval][out] */ __RPC__out UINT64 *minVersion);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaxVersionTested )( 
            __RPC__in IAppxManifestTargetDeviceFamily * This,
            /* [retval][out] */ __RPC__out UINT64 *maxVersionTested);
        
        END_INTERFACE
    } IAppxManifestTargetDeviceFamilyVtbl;

    interface IAppxManifestTargetDeviceFamily
    {
        CONST_VTBL struct IAppxManifestTargetDeviceFamilyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxManifestTargetDeviceFamily_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxManifestTargetDeviceFamily_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxManifestTargetDeviceFamily_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxManifestTargetDeviceFamily_GetName(This,name)	\
    ( (This)->lpVtbl -> GetName(This,name) ) 

#define IAppxManifestTargetDeviceFamily_GetMinVersion(This,minVersion)	\
    ( (This)->lpVtbl -> GetMinVersion(This,minVersion) ) 

#define IAppxManifestTargetDeviceFamily_GetMaxVersionTested(This,maxVersionTested)	\
    ( (This)->lpVtbl -> GetMaxVersionTested(This,maxVersionTested) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxManifestTargetDeviceFamily_INTERFACE_DEFINED__ */


#ifndef __IAppxManifestPackageDependenciesEnumerator_INTERFACE_DEFINED__
#define __IAppxManifestPackageDependenciesEnumerator_INTERFACE_DEFINED__

/* interface IAppxManifestPackageDependenciesEnumerator */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxManifestPackageDependenciesEnumerator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b43bbcf9-65a6-42dd-bac0-8c6741e7f5a4")
    IAppxManifestPackageDependenciesEnumerator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrent( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestPackageDependency **dependency) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHasCurrent( 
            /* [retval][out] */ __RPC__out BOOL *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ __RPC__out BOOL *hasNext) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxManifestPackageDependenciesEnumeratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxManifestPackageDependenciesEnumerator * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxManifestPackageDependenciesEnumerator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxManifestPackageDependenciesEnumerator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )( 
            __RPC__in IAppxManifestPackageDependenciesEnumerator * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestPackageDependency **dependency);
        
        HRESULT ( STDMETHODCALLTYPE *GetHasCurrent )( 
            __RPC__in IAppxManifestPackageDependenciesEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in IAppxManifestPackageDependenciesEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasNext);
        
        END_INTERFACE
    } IAppxManifestPackageDependenciesEnumeratorVtbl;

    interface IAppxManifestPackageDependenciesEnumerator
    {
        CONST_VTBL struct IAppxManifestPackageDependenciesEnumeratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxManifestPackageDependenciesEnumerator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxManifestPackageDependenciesEnumerator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxManifestPackageDependenciesEnumerator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxManifestPackageDependenciesEnumerator_GetCurrent(This,dependency)	\
    ( (This)->lpVtbl -> GetCurrent(This,dependency) ) 

#define IAppxManifestPackageDependenciesEnumerator_GetHasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> GetHasCurrent(This,hasCurrent) ) 

#define IAppxManifestPackageDependenciesEnumerator_MoveNext(This,hasNext)	\
    ( (This)->lpVtbl -> MoveNext(This,hasNext) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxManifestPackageDependenciesEnumerator_INTERFACE_DEFINED__ */


#ifndef __IAppxManifestPackageDependency_INTERFACE_DEFINED__
#define __IAppxManifestPackageDependency_INTERFACE_DEFINED__

/* interface IAppxManifestPackageDependency */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxManifestPackageDependency;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e4946b59-733e-43f0-a724-3bde4c1285a0")
    IAppxManifestPackageDependency : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPublisher( 
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *publisher) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMinVersion( 
            /* [retval][out] */ __RPC__out UINT64 *minVersion) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxManifestPackageDependencyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxManifestPackageDependency * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxManifestPackageDependency * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxManifestPackageDependency * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            __RPC__in IAppxManifestPackageDependency * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *GetPublisher )( 
            __RPC__in IAppxManifestPackageDependency * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *publisher);
        
        HRESULT ( STDMETHODCALLTYPE *GetMinVersion )( 
            __RPC__in IAppxManifestPackageDependency * This,
            /* [retval][out] */ __RPC__out UINT64 *minVersion);
        
        END_INTERFACE
    } IAppxManifestPackageDependencyVtbl;

    interface IAppxManifestPackageDependency
    {
        CONST_VTBL struct IAppxManifestPackageDependencyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxManifestPackageDependency_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxManifestPackageDependency_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxManifestPackageDependency_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxManifestPackageDependency_GetName(This,name)	\
    ( (This)->lpVtbl -> GetName(This,name) ) 

#define IAppxManifestPackageDependency_GetPublisher(This,publisher)	\
    ( (This)->lpVtbl -> GetPublisher(This,publisher) ) 

#define IAppxManifestPackageDependency_GetMinVersion(This,minVersion)	\
    ( (This)->lpVtbl -> GetMinVersion(This,minVersion) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxManifestPackageDependency_INTERFACE_DEFINED__ */


#ifndef __IAppxManifestPackageDependency2_INTERFACE_DEFINED__
#define __IAppxManifestPackageDependency2_INTERFACE_DEFINED__

/* interface IAppxManifestPackageDependency2 */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxManifestPackageDependency2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DDA0B713-F3FF-49D3-898A-2786780C5D98")
    IAppxManifestPackageDependency2 : public IAppxManifestPackageDependency
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetMaxMajorVersionTested( 
            /* [retval][out] */ __RPC__out UINT16 *maxMajorVersionTested) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxManifestPackageDependency2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxManifestPackageDependency2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxManifestPackageDependency2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxManifestPackageDependency2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            __RPC__in IAppxManifestPackageDependency2 * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *GetPublisher )( 
            __RPC__in IAppxManifestPackageDependency2 * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *publisher);
        
        HRESULT ( STDMETHODCALLTYPE *GetMinVersion )( 
            __RPC__in IAppxManifestPackageDependency2 * This,
            /* [retval][out] */ __RPC__out UINT64 *minVersion);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaxMajorVersionTested )( 
            __RPC__in IAppxManifestPackageDependency2 * This,
            /* [retval][out] */ __RPC__out UINT16 *maxMajorVersionTested);
        
        END_INTERFACE
    } IAppxManifestPackageDependency2Vtbl;

    interface IAppxManifestPackageDependency2
    {
        CONST_VTBL struct IAppxManifestPackageDependency2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxManifestPackageDependency2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxManifestPackageDependency2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxManifestPackageDependency2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxManifestPackageDependency2_GetName(This,name)	\
    ( (This)->lpVtbl -> GetName(This,name) ) 

#define IAppxManifestPackageDependency2_GetPublisher(This,publisher)	\
    ( (This)->lpVtbl -> GetPublisher(This,publisher) ) 

#define IAppxManifestPackageDependency2_GetMinVersion(This,minVersion)	\
    ( (This)->lpVtbl -> GetMinVersion(This,minVersion) ) 


#define IAppxManifestPackageDependency2_GetMaxMajorVersionTested(This,maxMajorVersionTested)	\
    ( (This)->lpVtbl -> GetMaxMajorVersionTested(This,maxMajorVersionTested) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxManifestPackageDependency2_INTERFACE_DEFINED__ */


#ifndef __IAppxManifestResourcesEnumerator_INTERFACE_DEFINED__
#define __IAppxManifestResourcesEnumerator_INTERFACE_DEFINED__

/* interface IAppxManifestResourcesEnumerator */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxManifestResourcesEnumerator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("de4dfbbd-881a-48bb-858c-d6f2baeae6ed")
    IAppxManifestResourcesEnumerator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrent( 
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *resource) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHasCurrent( 
            /* [retval][out] */ __RPC__out BOOL *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ __RPC__out BOOL *hasNext) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxManifestResourcesEnumeratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxManifestResourcesEnumerator * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxManifestResourcesEnumerator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxManifestResourcesEnumerator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )( 
            __RPC__in IAppxManifestResourcesEnumerator * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *resource);
        
        HRESULT ( STDMETHODCALLTYPE *GetHasCurrent )( 
            __RPC__in IAppxManifestResourcesEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in IAppxManifestResourcesEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasNext);
        
        END_INTERFACE
    } IAppxManifestResourcesEnumeratorVtbl;

    interface IAppxManifestResourcesEnumerator
    {
        CONST_VTBL struct IAppxManifestResourcesEnumeratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxManifestResourcesEnumerator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxManifestResourcesEnumerator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxManifestResourcesEnumerator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxManifestResourcesEnumerator_GetCurrent(This,resource)	\
    ( (This)->lpVtbl -> GetCurrent(This,resource) ) 

#define IAppxManifestResourcesEnumerator_GetHasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> GetHasCurrent(This,hasCurrent) ) 

#define IAppxManifestResourcesEnumerator_MoveNext(This,hasNext)	\
    ( (This)->lpVtbl -> MoveNext(This,hasNext) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxManifestResourcesEnumerator_INTERFACE_DEFINED__ */


#ifndef __IAppxManifestDeviceCapabilitiesEnumerator_INTERFACE_DEFINED__
#define __IAppxManifestDeviceCapabilitiesEnumerator_INTERFACE_DEFINED__

/* interface IAppxManifestDeviceCapabilitiesEnumerator */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxManifestDeviceCapabilitiesEnumerator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("30204541-427b-4a1c-bacf-655bf463a540")
    IAppxManifestDeviceCapabilitiesEnumerator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrent( 
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *deviceCapability) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHasCurrent( 
            /* [retval][out] */ __RPC__out BOOL *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ __RPC__out BOOL *hasNext) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxManifestDeviceCapabilitiesEnumeratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxManifestDeviceCapabilitiesEnumerator * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxManifestDeviceCapabilitiesEnumerator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxManifestDeviceCapabilitiesEnumerator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )( 
            __RPC__in IAppxManifestDeviceCapabilitiesEnumerator * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *deviceCapability);
        
        HRESULT ( STDMETHODCALLTYPE *GetHasCurrent )( 
            __RPC__in IAppxManifestDeviceCapabilitiesEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in IAppxManifestDeviceCapabilitiesEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasNext);
        
        END_INTERFACE
    } IAppxManifestDeviceCapabilitiesEnumeratorVtbl;

    interface IAppxManifestDeviceCapabilitiesEnumerator
    {
        CONST_VTBL struct IAppxManifestDeviceCapabilitiesEnumeratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxManifestDeviceCapabilitiesEnumerator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxManifestDeviceCapabilitiesEnumerator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxManifestDeviceCapabilitiesEnumerator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxManifestDeviceCapabilitiesEnumerator_GetCurrent(This,deviceCapability)	\
    ( (This)->lpVtbl -> GetCurrent(This,deviceCapability) ) 

#define IAppxManifestDeviceCapabilitiesEnumerator_GetHasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> GetHasCurrent(This,hasCurrent) ) 

#define IAppxManifestDeviceCapabilitiesEnumerator_MoveNext(This,hasNext)	\
    ( (This)->lpVtbl -> MoveNext(This,hasNext) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxManifestDeviceCapabilitiesEnumerator_INTERFACE_DEFINED__ */


#ifndef __IAppxManifestCapabilitiesEnumerator_INTERFACE_DEFINED__
#define __IAppxManifestCapabilitiesEnumerator_INTERFACE_DEFINED__

/* interface IAppxManifestCapabilitiesEnumerator */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxManifestCapabilitiesEnumerator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("11D22258-F470-42C1-B291-8361C5437E41")
    IAppxManifestCapabilitiesEnumerator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrent( 
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *capability) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHasCurrent( 
            /* [retval][out] */ __RPC__out BOOL *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ __RPC__out BOOL *hasNext) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxManifestCapabilitiesEnumeratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxManifestCapabilitiesEnumerator * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxManifestCapabilitiesEnumerator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxManifestCapabilitiesEnumerator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )( 
            __RPC__in IAppxManifestCapabilitiesEnumerator * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *capability);
        
        HRESULT ( STDMETHODCALLTYPE *GetHasCurrent )( 
            __RPC__in IAppxManifestCapabilitiesEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in IAppxManifestCapabilitiesEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasNext);
        
        END_INTERFACE
    } IAppxManifestCapabilitiesEnumeratorVtbl;

    interface IAppxManifestCapabilitiesEnumerator
    {
        CONST_VTBL struct IAppxManifestCapabilitiesEnumeratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxManifestCapabilitiesEnumerator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxManifestCapabilitiesEnumerator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxManifestCapabilitiesEnumerator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxManifestCapabilitiesEnumerator_GetCurrent(This,capability)	\
    ( (This)->lpVtbl -> GetCurrent(This,capability) ) 

#define IAppxManifestCapabilitiesEnumerator_GetHasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> GetHasCurrent(This,hasCurrent) ) 

#define IAppxManifestCapabilitiesEnumerator_MoveNext(This,hasNext)	\
    ( (This)->lpVtbl -> MoveNext(This,hasNext) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxManifestCapabilitiesEnumerator_INTERFACE_DEFINED__ */


#ifndef __IAppxManifestApplicationsEnumerator_INTERFACE_DEFINED__
#define __IAppxManifestApplicationsEnumerator_INTERFACE_DEFINED__

/* interface IAppxManifestApplicationsEnumerator */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxManifestApplicationsEnumerator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9eb8a55a-f04b-4d0d-808d-686185d4847a")
    IAppxManifestApplicationsEnumerator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrent( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestApplication **application) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHasCurrent( 
            /* [retval][out] */ __RPC__out BOOL *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ __RPC__out BOOL *hasNext) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxManifestApplicationsEnumeratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxManifestApplicationsEnumerator * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxManifestApplicationsEnumerator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxManifestApplicationsEnumerator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )( 
            __RPC__in IAppxManifestApplicationsEnumerator * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestApplication **application);
        
        HRESULT ( STDMETHODCALLTYPE *GetHasCurrent )( 
            __RPC__in IAppxManifestApplicationsEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in IAppxManifestApplicationsEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasNext);
        
        END_INTERFACE
    } IAppxManifestApplicationsEnumeratorVtbl;

    interface IAppxManifestApplicationsEnumerator
    {
        CONST_VTBL struct IAppxManifestApplicationsEnumeratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxManifestApplicationsEnumerator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxManifestApplicationsEnumerator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxManifestApplicationsEnumerator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxManifestApplicationsEnumerator_GetCurrent(This,application)	\
    ( (This)->lpVtbl -> GetCurrent(This,application) ) 

#define IAppxManifestApplicationsEnumerator_GetHasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> GetHasCurrent(This,hasCurrent) ) 

#define IAppxManifestApplicationsEnumerator_MoveNext(This,hasNext)	\
    ( (This)->lpVtbl -> MoveNext(This,hasNext) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxManifestApplicationsEnumerator_INTERFACE_DEFINED__ */


#ifndef __IAppxManifestApplication_INTERFACE_DEFINED__
#define __IAppxManifestApplication_INTERFACE_DEFINED__

/* interface IAppxManifestApplication */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxManifestApplication;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5da89bf4-3773-46be-b650-7e744863b7e8")
    IAppxManifestApplication : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetStringValue( 
            /* [string][in] */ __RPC__in_string LPCWSTR name,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAppUserModelId( 
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *appUserModelId) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxManifestApplicationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxManifestApplication * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxManifestApplication * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxManifestApplication * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetStringValue )( 
            __RPC__in IAppxManifestApplication * This,
            /* [string][in] */ __RPC__in_string LPCWSTR name,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *value);
        
        HRESULT ( STDMETHODCALLTYPE *GetAppUserModelId )( 
            __RPC__in IAppxManifestApplication * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *appUserModelId);
        
        END_INTERFACE
    } IAppxManifestApplicationVtbl;

    interface IAppxManifestApplication
    {
        CONST_VTBL struct IAppxManifestApplicationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxManifestApplication_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxManifestApplication_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxManifestApplication_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxManifestApplication_GetStringValue(This,name,value)	\
    ( (This)->lpVtbl -> GetStringValue(This,name,value) ) 

#define IAppxManifestApplication_GetAppUserModelId(This,appUserModelId)	\
    ( (This)->lpVtbl -> GetAppUserModelId(This,appUserModelId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxManifestApplication_INTERFACE_DEFINED__ */


#ifndef __IAppxManifestQualifiedResourcesEnumerator_INTERFACE_DEFINED__
#define __IAppxManifestQualifiedResourcesEnumerator_INTERFACE_DEFINED__

/* interface IAppxManifestQualifiedResourcesEnumerator */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxManifestQualifiedResourcesEnumerator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8ef6adfe-3762-4a8f-9373-2fc5d444c8d2")
    IAppxManifestQualifiedResourcesEnumerator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrent( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestQualifiedResource **resource) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHasCurrent( 
            /* [retval][out] */ __RPC__out BOOL *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ __RPC__out BOOL *hasNext) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxManifestQualifiedResourcesEnumeratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxManifestQualifiedResourcesEnumerator * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxManifestQualifiedResourcesEnumerator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxManifestQualifiedResourcesEnumerator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )( 
            __RPC__in IAppxManifestQualifiedResourcesEnumerator * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestQualifiedResource **resource);
        
        HRESULT ( STDMETHODCALLTYPE *GetHasCurrent )( 
            __RPC__in IAppxManifestQualifiedResourcesEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in IAppxManifestQualifiedResourcesEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasNext);
        
        END_INTERFACE
    } IAppxManifestQualifiedResourcesEnumeratorVtbl;

    interface IAppxManifestQualifiedResourcesEnumerator
    {
        CONST_VTBL struct IAppxManifestQualifiedResourcesEnumeratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxManifestQualifiedResourcesEnumerator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxManifestQualifiedResourcesEnumerator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxManifestQualifiedResourcesEnumerator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxManifestQualifiedResourcesEnumerator_GetCurrent(This,resource)	\
    ( (This)->lpVtbl -> GetCurrent(This,resource) ) 

#define IAppxManifestQualifiedResourcesEnumerator_GetHasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> GetHasCurrent(This,hasCurrent) ) 

#define IAppxManifestQualifiedResourcesEnumerator_MoveNext(This,hasNext)	\
    ( (This)->lpVtbl -> MoveNext(This,hasNext) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxManifestQualifiedResourcesEnumerator_INTERFACE_DEFINED__ */


#ifndef __IAppxManifestQualifiedResource_INTERFACE_DEFINED__
#define __IAppxManifestQualifiedResource_INTERFACE_DEFINED__

/* interface IAppxManifestQualifiedResource */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxManifestQualifiedResource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3b53a497-3c5c-48d1-9ea3-bb7eac8cd7d4")
    IAppxManifestQualifiedResource : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetLanguage( 
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *language) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetScale( 
            /* [retval][out] */ __RPC__out UINT32 *scale) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDXFeatureLevel( 
            /* [retval][out] */ __RPC__out DX_FEATURE_LEVEL *dxFeatureLevel) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxManifestQualifiedResourceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxManifestQualifiedResource * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxManifestQualifiedResource * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxManifestQualifiedResource * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetLanguage )( 
            __RPC__in IAppxManifestQualifiedResource * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *language);
        
        HRESULT ( STDMETHODCALLTYPE *GetScale )( 
            __RPC__in IAppxManifestQualifiedResource * This,
            /* [retval][out] */ __RPC__out UINT32 *scale);
        
        HRESULT ( STDMETHODCALLTYPE *GetDXFeatureLevel )( 
            __RPC__in IAppxManifestQualifiedResource * This,
            /* [retval][out] */ __RPC__out DX_FEATURE_LEVEL *dxFeatureLevel);
        
        END_INTERFACE
    } IAppxManifestQualifiedResourceVtbl;

    interface IAppxManifestQualifiedResource
    {
        CONST_VTBL struct IAppxManifestQualifiedResourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxManifestQualifiedResource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxManifestQualifiedResource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxManifestQualifiedResource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxManifestQualifiedResource_GetLanguage(This,language)	\
    ( (This)->lpVtbl -> GetLanguage(This,language) ) 

#define IAppxManifestQualifiedResource_GetScale(This,scale)	\
    ( (This)->lpVtbl -> GetScale(This,scale) ) 

#define IAppxManifestQualifiedResource_GetDXFeatureLevel(This,dxFeatureLevel)	\
    ( (This)->lpVtbl -> GetDXFeatureLevel(This,dxFeatureLevel) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxManifestQualifiedResource_INTERFACE_DEFINED__ */


#ifndef __IAppxBundleFactory_INTERFACE_DEFINED__
#define __IAppxBundleFactory_INTERFACE_DEFINED__

/* interface IAppxBundleFactory */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxBundleFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BBA65864-965F-4A5F-855F-F074BDBF3A7B")
    IAppxBundleFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateBundleWriter( 
            /* [in] */ __RPC__in_opt IStream *outputStream,
            /* [in] */ UINT64 bundleVersion,
            /* [retval][out] */ __RPC__deref_out_opt IAppxBundleWriter **bundleWriter) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateBundleReader( 
            /* [in] */ __RPC__in_opt IStream *inputStream,
            /* [retval][out] */ __RPC__deref_out_opt IAppxBundleReader **bundleReader) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateBundleManifestReader( 
            /* [in] */ __RPC__in_opt IStream *inputStream,
            /* [retval][out] */ __RPC__deref_out_opt IAppxBundleManifestReader **manifestReader) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxBundleFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxBundleFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxBundleFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxBundleFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateBundleWriter )( 
            __RPC__in IAppxBundleFactory * This,
            /* [in] */ __RPC__in_opt IStream *outputStream,
            /* [in] */ UINT64 bundleVersion,
            /* [retval][out] */ __RPC__deref_out_opt IAppxBundleWriter **bundleWriter);
        
        HRESULT ( STDMETHODCALLTYPE *CreateBundleReader )( 
            __RPC__in IAppxBundleFactory * This,
            /* [in] */ __RPC__in_opt IStream *inputStream,
            /* [retval][out] */ __RPC__deref_out_opt IAppxBundleReader **bundleReader);
        
        HRESULT ( STDMETHODCALLTYPE *CreateBundleManifestReader )( 
            __RPC__in IAppxBundleFactory * This,
            /* [in] */ __RPC__in_opt IStream *inputStream,
            /* [retval][out] */ __RPC__deref_out_opt IAppxBundleManifestReader **manifestReader);
        
        END_INTERFACE
    } IAppxBundleFactoryVtbl;

    interface IAppxBundleFactory
    {
        CONST_VTBL struct IAppxBundleFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxBundleFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxBundleFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxBundleFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxBundleFactory_CreateBundleWriter(This,outputStream,bundleVersion,bundleWriter)	\
    ( (This)->lpVtbl -> CreateBundleWriter(This,outputStream,bundleVersion,bundleWriter) ) 

#define IAppxBundleFactory_CreateBundleReader(This,inputStream,bundleReader)	\
    ( (This)->lpVtbl -> CreateBundleReader(This,inputStream,bundleReader) ) 

#define IAppxBundleFactory_CreateBundleManifestReader(This,inputStream,manifestReader)	\
    ( (This)->lpVtbl -> CreateBundleManifestReader(This,inputStream,manifestReader) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxBundleFactory_INTERFACE_DEFINED__ */


#ifndef __IAppxBundleWriter_INTERFACE_DEFINED__
#define __IAppxBundleWriter_INTERFACE_DEFINED__

/* interface IAppxBundleWriter */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxBundleWriter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EC446FE8-BFEC-4C64-AB4F-49F038F0C6D2")
    IAppxBundleWriter : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddPayloadPackage( 
            /* [string][in] */ __RPC__in_string LPCWSTR fileName,
            /* [in] */ __RPC__in_opt IStream *packageStream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxBundleWriterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxBundleWriter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxBundleWriter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxBundleWriter * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddPayloadPackage )( 
            __RPC__in IAppxBundleWriter * This,
            /* [string][in] */ __RPC__in_string LPCWSTR fileName,
            /* [in] */ __RPC__in_opt IStream *packageStream);
        
        HRESULT ( STDMETHODCALLTYPE *Close )( 
            __RPC__in IAppxBundleWriter * This);
        
        END_INTERFACE
    } IAppxBundleWriterVtbl;

    interface IAppxBundleWriter
    {
        CONST_VTBL struct IAppxBundleWriterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxBundleWriter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxBundleWriter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxBundleWriter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxBundleWriter_AddPayloadPackage(This,fileName,packageStream)	\
    ( (This)->lpVtbl -> AddPayloadPackage(This,fileName,packageStream) ) 

#define IAppxBundleWriter_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxBundleWriter_INTERFACE_DEFINED__ */


#ifndef __IAppxBundleWriter2_INTERFACE_DEFINED__
#define __IAppxBundleWriter2_INTERFACE_DEFINED__

/* interface IAppxBundleWriter2 */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxBundleWriter2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6D8FE971-01CC-49A0-B685-233851279962")
    IAppxBundleWriter2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddExternalPackageReference( 
            /* [string][in] */ __RPC__in_string LPCWSTR fileName,
            /* [in] */ __RPC__in_opt IStream *inputStream) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxBundleWriter2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxBundleWriter2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxBundleWriter2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxBundleWriter2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddExternalPackageReference )( 
            __RPC__in IAppxBundleWriter2 * This,
            /* [string][in] */ __RPC__in_string LPCWSTR fileName,
            /* [in] */ __RPC__in_opt IStream *inputStream);
        
        END_INTERFACE
    } IAppxBundleWriter2Vtbl;

    interface IAppxBundleWriter2
    {
        CONST_VTBL struct IAppxBundleWriter2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxBundleWriter2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxBundleWriter2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxBundleWriter2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxBundleWriter2_AddExternalPackageReference(This,fileName,inputStream)	\
    ( (This)->lpVtbl -> AddExternalPackageReference(This,fileName,inputStream) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxBundleWriter2_INTERFACE_DEFINED__ */


#ifndef __IAppxBundleWriter3_INTERFACE_DEFINED__
#define __IAppxBundleWriter3_INTERFACE_DEFINED__

/* interface IAppxBundleWriter3 */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxBundleWriter3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AD711152-F969-4193-82D5-9DDF2786D21A")
    IAppxBundleWriter3 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddPackageReference( 
            /* [string][in] */ __RPC__in_string LPCWSTR fileName,
            /* [in] */ __RPC__in_opt IStream *inputStream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Close( 
            /* [string][in] */ __RPC__in_string LPCWSTR hashMethodString) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxBundleWriter3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxBundleWriter3 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxBundleWriter3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxBundleWriter3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddPackageReference )( 
            __RPC__in IAppxBundleWriter3 * This,
            /* [string][in] */ __RPC__in_string LPCWSTR fileName,
            /* [in] */ __RPC__in_opt IStream *inputStream);
        
        HRESULT ( STDMETHODCALLTYPE *Close )( 
            __RPC__in IAppxBundleWriter3 * This,
            /* [string][in] */ __RPC__in_string LPCWSTR hashMethodString);
        
        END_INTERFACE
    } IAppxBundleWriter3Vtbl;

    interface IAppxBundleWriter3
    {
        CONST_VTBL struct IAppxBundleWriter3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxBundleWriter3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxBundleWriter3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxBundleWriter3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxBundleWriter3_AddPackageReference(This,fileName,inputStream)	\
    ( (This)->lpVtbl -> AddPackageReference(This,fileName,inputStream) ) 

#define IAppxBundleWriter3_Close(This,hashMethodString)	\
    ( (This)->lpVtbl -> Close(This,hashMethodString) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxBundleWriter3_INTERFACE_DEFINED__ */


#ifndef __IAppxBundleReader_INTERFACE_DEFINED__
#define __IAppxBundleReader_INTERFACE_DEFINED__

/* interface IAppxBundleReader */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxBundleReader;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DD75B8C0-BA76-43B0-AE0F-68656A1DC5C8")
    IAppxBundleReader : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetFootprintFile( 
            /* [in] */ APPX_BUNDLE_FOOTPRINT_FILE_TYPE fileType,
            /* [retval][out] */ __RPC__deref_out_opt IAppxFile **footprintFile) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBlockMap( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxBlockMapReader **blockMapReader) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetManifest( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxBundleManifestReader **manifestReader) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPayloadPackages( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxFilesEnumerator **payloadPackages) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPayloadPackage( 
            /* [string][in] */ __RPC__in_string LPCWSTR fileName,
            /* [retval][out] */ __RPC__deref_out_opt IAppxFile **payloadPackage) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxBundleReaderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxBundleReader * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxBundleReader * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxBundleReader * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetFootprintFile )( 
            __RPC__in IAppxBundleReader * This,
            /* [in] */ APPX_BUNDLE_FOOTPRINT_FILE_TYPE fileType,
            /* [retval][out] */ __RPC__deref_out_opt IAppxFile **footprintFile);
        
        HRESULT ( STDMETHODCALLTYPE *GetBlockMap )( 
            __RPC__in IAppxBundleReader * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxBlockMapReader **blockMapReader);
        
        HRESULT ( STDMETHODCALLTYPE *GetManifest )( 
            __RPC__in IAppxBundleReader * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxBundleManifestReader **manifestReader);
        
        HRESULT ( STDMETHODCALLTYPE *GetPayloadPackages )( 
            __RPC__in IAppxBundleReader * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxFilesEnumerator **payloadPackages);
        
        HRESULT ( STDMETHODCALLTYPE *GetPayloadPackage )( 
            __RPC__in IAppxBundleReader * This,
            /* [string][in] */ __RPC__in_string LPCWSTR fileName,
            /* [retval][out] */ __RPC__deref_out_opt IAppxFile **payloadPackage);
        
        END_INTERFACE
    } IAppxBundleReaderVtbl;

    interface IAppxBundleReader
    {
        CONST_VTBL struct IAppxBundleReaderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxBundleReader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxBundleReader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxBundleReader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxBundleReader_GetFootprintFile(This,fileType,footprintFile)	\
    ( (This)->lpVtbl -> GetFootprintFile(This,fileType,footprintFile) ) 

#define IAppxBundleReader_GetBlockMap(This,blockMapReader)	\
    ( (This)->lpVtbl -> GetBlockMap(This,blockMapReader) ) 

#define IAppxBundleReader_GetManifest(This,manifestReader)	\
    ( (This)->lpVtbl -> GetManifest(This,manifestReader) ) 

#define IAppxBundleReader_GetPayloadPackages(This,payloadPackages)	\
    ( (This)->lpVtbl -> GetPayloadPackages(This,payloadPackages) ) 

#define IAppxBundleReader_GetPayloadPackage(This,fileName,payloadPackage)	\
    ( (This)->lpVtbl -> GetPayloadPackage(This,fileName,payloadPackage) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxBundleReader_INTERFACE_DEFINED__ */


#ifndef __IAppxBundleManifestReader_INTERFACE_DEFINED__
#define __IAppxBundleManifestReader_INTERFACE_DEFINED__

/* interface IAppxBundleManifestReader */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxBundleManifestReader;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CF0EBBC1-CC99-4106-91EB-E67462E04FB0")
    IAppxBundleManifestReader : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPackageId( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestPackageId **packageId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPackageInfoItems( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxBundleManifestPackageInfoEnumerator **packageInfoItems) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStream( 
            /* [retval][out] */ __RPC__deref_out_opt IStream **manifestStream) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxBundleManifestReaderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxBundleManifestReader * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxBundleManifestReader * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxBundleManifestReader * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPackageId )( 
            __RPC__in IAppxBundleManifestReader * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestPackageId **packageId);
        
        HRESULT ( STDMETHODCALLTYPE *GetPackageInfoItems )( 
            __RPC__in IAppxBundleManifestReader * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxBundleManifestPackageInfoEnumerator **packageInfoItems);
        
        HRESULT ( STDMETHODCALLTYPE *GetStream )( 
            __RPC__in IAppxBundleManifestReader * This,
            /* [retval][out] */ __RPC__deref_out_opt IStream **manifestStream);
        
        END_INTERFACE
    } IAppxBundleManifestReaderVtbl;

    interface IAppxBundleManifestReader
    {
        CONST_VTBL struct IAppxBundleManifestReaderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxBundleManifestReader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxBundleManifestReader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxBundleManifestReader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxBundleManifestReader_GetPackageId(This,packageId)	\
    ( (This)->lpVtbl -> GetPackageId(This,packageId) ) 

#define IAppxBundleManifestReader_GetPackageInfoItems(This,packageInfoItems)	\
    ( (This)->lpVtbl -> GetPackageInfoItems(This,packageInfoItems) ) 

#define IAppxBundleManifestReader_GetStream(This,manifestStream)	\
    ( (This)->lpVtbl -> GetStream(This,manifestStream) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxBundleManifestReader_INTERFACE_DEFINED__ */


#ifndef __IAppxBundleManifestReader2_INTERFACE_DEFINED__
#define __IAppxBundleManifestReader2_INTERFACE_DEFINED__

/* interface IAppxBundleManifestReader2 */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxBundleManifestReader2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5517DF70-033F-4AF2-8213-87D766805C02")
    IAppxBundleManifestReader2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetOptionalBundles( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxBundleManifestOptionalBundleInfoEnumerator **optionalBundles) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxBundleManifestReader2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxBundleManifestReader2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxBundleManifestReader2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxBundleManifestReader2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetOptionalBundles )( 
            __RPC__in IAppxBundleManifestReader2 * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxBundleManifestOptionalBundleInfoEnumerator **optionalBundles);
        
        END_INTERFACE
    } IAppxBundleManifestReader2Vtbl;

    interface IAppxBundleManifestReader2
    {
        CONST_VTBL struct IAppxBundleManifestReader2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxBundleManifestReader2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxBundleManifestReader2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxBundleManifestReader2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxBundleManifestReader2_GetOptionalBundles(This,optionalBundles)	\
    ( (This)->lpVtbl -> GetOptionalBundles(This,optionalBundles) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxBundleManifestReader2_INTERFACE_DEFINED__ */


#ifndef __IAppxBundleManifestPackageInfoEnumerator_INTERFACE_DEFINED__
#define __IAppxBundleManifestPackageInfoEnumerator_INTERFACE_DEFINED__

/* interface IAppxBundleManifestPackageInfoEnumerator */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxBundleManifestPackageInfoEnumerator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F9B856EE-49A6-4E19-B2B0-6A2406D63A32")
    IAppxBundleManifestPackageInfoEnumerator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrent( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxBundleManifestPackageInfo **packageInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHasCurrent( 
            /* [retval][out] */ __RPC__out BOOL *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ __RPC__out BOOL *hasNext) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxBundleManifestPackageInfoEnumeratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxBundleManifestPackageInfoEnumerator * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxBundleManifestPackageInfoEnumerator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxBundleManifestPackageInfoEnumerator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )( 
            __RPC__in IAppxBundleManifestPackageInfoEnumerator * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxBundleManifestPackageInfo **packageInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetHasCurrent )( 
            __RPC__in IAppxBundleManifestPackageInfoEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in IAppxBundleManifestPackageInfoEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasNext);
        
        END_INTERFACE
    } IAppxBundleManifestPackageInfoEnumeratorVtbl;

    interface IAppxBundleManifestPackageInfoEnumerator
    {
        CONST_VTBL struct IAppxBundleManifestPackageInfoEnumeratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxBundleManifestPackageInfoEnumerator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxBundleManifestPackageInfoEnumerator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxBundleManifestPackageInfoEnumerator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxBundleManifestPackageInfoEnumerator_GetCurrent(This,packageInfo)	\
    ( (This)->lpVtbl -> GetCurrent(This,packageInfo) ) 

#define IAppxBundleManifestPackageInfoEnumerator_GetHasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> GetHasCurrent(This,hasCurrent) ) 

#define IAppxBundleManifestPackageInfoEnumerator_MoveNext(This,hasNext)	\
    ( (This)->lpVtbl -> MoveNext(This,hasNext) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxBundleManifestPackageInfoEnumerator_INTERFACE_DEFINED__ */


#ifndef __IAppxBundleManifestPackageInfo_INTERFACE_DEFINED__
#define __IAppxBundleManifestPackageInfo_INTERFACE_DEFINED__

/* interface IAppxBundleManifestPackageInfo */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxBundleManifestPackageInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("54CD06C1-268F-40BB-8ED2-757A9EBAEC8D")
    IAppxBundleManifestPackageInfo : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPackageType( 
            /* [retval][out] */ __RPC__out APPX_BUNDLE_PAYLOAD_PACKAGE_TYPE *packageType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPackageId( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestPackageId **packageId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFileName( 
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *fileName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOffset( 
            /* [retval][out] */ __RPC__out UINT64 *offset) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSize( 
            /* [retval][out] */ __RPC__out UINT64 *size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetResources( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestQualifiedResourcesEnumerator **resources) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxBundleManifestPackageInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxBundleManifestPackageInfo * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxBundleManifestPackageInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxBundleManifestPackageInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPackageType )( 
            __RPC__in IAppxBundleManifestPackageInfo * This,
            /* [retval][out] */ __RPC__out APPX_BUNDLE_PAYLOAD_PACKAGE_TYPE *packageType);
        
        HRESULT ( STDMETHODCALLTYPE *GetPackageId )( 
            __RPC__in IAppxBundleManifestPackageInfo * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestPackageId **packageId);
        
        HRESULT ( STDMETHODCALLTYPE *GetFileName )( 
            __RPC__in IAppxBundleManifestPackageInfo * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *fileName);
        
        HRESULT ( STDMETHODCALLTYPE *GetOffset )( 
            __RPC__in IAppxBundleManifestPackageInfo * This,
            /* [retval][out] */ __RPC__out UINT64 *offset);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            __RPC__in IAppxBundleManifestPackageInfo * This,
            /* [retval][out] */ __RPC__out UINT64 *size);
        
        HRESULT ( STDMETHODCALLTYPE *GetResources )( 
            __RPC__in IAppxBundleManifestPackageInfo * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestQualifiedResourcesEnumerator **resources);
        
        END_INTERFACE
    } IAppxBundleManifestPackageInfoVtbl;

    interface IAppxBundleManifestPackageInfo
    {
        CONST_VTBL struct IAppxBundleManifestPackageInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxBundleManifestPackageInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxBundleManifestPackageInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxBundleManifestPackageInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxBundleManifestPackageInfo_GetPackageType(This,packageType)	\
    ( (This)->lpVtbl -> GetPackageType(This,packageType) ) 

#define IAppxBundleManifestPackageInfo_GetPackageId(This,packageId)	\
    ( (This)->lpVtbl -> GetPackageId(This,packageId) ) 

#define IAppxBundleManifestPackageInfo_GetFileName(This,fileName)	\
    ( (This)->lpVtbl -> GetFileName(This,fileName) ) 

#define IAppxBundleManifestPackageInfo_GetOffset(This,offset)	\
    ( (This)->lpVtbl -> GetOffset(This,offset) ) 

#define IAppxBundleManifestPackageInfo_GetSize(This,size)	\
    ( (This)->lpVtbl -> GetSize(This,size) ) 

#define IAppxBundleManifestPackageInfo_GetResources(This,resources)	\
    ( (This)->lpVtbl -> GetResources(This,resources) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxBundleManifestPackageInfo_INTERFACE_DEFINED__ */


#ifndef __IAppxBundleManifestOptionalBundleInfoEnumerator_INTERFACE_DEFINED__
#define __IAppxBundleManifestOptionalBundleInfoEnumerator_INTERFACE_DEFINED__

/* interface IAppxBundleManifestOptionalBundleInfoEnumerator */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxBundleManifestOptionalBundleInfoEnumerator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9A178793-F97E-46AC-AACA-DD5BA4C177C8")
    IAppxBundleManifestOptionalBundleInfoEnumerator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrent( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxBundleManifestOptionalBundleInfo **optionalBundle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHasCurrent( 
            /* [retval][out] */ __RPC__out BOOL *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ __RPC__out BOOL *hasNext) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxBundleManifestOptionalBundleInfoEnumeratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxBundleManifestOptionalBundleInfoEnumerator * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxBundleManifestOptionalBundleInfoEnumerator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxBundleManifestOptionalBundleInfoEnumerator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )( 
            __RPC__in IAppxBundleManifestOptionalBundleInfoEnumerator * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxBundleManifestOptionalBundleInfo **optionalBundle);
        
        HRESULT ( STDMETHODCALLTYPE *GetHasCurrent )( 
            __RPC__in IAppxBundleManifestOptionalBundleInfoEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in IAppxBundleManifestOptionalBundleInfoEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasNext);
        
        END_INTERFACE
    } IAppxBundleManifestOptionalBundleInfoEnumeratorVtbl;

    interface IAppxBundleManifestOptionalBundleInfoEnumerator
    {
        CONST_VTBL struct IAppxBundleManifestOptionalBundleInfoEnumeratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxBundleManifestOptionalBundleInfoEnumerator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxBundleManifestOptionalBundleInfoEnumerator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxBundleManifestOptionalBundleInfoEnumerator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxBundleManifestOptionalBundleInfoEnumerator_GetCurrent(This,optionalBundle)	\
    ( (This)->lpVtbl -> GetCurrent(This,optionalBundle) ) 

#define IAppxBundleManifestOptionalBundleInfoEnumerator_GetHasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> GetHasCurrent(This,hasCurrent) ) 

#define IAppxBundleManifestOptionalBundleInfoEnumerator_MoveNext(This,hasNext)	\
    ( (This)->lpVtbl -> MoveNext(This,hasNext) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxBundleManifestOptionalBundleInfoEnumerator_INTERFACE_DEFINED__ */


#ifndef __IAppxBundleManifestOptionalBundleInfo_INTERFACE_DEFINED__
#define __IAppxBundleManifestOptionalBundleInfo_INTERFACE_DEFINED__

/* interface IAppxBundleManifestOptionalBundleInfo */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxBundleManifestOptionalBundleInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("515BF2E8-BCB0-4D69-8C48-E383147B6E12")
    IAppxBundleManifestOptionalBundleInfo : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPackageId( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestPackageId **packageId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFileName( 
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *fileName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPackageInfoItems( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxBundleManifestPackageInfoEnumerator **packageInfoItems) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxBundleManifestOptionalBundleInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxBundleManifestOptionalBundleInfo * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxBundleManifestOptionalBundleInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxBundleManifestOptionalBundleInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPackageId )( 
            __RPC__in IAppxBundleManifestOptionalBundleInfo * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxManifestPackageId **packageId);
        
        HRESULT ( STDMETHODCALLTYPE *GetFileName )( 
            __RPC__in IAppxBundleManifestOptionalBundleInfo * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *fileName);
        
        HRESULT ( STDMETHODCALLTYPE *GetPackageInfoItems )( 
            __RPC__in IAppxBundleManifestOptionalBundleInfo * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxBundleManifestPackageInfoEnumerator **packageInfoItems);
        
        END_INTERFACE
    } IAppxBundleManifestOptionalBundleInfoVtbl;

    interface IAppxBundleManifestOptionalBundleInfo
    {
        CONST_VTBL struct IAppxBundleManifestOptionalBundleInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxBundleManifestOptionalBundleInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxBundleManifestOptionalBundleInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxBundleManifestOptionalBundleInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxBundleManifestOptionalBundleInfo_GetPackageId(This,packageId)	\
    ( (This)->lpVtbl -> GetPackageId(This,packageId) ) 

#define IAppxBundleManifestOptionalBundleInfo_GetFileName(This,fileName)	\
    ( (This)->lpVtbl -> GetFileName(This,fileName) ) 

#define IAppxBundleManifestOptionalBundleInfo_GetPackageInfoItems(This,packageInfoItems)	\
    ( (This)->lpVtbl -> GetPackageInfoItems(This,packageInfoItems) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxBundleManifestOptionalBundleInfo_INTERFACE_DEFINED__ */


#ifndef __IAppxContentGroupFilesEnumerator_INTERFACE_DEFINED__
#define __IAppxContentGroupFilesEnumerator_INTERFACE_DEFINED__

/* interface IAppxContentGroupFilesEnumerator */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxContentGroupFilesEnumerator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1a09a2fd-7440-44eb-8c84-848205a6a1cc")
    IAppxContentGroupFilesEnumerator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrent( 
            /* [retval][out] */ __RPC__deref_out_opt LPWSTR *file) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHasCurrent( 
            /* [retval][out] */ __RPC__out BOOL *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ __RPC__out BOOL *hasNext) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxContentGroupFilesEnumeratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxContentGroupFilesEnumerator * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxContentGroupFilesEnumerator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxContentGroupFilesEnumerator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )( 
            __RPC__in IAppxContentGroupFilesEnumerator * This,
            /* [retval][out] */ __RPC__deref_out_opt LPWSTR *file);
        
        HRESULT ( STDMETHODCALLTYPE *GetHasCurrent )( 
            __RPC__in IAppxContentGroupFilesEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in IAppxContentGroupFilesEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasNext);
        
        END_INTERFACE
    } IAppxContentGroupFilesEnumeratorVtbl;

    interface IAppxContentGroupFilesEnumerator
    {
        CONST_VTBL struct IAppxContentGroupFilesEnumeratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxContentGroupFilesEnumerator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxContentGroupFilesEnumerator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxContentGroupFilesEnumerator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxContentGroupFilesEnumerator_GetCurrent(This,file)	\
    ( (This)->lpVtbl -> GetCurrent(This,file) ) 

#define IAppxContentGroupFilesEnumerator_GetHasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> GetHasCurrent(This,hasCurrent) ) 

#define IAppxContentGroupFilesEnumerator_MoveNext(This,hasNext)	\
    ( (This)->lpVtbl -> MoveNext(This,hasNext) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxContentGroupFilesEnumerator_INTERFACE_DEFINED__ */


#ifndef __IAppxContentGroup_INTERFACE_DEFINED__
#define __IAppxContentGroup_INTERFACE_DEFINED__

/* interface IAppxContentGroup */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxContentGroup;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("328f6468-c04f-4e3c-b6fa-6b8d27f3003a")
    IAppxContentGroup : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *groupName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFiles( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxContentGroupFilesEnumerator **enumerator) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxContentGroupVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxContentGroup * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxContentGroup * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxContentGroup * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            __RPC__in IAppxContentGroup * This,
            /* [retval][string][out] */ __RPC__deref_out_opt_string LPWSTR *groupName);
        
        HRESULT ( STDMETHODCALLTYPE *GetFiles )( 
            __RPC__in IAppxContentGroup * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxContentGroupFilesEnumerator **enumerator);
        
        END_INTERFACE
    } IAppxContentGroupVtbl;

    interface IAppxContentGroup
    {
        CONST_VTBL struct IAppxContentGroupVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxContentGroup_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxContentGroup_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxContentGroup_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxContentGroup_GetName(This,groupName)	\
    ( (This)->lpVtbl -> GetName(This,groupName) ) 

#define IAppxContentGroup_GetFiles(This,enumerator)	\
    ( (This)->lpVtbl -> GetFiles(This,enumerator) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxContentGroup_INTERFACE_DEFINED__ */


#ifndef __IAppxContentGroupsEnumerator_INTERFACE_DEFINED__
#define __IAppxContentGroupsEnumerator_INTERFACE_DEFINED__

/* interface IAppxContentGroupsEnumerator */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxContentGroupsEnumerator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3264e477-16d1-4d63-823e-7d2984696634")
    IAppxContentGroupsEnumerator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrent( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxContentGroup **stream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHasCurrent( 
            /* [retval][out] */ __RPC__out BOOL *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ __RPC__out BOOL *hasNext) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxContentGroupsEnumeratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxContentGroupsEnumerator * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxContentGroupsEnumerator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxContentGroupsEnumerator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )( 
            __RPC__in IAppxContentGroupsEnumerator * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxContentGroup **stream);
        
        HRESULT ( STDMETHODCALLTYPE *GetHasCurrent )( 
            __RPC__in IAppxContentGroupsEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in IAppxContentGroupsEnumerator * This,
            /* [retval][out] */ __RPC__out BOOL *hasNext);
        
        END_INTERFACE
    } IAppxContentGroupsEnumeratorVtbl;

    interface IAppxContentGroupsEnumerator
    {
        CONST_VTBL struct IAppxContentGroupsEnumeratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxContentGroupsEnumerator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxContentGroupsEnumerator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxContentGroupsEnumerator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxContentGroupsEnumerator_GetCurrent(This,stream)	\
    ( (This)->lpVtbl -> GetCurrent(This,stream) ) 

#define IAppxContentGroupsEnumerator_GetHasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> GetHasCurrent(This,hasCurrent) ) 

#define IAppxContentGroupsEnumerator_MoveNext(This,hasNext)	\
    ( (This)->lpVtbl -> MoveNext(This,hasNext) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxContentGroupsEnumerator_INTERFACE_DEFINED__ */


#ifndef __IAppxContentGroupMapReader_INTERFACE_DEFINED__
#define __IAppxContentGroupMapReader_INTERFACE_DEFINED__

/* interface IAppxContentGroupMapReader */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxContentGroupMapReader;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("418726d8-dd99-4f5d-9886-157add20de01")
    IAppxContentGroupMapReader : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetRequiredGroup( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxContentGroup **requiredGroup) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAutomaticGroups( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxContentGroupsEnumerator **automaticGroupsEnumerator) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxContentGroupMapReaderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxContentGroupMapReader * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxContentGroupMapReader * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxContentGroupMapReader * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRequiredGroup )( 
            __RPC__in IAppxContentGroupMapReader * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxContentGroup **requiredGroup);
        
        HRESULT ( STDMETHODCALLTYPE *GetAutomaticGroups )( 
            __RPC__in IAppxContentGroupMapReader * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxContentGroupsEnumerator **automaticGroupsEnumerator);
        
        END_INTERFACE
    } IAppxContentGroupMapReaderVtbl;

    interface IAppxContentGroupMapReader
    {
        CONST_VTBL struct IAppxContentGroupMapReaderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxContentGroupMapReader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxContentGroupMapReader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxContentGroupMapReader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxContentGroupMapReader_GetRequiredGroup(This,requiredGroup)	\
    ( (This)->lpVtbl -> GetRequiredGroup(This,requiredGroup) ) 

#define IAppxContentGroupMapReader_GetAutomaticGroups(This,automaticGroupsEnumerator)	\
    ( (This)->lpVtbl -> GetAutomaticGroups(This,automaticGroupsEnumerator) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxContentGroupMapReader_INTERFACE_DEFINED__ */


#ifndef __IAppxSourceContentGroupMapReader_INTERFACE_DEFINED__
#define __IAppxSourceContentGroupMapReader_INTERFACE_DEFINED__

/* interface IAppxSourceContentGroupMapReader */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxSourceContentGroupMapReader;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f329791d-540b-4a9f-bc75-3282b7d73193")
    IAppxSourceContentGroupMapReader : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetRequiredGroup( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxContentGroup **requiredGroup) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAutomaticGroups( 
            /* [retval][out] */ __RPC__deref_out_opt IAppxContentGroupsEnumerator **automaticGroupsEnumerator) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxSourceContentGroupMapReaderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxSourceContentGroupMapReader * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxSourceContentGroupMapReader * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxSourceContentGroupMapReader * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRequiredGroup )( 
            __RPC__in IAppxSourceContentGroupMapReader * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxContentGroup **requiredGroup);
        
        HRESULT ( STDMETHODCALLTYPE *GetAutomaticGroups )( 
            __RPC__in IAppxSourceContentGroupMapReader * This,
            /* [retval][out] */ __RPC__deref_out_opt IAppxContentGroupsEnumerator **automaticGroupsEnumerator);
        
        END_INTERFACE
    } IAppxSourceContentGroupMapReaderVtbl;

    interface IAppxSourceContentGroupMapReader
    {
        CONST_VTBL struct IAppxSourceContentGroupMapReaderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxSourceContentGroupMapReader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxSourceContentGroupMapReader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxSourceContentGroupMapReader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxSourceContentGroupMapReader_GetRequiredGroup(This,requiredGroup)	\
    ( (This)->lpVtbl -> GetRequiredGroup(This,requiredGroup) ) 

#define IAppxSourceContentGroupMapReader_GetAutomaticGroups(This,automaticGroupsEnumerator)	\
    ( (This)->lpVtbl -> GetAutomaticGroups(This,automaticGroupsEnumerator) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxSourceContentGroupMapReader_INTERFACE_DEFINED__ */


#ifndef __IAppxContentGroupMapWriter_INTERFACE_DEFINED__
#define __IAppxContentGroupMapWriter_INTERFACE_DEFINED__

/* interface IAppxContentGroupMapWriter */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxContentGroupMapWriter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d07ab776-a9de-4798-8c14-3db31e687c78")
    IAppxContentGroupMapWriter : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddAutomaticGroup( 
            /* [string][in] */ __RPC__in_string LPCWSTR groupName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddAutomaticFile( 
            /* [string][in] */ __RPC__in_string LPCWSTR fileName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxContentGroupMapWriterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxContentGroupMapWriter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxContentGroupMapWriter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxContentGroupMapWriter * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddAutomaticGroup )( 
            __RPC__in IAppxContentGroupMapWriter * This,
            /* [string][in] */ __RPC__in_string LPCWSTR groupName);
        
        HRESULT ( STDMETHODCALLTYPE *AddAutomaticFile )( 
            __RPC__in IAppxContentGroupMapWriter * This,
            /* [string][in] */ __RPC__in_string LPCWSTR fileName);
        
        HRESULT ( STDMETHODCALLTYPE *Close )( 
            __RPC__in IAppxContentGroupMapWriter * This);
        
        END_INTERFACE
    } IAppxContentGroupMapWriterVtbl;

    interface IAppxContentGroupMapWriter
    {
        CONST_VTBL struct IAppxContentGroupMapWriterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxContentGroupMapWriter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxContentGroupMapWriter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxContentGroupMapWriter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxContentGroupMapWriter_AddAutomaticGroup(This,groupName)	\
    ( (This)->lpVtbl -> AddAutomaticGroup(This,groupName) ) 

#define IAppxContentGroupMapWriter_AddAutomaticFile(This,fileName)	\
    ( (This)->lpVtbl -> AddAutomaticFile(This,fileName) ) 

#define IAppxContentGroupMapWriter_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxContentGroupMapWriter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_appxpackaging_0000_0054 */
/* [local] */ 

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct APPX_ENCRYPTED_PACKAGE_SETTINGS
    {
    UINT32 keyLength;
    LPCWSTR encryptionAlgorithm;
    BOOL useDiffusion;
    IUri *blockMapHashAlgorithm;
    } 	APPX_ENCRYPTED_PACKAGE_SETTINGS;

typedef /* [v1_enum] */ 
enum APPX_ENCRYPTED_PACKAGE_OPTIONS
    {
        APPX_ENCRYPTED_PACKAGE_OPTION_NONE	= 0,
        APPX_ENCRYPTED_PACKAGE_OPTION_DIFFUSION	= 0x1,
        APPX_ENCRYPTED_PACKAGE_OPTION_PAGE_HASHING	= 0x2
    } 	APPX_ENCRYPTED_PACKAGE_OPTIONS;

DEFINE_ENUM_FLAG_OPERATORS(APPX_ENCRYPTED_PACKAGE_OPTIONS);
typedef struct APPX_ENCRYPTED_PACKAGE_SETTINGS2
    {
    UINT32 keyLength;
    LPCWSTR encryptionAlgorithm;
    IUri *blockMapHashAlgorithm;
    DWORD options;
    } 	APPX_ENCRYPTED_PACKAGE_SETTINGS2;

typedef struct APPX_KEY_INFO
    {
    UINT32 keyLength;
    UINT32 keyIdLength;
    /* [size_is] */ BYTE *key;
    /* [size_is] */ BYTE *keyId;
    } 	APPX_KEY_INFO;

typedef struct APPX_ENCRYPTED_EXEMPTIONS
    {
    UINT32 count;
    /* [unique][size_is] */ LPCWSTR *plainTextFiles;
    } 	APPX_ENCRYPTED_EXEMPTIONS;



extern RPC_IF_HANDLE __MIDL_itf_appxpackaging_0000_0054_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_appxpackaging_0000_0054_v0_0_s_ifspec;

#ifndef __IAppxEncryptionFactory_INTERFACE_DEFINED__
#define __IAppxEncryptionFactory_INTERFACE_DEFINED__

/* interface IAppxEncryptionFactory */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxEncryptionFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("80E8E04D-8C88-44AE-A011-7CADF6FB2E72")
    IAppxEncryptionFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EncryptPackage( 
            /* [in] */ __RPC__in_opt IStream *inputStream,
            /* [in] */ __RPC__in_opt IStream *outputStream,
            /* [in] */ __RPC__in const APPX_ENCRYPTED_PACKAGE_SETTINGS *settings,
            /* [in] */ __RPC__in const APPX_KEY_INFO *keyInfo,
            /* [in] */ __RPC__in const APPX_ENCRYPTED_EXEMPTIONS *exemptedFiles) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DecryptPackage( 
            /* [in] */ __RPC__in_opt IStream *inputStream,
            /* [in] */ __RPC__in_opt IStream *outputStream,
            /* [in] */ __RPC__in const APPX_KEY_INFO *keyInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateEncryptedPackageWriter( 
            /* [in] */ __RPC__in_opt IStream *outputStream,
            /* [in] */ __RPC__in_opt IStream *manifestStream,
            /* [in] */ __RPC__in const APPX_ENCRYPTED_PACKAGE_SETTINGS *settings,
            /* [in] */ __RPC__in const APPX_KEY_INFO *keyInfo,
            /* [in] */ __RPC__in const APPX_ENCRYPTED_EXEMPTIONS *exemptedFiles,
            /* [retval][out] */ __RPC__deref_out_opt IAppxEncryptedPackageWriter **packageWriter) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateEncryptedPackageReader( 
            /* [in] */ __RPC__in_opt IStream *inputStream,
            /* [in] */ __RPC__in const APPX_KEY_INFO *keyInfo,
            /* [retval][out] */ __RPC__deref_out_opt IAppxPackageReader **packageReader) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EncryptBundle( 
            /* [in] */ __RPC__in_opt IStream *inputStream,
            /* [in] */ __RPC__in_opt IStream *outputStream,
            /* [in] */ __RPC__in const APPX_ENCRYPTED_PACKAGE_SETTINGS *settings,
            /* [in] */ __RPC__in const APPX_KEY_INFO *keyInfo,
            /* [in] */ __RPC__in const APPX_ENCRYPTED_EXEMPTIONS *exemptedFiles) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DecryptBundle( 
            /* [in] */ __RPC__in_opt IStream *inputStream,
            /* [in] */ __RPC__in_opt IStream *outputStream,
            /* [in] */ __RPC__in const APPX_KEY_INFO *keyInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateEncryptedBundleWriter( 
            /* [in] */ __RPC__in_opt IStream *outputStream,
            /* [in] */ UINT64 bundleVersion,
            /* [in] */ __RPC__in const APPX_ENCRYPTED_PACKAGE_SETTINGS *settings,
            /* [in] */ __RPC__in const APPX_KEY_INFO *keyInfo,
            /* [in] */ __RPC__in const APPX_ENCRYPTED_EXEMPTIONS *exemptedFiles,
            /* [retval][out] */ __RPC__deref_out_opt IAppxEncryptedBundleWriter **bundleWriter) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateEncryptedBundleReader( 
            /* [in] */ __RPC__in_opt IStream *inputStream,
            /* [in] */ __RPC__in const APPX_KEY_INFO *keyInfo,
            /* [retval][out] */ __RPC__deref_out_opt IAppxBundleReader **bundleReader) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxEncryptionFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxEncryptionFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxEncryptionFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxEncryptionFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *EncryptPackage )( 
            __RPC__in IAppxEncryptionFactory * This,
            /* [in] */ __RPC__in_opt IStream *inputStream,
            /* [in] */ __RPC__in_opt IStream *outputStream,
            /* [in] */ __RPC__in const APPX_ENCRYPTED_PACKAGE_SETTINGS *settings,
            /* [in] */ __RPC__in const APPX_KEY_INFO *keyInfo,
            /* [in] */ __RPC__in const APPX_ENCRYPTED_EXEMPTIONS *exemptedFiles);
        
        HRESULT ( STDMETHODCALLTYPE *DecryptPackage )( 
            __RPC__in IAppxEncryptionFactory * This,
            /* [in] */ __RPC__in_opt IStream *inputStream,
            /* [in] */ __RPC__in_opt IStream *outputStream,
            /* [in] */ __RPC__in const APPX_KEY_INFO *keyInfo);
        
        HRESULT ( STDMETHODCALLTYPE *CreateEncryptedPackageWriter )( 
            __RPC__in IAppxEncryptionFactory * This,
            /* [in] */ __RPC__in_opt IStream *outputStream,
            /* [in] */ __RPC__in_opt IStream *manifestStream,
            /* [in] */ __RPC__in const APPX_ENCRYPTED_PACKAGE_SETTINGS *settings,
            /* [in] */ __RPC__in const APPX_KEY_INFO *keyInfo,
            /* [in] */ __RPC__in const APPX_ENCRYPTED_EXEMPTIONS *exemptedFiles,
            /* [retval][out] */ __RPC__deref_out_opt IAppxEncryptedPackageWriter **packageWriter);
        
        HRESULT ( STDMETHODCALLTYPE *CreateEncryptedPackageReader )( 
            __RPC__in IAppxEncryptionFactory * This,
            /* [in] */ __RPC__in_opt IStream *inputStream,
            /* [in] */ __RPC__in const APPX_KEY_INFO *keyInfo,
            /* [retval][out] */ __RPC__deref_out_opt IAppxPackageReader **packageReader);
        
        HRESULT ( STDMETHODCALLTYPE *EncryptBundle )( 
            __RPC__in IAppxEncryptionFactory * This,
            /* [in] */ __RPC__in_opt IStream *inputStream,
            /* [in] */ __RPC__in_opt IStream *outputStream,
            /* [in] */ __RPC__in const APPX_ENCRYPTED_PACKAGE_SETTINGS *settings,
            /* [in] */ __RPC__in const APPX_KEY_INFO *keyInfo,
            /* [in] */ __RPC__in const APPX_ENCRYPTED_EXEMPTIONS *exemptedFiles);
        
        HRESULT ( STDMETHODCALLTYPE *DecryptBundle )( 
            __RPC__in IAppxEncryptionFactory * This,
            /* [in] */ __RPC__in_opt IStream *inputStream,
            /* [in] */ __RPC__in_opt IStream *outputStream,
            /* [in] */ __RPC__in const APPX_KEY_INFO *keyInfo);
        
        HRESULT ( STDMETHODCALLTYPE *CreateEncryptedBundleWriter )( 
            __RPC__in IAppxEncryptionFactory * This,
            /* [in] */ __RPC__in_opt IStream *outputStream,
            /* [in] */ UINT64 bundleVersion,
            /* [in] */ __RPC__in const APPX_ENCRYPTED_PACKAGE_SETTINGS *settings,
            /* [in] */ __RPC__in const APPX_KEY_INFO *keyInfo,
            /* [in] */ __RPC__in const APPX_ENCRYPTED_EXEMPTIONS *exemptedFiles,
            /* [retval][out] */ __RPC__deref_out_opt IAppxEncryptedBundleWriter **bundleWriter);
        
        HRESULT ( STDMETHODCALLTYPE *CreateEncryptedBundleReader )( 
            __RPC__in IAppxEncryptionFactory * This,
            /* [in] */ __RPC__in_opt IStream *inputStream,
            /* [in] */ __RPC__in const APPX_KEY_INFO *keyInfo,
            /* [retval][out] */ __RPC__deref_out_opt IAppxBundleReader **bundleReader);
        
        END_INTERFACE
    } IAppxEncryptionFactoryVtbl;

    interface IAppxEncryptionFactory
    {
        CONST_VTBL struct IAppxEncryptionFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxEncryptionFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxEncryptionFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxEncryptionFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxEncryptionFactory_EncryptPackage(This,inputStream,outputStream,settings,keyInfo,exemptedFiles)	\
    ( (This)->lpVtbl -> EncryptPackage(This,inputStream,outputStream,settings,keyInfo,exemptedFiles) ) 

#define IAppxEncryptionFactory_DecryptPackage(This,inputStream,outputStream,keyInfo)	\
    ( (This)->lpVtbl -> DecryptPackage(This,inputStream,outputStream,keyInfo) ) 

#define IAppxEncryptionFactory_CreateEncryptedPackageWriter(This,outputStream,manifestStream,settings,keyInfo,exemptedFiles,packageWriter)	\
    ( (This)->lpVtbl -> CreateEncryptedPackageWriter(This,outputStream,manifestStream,settings,keyInfo,exemptedFiles,packageWriter) ) 

#define IAppxEncryptionFactory_CreateEncryptedPackageReader(This,inputStream,keyInfo,packageReader)	\
    ( (This)->lpVtbl -> CreateEncryptedPackageReader(This,inputStream,keyInfo,packageReader) ) 

#define IAppxEncryptionFactory_EncryptBundle(This,inputStream,outputStream,settings,keyInfo,exemptedFiles)	\
    ( (This)->lpVtbl -> EncryptBundle(This,inputStream,outputStream,settings,keyInfo,exemptedFiles) ) 

#define IAppxEncryptionFactory_DecryptBundle(This,inputStream,outputStream,keyInfo)	\
    ( (This)->lpVtbl -> DecryptBundle(This,inputStream,outputStream,keyInfo) ) 

#define IAppxEncryptionFactory_CreateEncryptedBundleWriter(This,outputStream,bundleVersion,settings,keyInfo,exemptedFiles,bundleWriter)	\
    ( (This)->lpVtbl -> CreateEncryptedBundleWriter(This,outputStream,bundleVersion,settings,keyInfo,exemptedFiles,bundleWriter) ) 

#define IAppxEncryptionFactory_CreateEncryptedBundleReader(This,inputStream,keyInfo,bundleReader)	\
    ( (This)->lpVtbl -> CreateEncryptedBundleReader(This,inputStream,keyInfo,bundleReader) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxEncryptionFactory_INTERFACE_DEFINED__ */


#ifndef __IAppxEncryptionFactory2_INTERFACE_DEFINED__
#define __IAppxEncryptionFactory2_INTERFACE_DEFINED__

/* interface IAppxEncryptionFactory2 */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxEncryptionFactory2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c1b11eee-c4ba-4ab2-a55d-d015fe8ff64f")
    IAppxEncryptionFactory2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateEncryptedPackageWriter( 
            /* [in] */ __RPC__in_opt IStream *outputStream,
            /* [in] */ __RPC__in_opt IStream *manifestStream,
            /* [in] */ __RPC__in_opt IStream *contentGroupMapStream,
            /* [in] */ __RPC__in const APPX_ENCRYPTED_PACKAGE_SETTINGS *settings,
            /* [in] */ __RPC__in const APPX_KEY_INFO *keyInfo,
            /* [in] */ __RPC__in const APPX_ENCRYPTED_EXEMPTIONS *exemptedFiles,
            /* [retval][out] */ __RPC__deref_out_opt IAppxEncryptedPackageWriter **packageWriter) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxEncryptionFactory2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxEncryptionFactory2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxEncryptionFactory2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxEncryptionFactory2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateEncryptedPackageWriter )( 
            __RPC__in IAppxEncryptionFactory2 * This,
            /* [in] */ __RPC__in_opt IStream *outputStream,
            /* [in] */ __RPC__in_opt IStream *manifestStream,
            /* [in] */ __RPC__in_opt IStream *contentGroupMapStream,
            /* [in] */ __RPC__in const APPX_ENCRYPTED_PACKAGE_SETTINGS *settings,
            /* [in] */ __RPC__in const APPX_KEY_INFO *keyInfo,
            /* [in] */ __RPC__in const APPX_ENCRYPTED_EXEMPTIONS *exemptedFiles,
            /* [retval][out] */ __RPC__deref_out_opt IAppxEncryptedPackageWriter **packageWriter);
        
        END_INTERFACE
    } IAppxEncryptionFactory2Vtbl;

    interface IAppxEncryptionFactory2
    {
        CONST_VTBL struct IAppxEncryptionFactory2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxEncryptionFactory2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxEncryptionFactory2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxEncryptionFactory2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxEncryptionFactory2_CreateEncryptedPackageWriter(This,outputStream,manifestStream,contentGroupMapStream,settings,keyInfo,exemptedFiles,packageWriter)	\
    ( (This)->lpVtbl -> CreateEncryptedPackageWriter(This,outputStream,manifestStream,contentGroupMapStream,settings,keyInfo,exemptedFiles,packageWriter) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxEncryptionFactory2_INTERFACE_DEFINED__ */


#ifndef __IAppxEncryptionFactory3_INTERFACE_DEFINED__
#define __IAppxEncryptionFactory3_INTERFACE_DEFINED__

/* interface IAppxEncryptionFactory3 */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxEncryptionFactory3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("09edca37-cd64-47d6-b7e8-1cb11d4f7e05")
    IAppxEncryptionFactory3 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EncryptPackage( 
            /* [in] */ __RPC__in_opt IStream *inputStream,
            /* [in] */ __RPC__in_opt IStream *outputStream,
            /* [in] */ __RPC__in const APPX_ENCRYPTED_PACKAGE_SETTINGS2 *settings,
            /* [in] */ __RPC__in const APPX_KEY_INFO *keyInfo,
            /* [in] */ __RPC__in const APPX_ENCRYPTED_EXEMPTIONS *exemptedFiles) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateEncryptedPackageWriter( 
            /* [in] */ __RPC__in_opt IStream *outputStream,
            /* [in] */ __RPC__in_opt IStream *manifestStream,
            /* [in] */ __RPC__in_opt IStream *contentGroupMapStream,
            /* [in] */ __RPC__in const APPX_ENCRYPTED_PACKAGE_SETTINGS2 *settings,
            /* [in] */ __RPC__in const APPX_KEY_INFO *keyInfo,
            /* [in] */ __RPC__in const APPX_ENCRYPTED_EXEMPTIONS *exemptedFiles,
            /* [retval][out] */ __RPC__deref_out_opt IAppxEncryptedPackageWriter **packageWriter) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EncryptBundle( 
            /* [in] */ __RPC__in_opt IStream *inputStream,
            /* [in] */ __RPC__in_opt IStream *outputStream,
            /* [in] */ __RPC__in const APPX_ENCRYPTED_PACKAGE_SETTINGS2 *settings,
            /* [in] */ __RPC__in const APPX_KEY_INFO *keyInfo,
            /* [in] */ __RPC__in const APPX_ENCRYPTED_EXEMPTIONS *exemptedFiles) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateEncryptedBundleWriter( 
            /* [in] */ __RPC__in_opt IStream *outputStream,
            /* [in] */ UINT64 bundleVersion,
            /* [in] */ __RPC__in const APPX_ENCRYPTED_PACKAGE_SETTINGS2 *settings,
            /* [in] */ __RPC__in const APPX_KEY_INFO *keyInfo,
            /* [in] */ __RPC__in const APPX_ENCRYPTED_EXEMPTIONS *exemptedFiles,
            /* [retval][out] */ __RPC__deref_out_opt IAppxEncryptedBundleWriter **bundleWriter) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxEncryptionFactory3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxEncryptionFactory3 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxEncryptionFactory3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxEncryptionFactory3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *EncryptPackage )( 
            __RPC__in IAppxEncryptionFactory3 * This,
            /* [in] */ __RPC__in_opt IStream *inputStream,
            /* [in] */ __RPC__in_opt IStream *outputStream,
            /* [in] */ __RPC__in const APPX_ENCRYPTED_PACKAGE_SETTINGS2 *settings,
            /* [in] */ __RPC__in const APPX_KEY_INFO *keyInfo,
            /* [in] */ __RPC__in const APPX_ENCRYPTED_EXEMPTIONS *exemptedFiles);
        
        HRESULT ( STDMETHODCALLTYPE *CreateEncryptedPackageWriter )( 
            __RPC__in IAppxEncryptionFactory3 * This,
            /* [in] */ __RPC__in_opt IStream *outputStream,
            /* [in] */ __RPC__in_opt IStream *manifestStream,
            /* [in] */ __RPC__in_opt IStream *contentGroupMapStream,
            /* [in] */ __RPC__in const APPX_ENCRYPTED_PACKAGE_SETTINGS2 *settings,
            /* [in] */ __RPC__in const APPX_KEY_INFO *keyInfo,
            /* [in] */ __RPC__in const APPX_ENCRYPTED_EXEMPTIONS *exemptedFiles,
            /* [retval][out] */ __RPC__deref_out_opt IAppxEncryptedPackageWriter **packageWriter);
        
        HRESULT ( STDMETHODCALLTYPE *EncryptBundle )( 
            __RPC__in IAppxEncryptionFactory3 * This,
            /* [in] */ __RPC__in_opt IStream *inputStream,
            /* [in] */ __RPC__in_opt IStream *outputStream,
            /* [in] */ __RPC__in const APPX_ENCRYPTED_PACKAGE_SETTINGS2 *settings,
            /* [in] */ __RPC__in const APPX_KEY_INFO *keyInfo,
            /* [in] */ __RPC__in const APPX_ENCRYPTED_EXEMPTIONS *exemptedFiles);
        
        HRESULT ( STDMETHODCALLTYPE *CreateEncryptedBundleWriter )( 
            __RPC__in IAppxEncryptionFactory3 * This,
            /* [in] */ __RPC__in_opt IStream *outputStream,
            /* [in] */ UINT64 bundleVersion,
            /* [in] */ __RPC__in const APPX_ENCRYPTED_PACKAGE_SETTINGS2 *settings,
            /* [in] */ __RPC__in const APPX_KEY_INFO *keyInfo,
            /* [in] */ __RPC__in const APPX_ENCRYPTED_EXEMPTIONS *exemptedFiles,
            /* [retval][out] */ __RPC__deref_out_opt IAppxEncryptedBundleWriter **bundleWriter);
        
        END_INTERFACE
    } IAppxEncryptionFactory3Vtbl;

    interface IAppxEncryptionFactory3
    {
        CONST_VTBL struct IAppxEncryptionFactory3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxEncryptionFactory3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxEncryptionFactory3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxEncryptionFactory3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxEncryptionFactory3_EncryptPackage(This,inputStream,outputStream,settings,keyInfo,exemptedFiles)	\
    ( (This)->lpVtbl -> EncryptPackage(This,inputStream,outputStream,settings,keyInfo,exemptedFiles) ) 

#define IAppxEncryptionFactory3_CreateEncryptedPackageWriter(This,outputStream,manifestStream,contentGroupMapStream,settings,keyInfo,exemptedFiles,packageWriter)	\
    ( (This)->lpVtbl -> CreateEncryptedPackageWriter(This,outputStream,manifestStream,contentGroupMapStream,settings,keyInfo,exemptedFiles,packageWriter) ) 

#define IAppxEncryptionFactory3_EncryptBundle(This,inputStream,outputStream,settings,keyInfo,exemptedFiles)	\
    ( (This)->lpVtbl -> EncryptBundle(This,inputStream,outputStream,settings,keyInfo,exemptedFiles) ) 

#define IAppxEncryptionFactory3_CreateEncryptedBundleWriter(This,outputStream,bundleVersion,settings,keyInfo,exemptedFiles,bundleWriter)	\
    ( (This)->lpVtbl -> CreateEncryptedBundleWriter(This,outputStream,bundleVersion,settings,keyInfo,exemptedFiles,bundleWriter) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxEncryptionFactory3_INTERFACE_DEFINED__ */


#ifndef __IAppxEncryptionFactory4_INTERFACE_DEFINED__
#define __IAppxEncryptionFactory4_INTERFACE_DEFINED__

/* interface IAppxEncryptionFactory4 */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxEncryptionFactory4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A879611F-12FD-41fe-85D5-06AE779BBAF5")
    IAppxEncryptionFactory4 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EncryptPackage( 
            /* [in] */ __RPC__in_opt IStream *inputStream,
            /* [in] */ __RPC__in_opt IStream *outputStream,
            /* [in] */ __RPC__in const APPX_ENCRYPTED_PACKAGE_SETTINGS2 *settings,
            /* [in] */ __RPC__in const APPX_KEY_INFO *keyInfo,
            /* [in] */ __RPC__in const APPX_ENCRYPTED_EXEMPTIONS *exemptedFiles,
            /* [in] */ UINT64 memoryLimit) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxEncryptionFactory4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxEncryptionFactory4 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxEncryptionFactory4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxEncryptionFactory4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *EncryptPackage )( 
            __RPC__in IAppxEncryptionFactory4 * This,
            /* [in] */ __RPC__in_opt IStream *inputStream,
            /* [in] */ __RPC__in_opt IStream *outputStream,
            /* [in] */ __RPC__in const APPX_ENCRYPTED_PACKAGE_SETTINGS2 *settings,
            /* [in] */ __RPC__in const APPX_KEY_INFO *keyInfo,
            /* [in] */ __RPC__in const APPX_ENCRYPTED_EXEMPTIONS *exemptedFiles,
            /* [in] */ UINT64 memoryLimit);
        
        END_INTERFACE
    } IAppxEncryptionFactory4Vtbl;

    interface IAppxEncryptionFactory4
    {
        CONST_VTBL struct IAppxEncryptionFactory4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxEncryptionFactory4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxEncryptionFactory4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxEncryptionFactory4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxEncryptionFactory4_EncryptPackage(This,inputStream,outputStream,settings,keyInfo,exemptedFiles,memoryLimit)	\
    ( (This)->lpVtbl -> EncryptPackage(This,inputStream,outputStream,settings,keyInfo,exemptedFiles,memoryLimit) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxEncryptionFactory4_INTERFACE_DEFINED__ */


#ifndef __IAppxEncryptedPackageWriter_INTERFACE_DEFINED__
#define __IAppxEncryptedPackageWriter_INTERFACE_DEFINED__

/* interface IAppxEncryptedPackageWriter */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxEncryptedPackageWriter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F43D0B0B-1379-40E2-9B29-682EA2BF42AF")
    IAppxEncryptedPackageWriter : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddPayloadFileEncrypted( 
            /* [string][in] */ __RPC__in_string LPCWSTR fileName,
            /* [in] */ APPX_COMPRESSION_OPTION compressionOption,
            /* [in] */ __RPC__in_opt IStream *inputStream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxEncryptedPackageWriterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxEncryptedPackageWriter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxEncryptedPackageWriter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxEncryptedPackageWriter * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddPayloadFileEncrypted )( 
            __RPC__in IAppxEncryptedPackageWriter * This,
            /* [string][in] */ __RPC__in_string LPCWSTR fileName,
            /* [in] */ APPX_COMPRESSION_OPTION compressionOption,
            /* [in] */ __RPC__in_opt IStream *inputStream);
        
        HRESULT ( STDMETHODCALLTYPE *Close )( 
            __RPC__in IAppxEncryptedPackageWriter * This);
        
        END_INTERFACE
    } IAppxEncryptedPackageWriterVtbl;

    interface IAppxEncryptedPackageWriter
    {
        CONST_VTBL struct IAppxEncryptedPackageWriterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxEncryptedPackageWriter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxEncryptedPackageWriter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxEncryptedPackageWriter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxEncryptedPackageWriter_AddPayloadFileEncrypted(This,fileName,compressionOption,inputStream)	\
    ( (This)->lpVtbl -> AddPayloadFileEncrypted(This,fileName,compressionOption,inputStream) ) 

#define IAppxEncryptedPackageWriter_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxEncryptedPackageWriter_INTERFACE_DEFINED__ */


#ifndef __IAppxEncryptedPackageWriter2_INTERFACE_DEFINED__
#define __IAppxEncryptedPackageWriter2_INTERFACE_DEFINED__

/* interface IAppxEncryptedPackageWriter2 */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxEncryptedPackageWriter2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3E475447-3A25-40b5-8AD2-F953AE50C92D")
    IAppxEncryptedPackageWriter2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddPayloadFilesEncrypted( 
            /* [in] */ UINT32 fileCount,
            /* [size_is][in] */ __RPC__in_ecount_full(fileCount) APPX_PACKAGE_WRITER_PAYLOAD_STREAM *payloadFiles,
            /* [in] */ UINT64 memoryLimit) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxEncryptedPackageWriter2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxEncryptedPackageWriter2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxEncryptedPackageWriter2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxEncryptedPackageWriter2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddPayloadFilesEncrypted )( 
            __RPC__in IAppxEncryptedPackageWriter2 * This,
            /* [in] */ UINT32 fileCount,
            /* [size_is][in] */ __RPC__in_ecount_full(fileCount) APPX_PACKAGE_WRITER_PAYLOAD_STREAM *payloadFiles,
            /* [in] */ UINT64 memoryLimit);
        
        END_INTERFACE
    } IAppxEncryptedPackageWriter2Vtbl;

    interface IAppxEncryptedPackageWriter2
    {
        CONST_VTBL struct IAppxEncryptedPackageWriter2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxEncryptedPackageWriter2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxEncryptedPackageWriter2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxEncryptedPackageWriter2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxEncryptedPackageWriter2_AddPayloadFilesEncrypted(This,fileCount,payloadFiles,memoryLimit)	\
    ( (This)->lpVtbl -> AddPayloadFilesEncrypted(This,fileCount,payloadFiles,memoryLimit) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxEncryptedPackageWriter2_INTERFACE_DEFINED__ */


#ifndef __IAppxEncryptedBundleWriter_INTERFACE_DEFINED__
#define __IAppxEncryptedBundleWriter_INTERFACE_DEFINED__

/* interface IAppxEncryptedBundleWriter */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxEncryptedBundleWriter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("80B0902F-7BF0-4117-B8C6-4279EF81EE77")
    IAppxEncryptedBundleWriter : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddPayloadPackageEncrypted( 
            /* [string][in] */ __RPC__in_string LPCWSTR fileName,
            /* [in] */ __RPC__in_opt IStream *packageStream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxEncryptedBundleWriterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxEncryptedBundleWriter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxEncryptedBundleWriter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxEncryptedBundleWriter * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddPayloadPackageEncrypted )( 
            __RPC__in IAppxEncryptedBundleWriter * This,
            /* [string][in] */ __RPC__in_string LPCWSTR fileName,
            /* [in] */ __RPC__in_opt IStream *packageStream);
        
        HRESULT ( STDMETHODCALLTYPE *Close )( 
            __RPC__in IAppxEncryptedBundleWriter * This);
        
        END_INTERFACE
    } IAppxEncryptedBundleWriterVtbl;

    interface IAppxEncryptedBundleWriter
    {
        CONST_VTBL struct IAppxEncryptedBundleWriterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxEncryptedBundleWriter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxEncryptedBundleWriter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxEncryptedBundleWriter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxEncryptedBundleWriter_AddPayloadPackageEncrypted(This,fileName,packageStream)	\
    ( (This)->lpVtbl -> AddPayloadPackageEncrypted(This,fileName,packageStream) ) 

#define IAppxEncryptedBundleWriter_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxEncryptedBundleWriter_INTERFACE_DEFINED__ */


#ifndef __IAppxEncryptedBundleWriter2_INTERFACE_DEFINED__
#define __IAppxEncryptedBundleWriter2_INTERFACE_DEFINED__

/* interface IAppxEncryptedBundleWriter2 */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IAppxEncryptedBundleWriter2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E644BE82-F0FA-42B8-A956-8D1CB48EE379")
    IAppxEncryptedBundleWriter2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddExternalPackageReference( 
            /* [string][in] */ __RPC__in_string LPCWSTR fileName,
            /* [in] */ __RPC__in_opt IStream *inputStream) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppxEncryptedBundleWriter2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppxEncryptedBundleWriter2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppxEncryptedBundleWriter2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppxEncryptedBundleWriter2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddExternalPackageReference )( 
            __RPC__in IAppxEncryptedBundleWriter2 * This,
            /* [string][in] */ __RPC__in_string LPCWSTR fileName,
            /* [in] */ __RPC__in_opt IStream *inputStream);
        
        END_INTERFACE
    } IAppxEncryptedBundleWriter2Vtbl;

    interface IAppxEncryptedBundleWriter2
    {
        CONST_VTBL struct IAppxEncryptedBundleWriter2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppxEncryptedBundleWriter2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppxEncryptedBundleWriter2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppxEncryptedBundleWriter2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppxEncryptedBundleWriter2_AddExternalPackageReference(This,fileName,inputStream)	\
    ( (This)->lpVtbl -> AddExternalPackageReference(This,fileName,inputStream) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppxEncryptedBundleWriter2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_appxpackaging_0000_0062 */
/* [local] */ 

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_appxpackaging_0000_0062_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_appxpackaging_0000_0062_v0_0_s_ifspec;


#ifndef __APPXPACKAGING_LIBRARY_DEFINED__
#define __APPXPACKAGING_LIBRARY_DEFINED__

/* library APPXPACKAGING */
/* [lcid][version][uuid] */ 

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

EXTERN_C const IID LIBID_APPXPACKAGING;

EXTERN_C const CLSID CLSID_AppxFactory;

#ifdef __cplusplus

class DECLSPEC_UUID("5842a140-ff9f-4166-8f5c-62f5b7b0c781")
AppxFactory;
#endif

EXTERN_C const CLSID CLSID_AppxBundleFactory;

#ifdef __cplusplus

class DECLSPEC_UUID("378E0446-5384-43B7-8877-E7DBDD883446")
AppxBundleFactory;
#endif

EXTERN_C const CLSID CLSID_AppxEncryptionFactory;

#ifdef __cplusplus

class DECLSPEC_UUID("DC664FDD-D868-46EE-8780-8D196CB739F7")
AppxEncryptionFactory;
#endif
#endif /* __APPXPACKAGING_LIBRARY_DEFINED__ */

/* interface __MIDL_itf_appxpackaging_0000_0063 */
/* [local] */ 

#endif // (NTDDI >= NTDDI_WIN7)


extern RPC_IF_HANDLE __MIDL_itf_appxpackaging_0000_0063_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_appxpackaging_0000_0063_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


