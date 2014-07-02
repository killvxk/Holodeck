//*************************************************************************
// Copyright (C) Security Innovation, LLC, 2003 � All Rights Reserved.
//
// FILE:		CLRMetadataDefs.h
//
// DESCRIPTION: Contains defines for the metadata tables, tokens, and
//				fields used in executables based on the .NET platform.
//
//				See "Inside Microsoft .NET IL Assembler" by Serge Lidin
//				for details on the file structure of .NET executables.
//
//=========================================================================
// Modification History
//
// Date         SCR  Name        Purpose
// -----------  ---  ----------- ------------------------------------------
// 31 Mar 2003	103	 R. Wagner	 File created.
//*************************************************************************

#ifndef __CLRMETADATADEFS_H__
#define __CLRMETADATADEFS_H__


// Macros to decompose a coded token
#define CLR_TOKEN_TYPE(x) ((x) >> 24)
#define CLR_TOKEN_RID(x) ((x) & 0xffffff)


// Table indicies
#define CLR_TABLE_MODULE 0
#define CLR_TABLE_TYPEREF 1
#define CLR_TABLE_TYPEDEF 2
#define CLR_TABLE_FIELDPTR 3
#define CLR_TABLE_FIELD 4
#define CLR_TABLE_METHODPTR 5
#define CLR_TABLE_METHOD 6
#define CLR_TABLE_PARAMPTR 7
#define CLR_TABLE_PARAM 8
#define CLR_TABLE_INTERFACEIMPL 9
#define CLR_TABLE_MEMBERREF 10
#define CLR_TABLE_CONSTANT 11
#define CLR_TABLE_CUSTOMATTRIBUTE 12
#define CLR_TABLE_FIELDMARSHAL 13
#define CLR_TABLE_DECLSECURITY 14
#define CLR_TABLE_CLASSLAYOUT 15
#define CLR_TABLE_FIELDLAYOUT 16
#define CLR_TABLE_STANDALONESIG 17
#define CLR_TABLE_EVENTMAP 18
#define CLR_TABLE_EVENTPTR 19
#define CLR_TABLE_EVENT 20
#define CLR_TABLE_PROPERTYMAP 21
#define CLR_TABLE_PROPERTYPTR 22
#define CLR_TABLE_PROPERTY 23
#define CLR_TABLE_METHODSEMANTICS 24
#define CLR_TABLE_METHODIMPL 25
#define CLR_TABLE_MODULEREF 26
#define CLR_TABLE_TYPESPEC 27
#define CLR_TABLE_ENCLOG 28
#define CLR_TABLE_IMPLMAP 29
#define CLR_TABLE_ENCMAP 30
#define CLR_TABLE_FIELDRVA 31
#define CLR_TABLE_ASSEMBLY 32
#define CLR_TABLE_ASSEMBLYPROCESSOR 33
#define CLR_TABLE_ASSEMBLYOS 34
#define CLR_TABLE_ASSEMBLYREF 35
#define CLR_TABLE_ASSEMBLYREFPROCESSOR 36
#define CLR_TABLE_ASSEMBLYREFOS 37
#define CLR_TABLE_FILE 38
#define CLR_TABLE_EXPORTEDTYPE 39
#define CLR_TABLE_MANIFESTRESOURCE 40
#define CLR_TABLE_NESTEDCLASS 41
#define CLR_TABLE_GENERICPARAM 42
#define CLR_TABLE_METHODSPEC 43
#define CLR_TABLE_GENERICPARAMCONSTRAINT 44

// Coded token types used in column definitions
#define CLR_CODED_TOKEN_BASE 64
#define CLR_COL_TOKEN_TYPEDEFORREF 64
#define CLR_COL_TOKEN_HASCONSTANT 65
#define CLR_COL_TOKEN_HASCUSTOMATTRIBUTE 66
#define CLR_COL_TOKEN_HASFIELDMARSHAL 67
#define CLR_COL_TOKEN_HASDECLSECURITY 68
#define CLR_COL_TOKEN_MEMBERREFPARENT 69
#define CLR_COL_TOKEN_HASSEMANTICS 70
#define CLR_COL_TOKEN_METHODDEFORREF 71
#define CLR_COL_TOKEN_MEMBERFORWARDED 72
#define CLR_COL_TOKEN_IMPLEMENTATION 73
#define CLR_COL_TOKEN_CUSTOMATTRIBUTETYPE 74
#define CLR_COL_TOKEN_RESOLUTIONSCOPE 75
#define CLR_COL_TOKEN_TYPEORMETHODDEF 76
#define CLR_COL_CODED_TOKEN_MAX CLR_COL_TOKEN_TYPEORMETHODDEF

