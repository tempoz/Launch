#include <windows.h>
#include <shlobj.h>
#include <shlwapi.h>
#include <objbase.h>

// Change this value to the path of your launch target.
auto launchTarget = L".\\LaunchTarget";

int main()
{
  ShellExecuteW(NULL, L"open", launchTarget,
    NULL, NULL, SW_HIDE);
  return 0;
}