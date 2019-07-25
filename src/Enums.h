#ifndef ENUMS_INCLUDED
#define ENUMS_INCLUDED


///Diagnosticlevels that can be used for logfiles or outputs to the console
enum DiagnosticLevel : int{

	DIAG_ERROR = 0,
	DIAG_WARNING,
	DIAG_INFO,
	DIAG_DEBUG,
	DIAG_VERBOSE
};

/// Mode in which the vehicle should drive
enum DriveMode : int {
	automatic = 1,
	manual = 2
};

/// Testmode and actual driving mode
enum TestMode : int {
	freeMode = 1,
	testMode = 2
};

/// Commands that can be entered by the user
enum Command : int {
	invalid_cmd = 0,
	abort_cmd = 1,
	setTimeout_cmd = 2,
	setDistance_cmd = 3,
	search_cmd = 4,
	drive_cmd = 5,
	setLog_cmd = 6,
	script_cmd = 7,
	setDriveMode_cmd = 8,
	setTestMode_cmd = 9
};

#endif //ENUMS_INCLUDED