// Basic types used in column definitions
#define CLR_COL_SHORT 96
#define CLR_COL_USHORT 97
#define CLR_COL_LONG 98
#define CLR_COL_ULONG 99
#define CLR_COL_BYTE 100
#define CLR_COL_STRING 101
#define CLR_COL_GUID 102
#define CLR_COL_BLOB 103
#define CLR_COL_SIGNATURE 104
#define CLR_COL_SIGNATURE_NOCALLCONV 105
#define CLR_COL_TOKEN 106
#define CLR_COL_INVALID 255

// Heap flags
#define CLR_LARGE_STRING_HEAP_FLAG 1
#define CLR_LARGE_GUID_HEAP_FLAG 2
#define CLR_LARGE_BLOB_HEAP_FLAG 4

// Table column definitions
#define CLR_MODULE_GENERATION_COLINDEX 0
#define CLR_MODULE_NAME_COLINDEX 1
#define CLR_MODULE_MVID_COLINDEX 2
#define CLR_MODULE_ENCID_COLINDEX 3
#define CLR_MODULE_ENCBASEID_COLINDEX 4
#define CLR_TYPEREF_RESOLUTIONSCOPE_COLINDEX 0
#define CLR_TYPEREF_NAME_COLINDEX 1
#define CLR_TYPEREF_NAMESPACE_COLINDEX 2
#define CLR_TYPEDEF_FLAGS_COLINDEX 0
#define CLR_TYPEDEF_NAME_COLINDEX 1
#define CLR_TYPEDEF_NAMESPACE_COLINDEX 2
#define CLR_TYPEDEF_EXTENDS_COLINDEX 3
#define CLR_TYPEDEF_FIELDLIST_COLINDEX 4
#define CLR_TYPEDEF_METHODLIST_COLINDEX 5
#define CLR_FILEDPTR_FIELD_COLINDEX 0
#define CLR_FIELD_FLAGS_COLINDEX 0
#define CLR_FIELD_NAME_COLINDEX 1
#define CLR_FIELD_SIGNATURE_COLINDEX 2
#define CLR_METHODPTR_METHOD_COLINDEX 0
#define CLR_METHOD_RVA_COLINDEX 0
#define CLR_METHOD_IMPLFLAGS_COLINDEX 1
#define CLR_METHOD_FLAGS_COLINDEX 2
#define CLR_METHOD_NAME_COLINDEX 3
#define CLR_METHOD_SIGNATURE_COLINDEX 4
#define CLR_METHOD_PARAMLIST_COLINDEX 5
#define CLR_PARAMPTR_PARAM_COLINDEX 0
#define CLR_PARAM_FLAGS_COLINDEX 0
#define CLR_PARAM_SEQUENCE_COLINDEX 1
#define CLR_PARAM_NAME_COLINDEX 2
#define CLR_INTERFACEIMPL_CLASS_COLINDEX 0
#define CLR_INTERFACEIMPL_INTERFACE_COLINDEX 1
#define CLR_MEMBERREF_CLASS_COLINDEX 0
#define CLR_MEMBERREF_NAME_COLINDEX 1
#define CLR_MEMBERREF_SIGNATURE_COLINDEX 2
#define CLR_CONSTANT_TYPE_COLINDEX 0
#define CLR_CONSTANT_PARENT_COLINDEX 1
#define CLR_CONSTANT_VALUE_COLINDEX 2
#define CLR_CUSTOMATTRIBUTE_PARENT_COLINDEX 0
#define CLR_CUSTOMATTRIBUTE_TYPE_COLINDEX 1
#define CLR_CUSTOMATTRIBUTE_VALUE_COLINDEX 2
#define CLR_FIELDMARHSAL_PARENT_COLINDEX 0
#define CLR_FIELDMARSHAL_NATIVETYPE_COLINDEX 1
#define CLR_DECLSECURITY_ACTION_COLINDEX 0
#define CLR_DECLSECURITY_PARENT_COLINDEX 1
#define CLR_DECLSECURITY_PERMISSIONSET_COLINDEX 2
#define CLR_CLASSLAYOUT_PACKINGSIZE_COLINDEX 0
#define CLR_CLASSLAYOUT_CLASSSIZE_COLINDEX 1
#define CLR_CLASSLAYOUT_PARENT_COLINDEX 2
#define CLR_FIELDLAYOUT_OFFSET_COLINDEX 0
#define CLR_FIELDLAYOUT_FIELD_COLINDEX 1
#define CLR_STANDALONESIG_SIGNATURE_COLINDEX 0
#define CLR_EVENTMAP_PARENT_COLINDEX 0
#define CLR_EVENTMAP_EVENTLIST_COLINDEX 1
#define CLR_EVENTPTR_EVENT_COLINDEX 0
#define CLR_EVENT_EVENTFLAGS_COLINDEX 0
#define CLR_EVENT_NAME_COLINDEX 1
#define CLR_EVENT_EVENTTYPE_COLINDEX 2
#define CLR_PROPERTYMAP_PARENT_COLINDEX 0
#define CLR_PROPERTYMAP_PROPERTYLIST_COLINDEX 1
#define CLR_PROPERTYPTR_PROPERTY_COLINDEX 0
#define CLR_PROPERTY_PROPFLAGS_COLINDEX 0
#define CLR_PROPERTY_NAME_COLINDEX 1
#define CLR_PROPERTY_TYPE_COLINDEX 2
#define CLR_METHODSEMANTICS_SEMANTIC_COLINDEX 0
#define CLR_METHODSEMANTICS_METHOD_COLINDEX 1
#define CLR_METHODSEMANTICS_ASSOCIATION_COLINDEX 2
#define CLR_METHODIMPL_CLASS_COLINDEX 0
#define CLR_METHODIMPL_METHODBODY_COLINDEX 1
#define CLR_METHODIMPL_METHODDECLARATION_COLINDEX 2
#define CLR_MODULEREF_NAME_COLINDEX 0
#define CLR_TYPESPEC_SIGNATURE_COLINDEX 0
#define CLR_ENCLOG_TOKEN_COLINDEX 0
#define CLR_ENCLOG_FUNCCODE_COLINDEX 1
#define CLR_IMPLMAP_MAPPINGFLAGS_COLINDEX 0
#define CLR_IMPLMAP_MEMBERFORWARDED_COLINDEX 1
#define CLR_IMPLMAP_IMPORTNAME 2
#define CLR_IMPLMAP_IMPORTSCOPE 3
#define CLR_ENCMAP_TOKEN_COLINDEX 0
#define CLR_FIELDRVA_RVA_COLINDEX 0
#define CLR_FIELDRVA_FIELD_COLINDEX 1
#define CLR_ASSEMBLY_HASHALGID_COLINDEX 0
#define CLR_ASSEMBLY_MAJORVERSION_COLINDEX 1
#define CLR_ASSEMBLY_MINORVERSION_COLINDEX 2
#define CLR_ASSEMBLY_BUILDNUMBER_COLINDEX 3
#define CLR_ASSEMBLY_REVISIONNUMBER_COLINDEX 4
#define CLR_ASSEMBLY_FLAGS_COLINDEX 5
#define CLR_ASSEMBLY_PUBLICKEY_COLINDEX 6
#define CLR_ASSEMBLY_NAME_COLINDEX 7
#define CLR_ASSEMBLY_LOCALE_COLINDEX 8
#define CLR_ASSEMBLYPROCESSOR_PROCESSOR_COLINDEX 0
#define CLR_ASSEMBLYOS_OSPLATFORMID_COLINDEX 0
#define CLR_ASSEMBLYOS_OSMAJORVERSION_COLINDEX 1
#define CLR_ASSEMBLYOS_OSMINORVERSION_COLINDEX 2
#define CLR_ASSEMBLYREF_MAJORVERSION_COLINDEX 0
#define CLR_ASSEMBLYREF_MINORVERSION_COLINDEX 1
#define CLR_ASSEMBLYREF_BUILDNUMBER_COLINDEX 2
#define CLR_ASSEMBLYREF_REVISIONNUMBER_COLINDEX 3
#define CLR_ASSEMBLYREF_FLAGS_COLINDEX 4
#define CLR_ASSEMBLYREF_PUBLICKEYORTOKEN_COLINDEX 5
#define CLR_ASSEMBLYREF_NAME_COLINDEX 6
#define CLR_ASSEMBLYREF_LOCALE_COLINDEX 7
#define CLR_ASSEMBLYREF_HASHVALUE_COLINDEX 8
#define CLR_ASSEMBLYREFPROCESSOR_PROCESSOR_COLINDEX 0
#define CLR_ASSEMBLYREFPROCESSOR_ASSEMBLYREF_COLINDEX 1
#define CLR_ASSEMBLYREFOS_OSPLATFORMID_COLINDEX 0
#define CLR_ASSEMBLYREFOS_OSMAJORVERSION_COLINDEX 1
#define CLR_ASSEMBLYREFOS_OSMINORVERSION_COLINDEX 2
#define CLR_ASSEMBLYREFOS_ASSEMBLYREF_COLINDEX 3
#define CLR_FILE_FLAGS_COLINDEX 0
#define CLR_FILE_NAME_COLINDEX 1
#define CLR_FILE_HASHVALUE_COLINDEX 2
#define CLR_EXPORTEDTYPE_FLAGS_COLINDEX 0
#define CLR_EXPORTEDTYPE_TYPEDEFID_COLINDEX 1
#define CLR_EXPORTEDTYPE_TYPENAME_COLINDEX 2
#define CLR_EXPORTEDTYPE_TYPENAMESPACE_COLINDEX 3
#define CLR_EXPORTEDTYPE_IMPLEMENTATION_COLINDEX 4
#define CLR_MANIFESTRESOURCE_OFFSET_COLINDEX 0
#define CLR_MANIFESTRESOURCE_FLAGS_COLINDEX 1
#define CLR_MANIFESTRESOURCE_NAME_COLINDEX 2
#define CLR_MANIFESTRESOURCE_IMPLEMENTATION_COLINDEX 3
#define CLR_NESTEDCLASS_NESTEDCLASS_COLINDEX 0
#define CLR_NESTEDCLASS_ENCLOSINGCLASS_COLINDEX 1
#define CLR_GENERICPARAM_NUMBER_COLINDEX 0
#define CLR_GENERICPARAM_FLAGS_COLINDEX 1
#define CLR_GENERICPARAM_OWNER_COLINDEX 2
#define CLR_GENERICPARAM_NAME_COLINDEX 3
#define CLR_GENERICPARAM_KIND_COLINDEX 4
#define CLR_GENERICPARAM_DEPRECATEDCONSTRAINT_COLINDEX 5
#define CLR_METHODSPEC_METHOD_COLINDEX 0
#define CLR_METHODSPEC_INSTANTIATION_COLINDEX 1
#define CLR_GENERICPARAMCONSTRAINT_OWNER_COLINDEX 0
#define CLR_GENERICPARAMCONSTRAINT_CONSTRAINT_COLINDEX 1

