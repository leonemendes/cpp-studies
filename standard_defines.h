#ifndef STANDARD_DEFINES_H
#define STANDARD_DEFINES_H

// DEBUG LEVEL
const int DebugLevel = 0;
const int DebugLevelShortestPath = 1;

// TYPE DEIFINITIONS

enum ReturnStatus
{
    ReturnError = -1,
    ReturnSuccess = 0,
    ReturnWarning = 1,
    ReturnEndOfLoop = 2,
    ReturnNotFound = 3,
};


#endif