
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

############################################## Add Package #################################
cpfAddCppPackage( 
	TYPE					LIB
	OWNER 					Knitschi
	BRIEF_DESCRIPTION		${briefDescription}
	LONG_DESCRIPTION		${longDescription}
	PACKAGE_NAMESPACE		dvpLibB1
	PUBLIC_HEADER			${PACKAGE_PUBLIC_HEADER}
	PRODUCTION_FILES		${PACKAGE_PRODUCTION_FILES}
	LINKED_LIBRARIES		dvpLibC_2_0_0
)

cpfGetInCodeVersion(inCodeVersion ${PROJECT_VERSION})
target_compile_definitions(${PROJECT_NAME} PRIVATE CPF_IN_CODE_VERSION=${inCodeVersion})