// Token types
#define CLR_TOKEN_MASK 0xff000000
#define CLR_TOKEN_SHIFT 24
#define CLR_TOKEN_MODULE 0x00000000
#define CLR_TOKEN_TYPEREF 0x01000000
#define CLR_TOKEN_TYPEDEF 0x02000000
#define CLR_TOKEN_FIELD 0x04000000
#define CLR_TOKEN_METHOD 0x06000000
#define CLR_TOKEN_PARAM 0x08000000
#define CLR_TOKEN_INTERFACEIMPL 0x09000000
#define CLR_TOKEN_MEMBERREF 0x0A000000
#define CLR_TOKEN_CONSTANT 0x0B000000
#define CLR_TOKEN_CUSTOMATTRIBUTE 0x0C000000
#define CLR_TOKEN_FIELDMARSHAL 0x0D000000
#define CLR_TOKEN_DECLSECURITY 0x0E000000
#define CLR_TOKEN_CLASSLAYOUT 0x0F000000
#define CLR_TOKEN_FIELDLAYOUT 0x10000000
#define CLR_TOKEN_STANDALONESIG 0x11000000
#define CLR_TOKEN_EVENTMAP 0x12000000
#define CLR_TOKEN_EVENT 0x14000000
#define CLR_TOKEN_PROPERTYMAP 0x15000000
#define CLR_TOKEN_PROPERTY 0x17000000
#define CLR_TOKEN_METHODSEMANTICS 0x18000000
#define CLR_TOKEN_METHODIMPL 0x19000000
#define CLR_TOKEN_MODULEREF 0x1A000000
#define CLR_TOKEN_TYPESPEC 0x1B000000
#define CLR_TOKEN_ENCLOG 0x1C000000
#define CLR_TOKEN_IMPLMAP 0x1D000000
#define CLR_TOKEN_ENCMAP 0x1E000000
#define CLR_TOKEN_ASSEMBLY 0x20000000
#define CLR_TOKEN_ASSEMBLYREF 0x23000000
#define CLR_TOKEN_FILE 0x26000000
#define CLR_TOKEN_EXPORTEDTYPE 0x27000000
#define CLR_TOKEN_MANIFESTRESOURCE 0x28000000
#define CLR_TOKEN_NESTEDCLASS 0x29000000
#define CLR_TOKEN_USERSTRING 0x70000000

