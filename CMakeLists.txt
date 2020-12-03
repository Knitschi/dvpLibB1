
include(cpfInitPackageProject)
include(cpfAddCppPackage)


cpfInitPackageProject()

set( briefDescription "A helper package that I use for experiments related to the dependency versioning problem." )
set( longDescription "" )


set( PACKAGE_PUBLIC_HEADER
	libB1.h
	dvpLibB1VersionMacros.h
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
	PACKAGE_NAMESPACE		${PROJECT_NAME}
	PUBLIC_HEADER			${PACKAGE_PUBLIC_HEADER}
	PRODUCTION_FILES		${PACKAGE_PRODUCTION_FILES}
	LINKED_LIBRARIES		dvpLibC_2_0_0
)

cpfSetupInCodeVersionMechanism()
