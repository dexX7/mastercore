#include "mastercore_script.h"

#include <string>
#include <vector>

#include "script.h"

bool GetScriptPushes(const CScript& scriptIn, std::vector<std::string>& vchValuesRet)
{
    CScript::const_iterator pc = scriptIn.begin();
    while (pc < scriptIn.end())
    {
        opcodetype opcode;
        std::vector<unsigned char> data;
        if (!scriptIn.GetOp(pc, opcode, data))
            return false;
        if (0 <= opcode && opcode <= OP_PUSHDATA4)
            vchValuesRet.push_back(ValueString(data));
    }
    return true;
}