// Typedef flags
#define CLR_TYPEDEF_VIS_MASK 7
#define CLR_TYPEDEF_VIS_PRIVATE 0
#define CLR_TYPEDEF_VIS_PUBLIC 1
#define CLR_TYPEDEF_VIS_NESTED_PUBLIC 2
#define CLR_TYPEDEF_VIS_NESTED_PRIVATE 3
#define CLR_TYPEDEF_VIS_NESTED_FAMILY 4
#define CLR_TYPEDEF_VIS_NESTED_ASSEMBLY 5
#define CLR_TYPEDEF_VIS_NESTED_FAMANDASSEM 6
#define CLR_TYPEDEF_VIS_NESTED_FAMORASSEM 7
#define CLR_TYPEDEF_LAYOUT_MASK 0x18
#define CLR_TYPEDEF_LAYOUT_AUTO 0
#define CLR_TYPEDEF_LAYOUT_SEQUENTIAL 8
#define CLR_TYPEDEF_LAYOUT_EXPLICIT 0x10
#define CLR_TYPEDEF_SEMANTICS_MASK 0x5A0
#define CLR_TYPEDEF_SEMANTICS_INTERFACE 0x20
#define CLR_TYPEDEF_SEMANTICS_ABSTRACT 0x80
#define CLR_TYPEDEF_SEMANTICS_SEALED 0x100
#define CLR_TYPEDEF_SEMANTICS_SPECIALNAME 0x400
#define CLR_TYPEDEF_TYPEIMPL_MASK 0x103000
#define CLR_TYPEDEF_TYPEIMPL_IMPORT 0x1000
#define CLR_TYPEDEF_TYPEIMPL_SERIALIZABLE 0x2000
#define CLR_TYPEDEF_TYPEIMPL_BEFOREFIELDINIT 0x100000
#define CLR_TYPEDEF_STRING_MASK 0x30000
#define CLR_TYPEDEF_STRING_ANSI 0
#define CLR_TYPEDEF_STRING_UNICODE 0x10000
#define CLR_TYPEDEF_STRING_AUTOCHAR 0x20000
#define CLR_TYPEDEF_RESERVED_MASK 0x4080
#define CLR_TYPEDEF_RESERVED_RTSPECIALNAME 0x800
#define CLR_TYPEDEF_RESERVED_DECLSECURITY 0x40000

