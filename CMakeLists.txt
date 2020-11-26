
include(cpfInitPackageProject)
include(cpfAddCppPackage)


cpfInitPackageProject()

set( briefDescription "A helper package that I use for experiments related to the dependency versioning problem." )
set( longDescription "" )


set( PACKAGE_PUBLIC_HEADER
	libB1.h
)

set( PACKAGE_PRODUCTION_FILES
	libB1.cpp
)

set(dvpLibC_direct dvpLibC_2_0_0)

############################################## Add Package #################################
cpfAddCppPackage( 
	TYPE					LIB
	OWNER 					Knitschi
	BRIEF_DESCRIPTION		${briefDescription}
	LONG_DESCRIPTION		${longDescription}
	PACKAGE_NAMESPACE		dvpLibB1
	PUBLIC_HEADER			${PACKAGE_PUBLIC_HEADER}
	PRODUCTION_FILES		${PACKAGE_PRODUCTION_FILES}
	LINKED_LIBRARIES		${dvpLibC_direct}
)

cpfSetupInCodeVersionMechanism()

target_compile_definitions(${PROJECT_NAME} PRIVATE dvpLibC_direct=${dvpLibC_direct})