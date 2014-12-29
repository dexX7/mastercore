#ifndef MASTERCOIN_SCRIPT_H
#define MASTERCOIN_SCRIPT_H

#include <string>
#include <vector>

class CScript;

bool GetScriptPushes(const CScript& scriptIn, std::vector<std::string>& vchValuesRet);

#endif // MASTERCOIN_SCRIPT_H