// Data types for signatures
#define CLR_DATATYPE_VOID 1
#define CLR_DATATYPE_BOOLEAN 2
#define CLR_DATATYPE_CHAR 3
#define CLR_DATATYPE_SBYTE 4
#define CLR_DATATYPE_BYTE 5
#define CLR_DATATYPE_INT16 6
#define CLR_DATATYPE_UINT16 7
#define CLR_DATATYPE_INT32 8
#define CLR_DATATYPE_UINT32 9
#define CLR_DATATYPE_INT64 0xA
#define CLR_DATATYPE_UINT64 0xB
#define CLR_DATATYPE_SINGLE 0xC
#define CLR_DATATYPE_DOUBLE 0xD
#define CLR_DATATYPE_STRING 0xE
#define CLR_DATATYPE_PTR 0xF
#define CLR_DATATYPE_BYREF 0x10
#define CLR_DATATYPE_VALUETYPE 0x11
#define CLR_DATATYPE_CLASS 0x12
#define CLR_DATATYPE_GENERICPARAM 0x13 // assumed meaning of new type from CLR 1.2
#define CLR_DATATYPE_ARRAY 0x14
#define CLR_DATATYPE_GENERIC 0x15 // assumed meaning of new type from CLR 1.2
#define CLR_DATATYPE_TYPEDREFERENCE 0x16
#define CLR_DATATYPE_INTPTR 0x18
#define CLR_DATATYPE_UINTPTR 0x19
#define CLR_DATATYPE_FUNCPTR 0x1B
#define CLR_DATATYPE_OBJECT 0x1C
#define CLR_DATATYPE_VECTOR 0x1D
#define CLR_DATATYPE_UNKNOWN_CLR12 0x1E
#define CLR_DATATYPE_MOD_REQUIRED 0x1F
#define CLR_DATATYPE_MOD_OPTIONAL 0x20
#define CLR_DATATYPE_SENTINEL 0x41
#define CLR_DATATYPE_PINNED 0x45

// Calling convention flags
#define CLR_CALLCONV_DEFAULT 0
#define CLR_CALLCONV_VARARG 5
#define CLR_CALLCONV_FIELD 6
#define CLR_CALLCONV_LOCAL 7
#define CLR_CALLCONV_PROPERTY 8
#define CLR_CALLCONV_UNMANAGED 9
#define CLR_CALLCONV_GENERIC 0x10 // assumed meaning of new type from CLR 1.2
#define CLR_CALLCONV_INSTANCE 0x20
#define CLR_CALLCONV_EXPLICITTHIS 0x40

// Field flags
#define CLR_FIELD_ACCESS_MASK 7
#define CLR_FIELD_ACCESS_PRIVATESCOPE 0
#define CLR_FIELD_ACCESS_PRIVATE 1
#define CLR_FIELD_ACCESS_FAMANDASSEM 2
#define CLR_FIELD_ACCESS_ASSEMBLY 3
#define CLR_FIELD_ACCESS_FAMILY 4
#define CLR_FIELD_ACCESS_FAMORASSEM 5
#define CLR_FIELD_ACCESS_PUBLIC 6
#define CLR_FIELD_CONTRACT_STATIC 0x10
#define CLR_FIELD_CONTRACT_INITONLY 0x20
#define CLR_FIELD_CONTRACT_LITERAL 0x40
#define CLR_FIELD_CONTRACT_NOTSERIALIZED 0x80
#define CLR_FIELD_CONTRACT_SPECIALNAME 0x200
#define CLR_FIELD_RESERVED_RTSPECIALNAME 0x400
#define CLR_FIELD_RESERVED_CONSTANT_RECORD 0x8000
#define CLR_FIELD_RESERVED_FIELDRVA 0x100

// Method flags
#define CLR_METHOD_ACCESS_MASK 7
#define CLR_METHOD_ACCESS_PRIVATESCOPE 0
#define CLR_METHOD_ACCESS_PRIVATE 1
#define CLR_METHOD_ACCESS_FAMANDASSEM 2
#define CLR_METHOD_ACCESS_ASSEMBLY 3
#define CLR_METHOD_ACCESS_FAMILY 4
#define CLR_METHOD_ACCESS_FAMORASSEM 5
#define CLR_METHOD_ACCESS_PUBLIC 6
#define CLR_METHOD_CONTRACT_STATIC 0x10
#define CLR_METHOD_CONTRACT_FINAL 0x20
#define CLR_METHOD_CONTRACT_VIRTUAL 0x40
#define CLR_METHOD_CONTRACT_HIDEBYSIG 0x80
#define CLR_METHOD_VIRTUAL_NEWSLOT 0x100
#define CLR_METHOD_IMPL_ABSTRACT 0x400
#define CLR_METHOD_IMPL_SPECIALNAME 0x800
#define CLR_METHOD_IMPL_UNMANAGEDEXPORT 8
#define CLR_METHOD_IMPL_PINVOKE 0x2000
#define CLR_METHOD_RESERVED_RTSPECIALNAME 0x1000
#define CLR_METHOD_RESERVED_DECLSECURITY 0x4000
#define CLR_METHOD_RESERVED_REQSECOBJ 0x8000

// Method implementation flags
#define CLR_METHODIMPL_CODETYPE_MASK 3
#define CLR_METHODIMPL_CODETYPE_CIL 0
#define CLR_METHODIMPL_CODETYPE_NATIVE 1
#define CLR_METHODIMPL_CODETYPE_OPTIL 2
#define CLR_METHODIMPL_CODETYPE_RUNTIME 3
#define CLR_METHODIMPL_UNMANAGED 4
#define CLR_METHODIMPL_FORWARDREF 0x10
#define CLR_METHODIMPL_PRESERVESIG 0x80
#define CLR_METHODIMPL_INTERNALCALL 0x1000
#define CLR_METHODIMPL_SYNCHRONIZED 0x20
#define CLR_METHODIMPL_NOINLINING 8

// Type definition/reference flags
#define CLR_TYPEDEFORREF_TYPEDEF 0
#define CLR_TYPEDEFORREF_TYPEREF 1
#define CLR_TYPEDEFORREF_TYPESPEC 2


#endif
