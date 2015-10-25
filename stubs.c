#include <windows.h>

HINSTANCE realWinmmDll;

void setWinmmDll(HINSTANCE inPtr)
{
	realWinmmDll = inPtr;
}

//
//Stubs for functions to call from the real winmm.dll
//

LRESULT WINAPI fake_CloseDriver(HDRVR a0, LONG a1, LONG a2)
{

    static LRESULT (*funcp)(HDRVR a0, LONG a1, LONG a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "CloseDriver");
    return (*funcp)(a0, a1, a2);
}

HDRVR WINAPI fake_OpenDriver(LPCWSTR a0, LPCWSTR a1, LONG a2)
{

    static HDRVR (*funcp)(LPCWSTR a0, LPCWSTR a1, LONG a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "OpenDriver");
    return (*funcp)(a0, a1, a2);
}

LRESULT WINAPI fake_SendDriverMessage(HDRVR a0, UINT a1, LONG a2, LONG a3)
{

    static LRESULT (*funcp)(HDRVR a0, UINT a1, LONG a2, LONG a3);
    funcp = (void*)GetProcAddress(realWinmmDll, "SendDriverMessage");
    return (*funcp)(a0, a1, a2, a3);
}

HMODULE WINAPI fake_DrvGetModuleHandle(HDRVR a0)
{

    static HMODULE (*funcp)(HDRVR a0);
    funcp = (void*)GetProcAddress(realWinmmDll, "DrvGetModuleHandle");
    return (*funcp)(a0);
}

HMODULE WINAPI fake_GetDriverModuleHandle(HDRVR a0)
{

    static HMODULE (*funcp)(HDRVR a0);
    funcp = (void*)GetProcAddress(realWinmmDll, "GetDriverModuleHandle");
    return (*funcp)(a0);
}

LRESULT WINAPI fake_DefDriverProc(DWORD a0, HDRVR a1, UINT a2, LPARAM a3, LPARAM a4)
{

    static LRESULT (*funcp)(DWORD a0, HDRVR a1, UINT a2, LPARAM a3, LPARAM a4);
    funcp = (void*)GetProcAddress(realWinmmDll, "DefDriverProc");
    return (*funcp)(a0, a1, a2, a3, a4);
}

UINT WINAPI fake_mmsystemGetVersion()
{

    static UINT (*funcp)();
    funcp = (void*)GetProcAddress(realWinmmDll, "mmsystemGetVersion");
    return (*funcp)();
}

BOOL WINAPI fake_sndPlaySoundA(LPCSTR a0, UINT a1)
{

    static BOOL (*funcp)(LPCSTR a0, UINT a1);
    funcp = (void*)GetProcAddress(realWinmmDll, "sndPlaySoundA");
    return (*funcp)(a0, a1);
}

BOOL WINAPI fake_sndPlaySoundW(LPCWSTR a0, UINT a1)
{

    static BOOL (*funcp)(LPCWSTR a0, UINT a1);
    funcp = (void*)GetProcAddress(realWinmmDll, "sndPlaySoundW");
    return (*funcp)(a0, a1);
}

BOOL WINAPI fake_PlaySound(LPCSTR a0, HMODULE a1, DWORD a2)
{

    static BOOL (*funcp)(LPCSTR a0, HMODULE a1, DWORD a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "PlaySound");
    return (*funcp)(a0, a1, a2);
}

BOOL WINAPI fake_PlaySoundA(LPCSTR a0, HMODULE a1, DWORD a2)
{

    static BOOL (*funcp)(LPCSTR a0, HMODULE a1, DWORD a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "PlaySoundA");
    return (*funcp)(a0, a1, a2);
}

BOOL WINAPI fake_PlaySoundW(LPCWSTR a0, HMODULE a1, DWORD a2)
{

    static BOOL (*funcp)(LPCWSTR a0, HMODULE a1, DWORD a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "PlaySoundW");
    return (*funcp)(a0, a1, a2);
}

UINT WINAPI fake_waveOutGetNumDevs()
{

    static UINT (*funcp)();
    funcp = (void*)GetProcAddress(realWinmmDll, "waveOutGetNumDevs");
    return (*funcp)();
}

MMRESULT WINAPI fake_waveOutGetDevCapsA(UINT a0, LPWAVEOUTCAPSA a1, UINT a2)
{

    static MMRESULT (*funcp)(UINT a0, LPWAVEOUTCAPSA a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "waveOutGetDevCapsA");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_waveOutGetDevCapsW(UINT a0, LPWAVEOUTCAPSW a1, UINT a2)
{

    static MMRESULT (*funcp)(UINT a0, LPWAVEOUTCAPSW a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "waveOutGetDevCapsW");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_waveOutGetVolume(HWAVEOUT a0, PDWORD a1)
{

    static MMRESULT (*funcp)(HWAVEOUT a0, PDWORD a1);
    funcp = (void*)GetProcAddress(realWinmmDll, "waveOutGetVolume");
    return (*funcp)(a0, a1);
}

MMRESULT WINAPI fake_waveOutSetVolume(HWAVEOUT a0, DWORD a1)
{

    static MMRESULT (*funcp)(HWAVEOUT a0, DWORD a1);
    funcp = (void*)GetProcAddress(realWinmmDll, "waveOutSetVolume");
    return (*funcp)(a0, a1);
}

MMRESULT WINAPI fake_waveOutGetErrorTextA(MMRESULT a0, LPSTR a1, UINT a2)
{

    static MMRESULT (*funcp)(MMRESULT a0, LPSTR a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "waveOutGetErrorTextA");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_waveOutGetErrorTextW(MMRESULT a0, LPWSTR a1, UINT a2)
{

    static MMRESULT (*funcp)(MMRESULT a0, LPWSTR a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "waveOutGetErrorTextW");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_waveOutOpen(LPHWAVEOUT a0, UINT a1, LPCWAVEFORMATEX a2, DWORD a3, DWORD a4, DWORD a5)
{

    static MMRESULT (*funcp)(LPHWAVEOUT a0, UINT a1, LPCWAVEFORMATEX a2, DWORD a3, DWORD a4, DWORD a5);
    funcp = (void*)GetProcAddress(realWinmmDll, "waveOutOpen");
    return (*funcp)(a0, a1, a2, a3, a4, a5);
}

MMRESULT WINAPI fake_waveOutClose(HWAVEOUT a0)
{

    static MMRESULT (*funcp)(HWAVEOUT a0);
    funcp = (void*)GetProcAddress(realWinmmDll, "waveOutClose");
    return (*funcp)(a0);
}

MMRESULT WINAPI fake_waveOutPrepareHeader(HWAVEOUT a0, LPWAVEHDR a1, UINT a2)
{

    static MMRESULT (*funcp)(HWAVEOUT a0, LPWAVEHDR a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "waveOutPrepareHeader");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_waveOutUnprepareHeader(HWAVEOUT a0, LPWAVEHDR a1, UINT a2)
{

    static MMRESULT (*funcp)(HWAVEOUT a0, LPWAVEHDR a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "waveOutUnprepareHeader");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_waveOutWrite(HWAVEOUT a0, LPWAVEHDR a1, UINT a2)
{

    static MMRESULT (*funcp)(HWAVEOUT a0, LPWAVEHDR a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "waveOutWrite");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_waveOutPause(HWAVEOUT a0)
{

    static MMRESULT (*funcp)(HWAVEOUT a0);
    funcp = (void*)GetProcAddress(realWinmmDll, "waveOutPause");
    return (*funcp)(a0);
}

MMRESULT WINAPI fake_waveOutRestart(HWAVEOUT a0)
{

    static MMRESULT (*funcp)(HWAVEOUT a0);
    funcp = (void*)GetProcAddress(realWinmmDll, "waveOutRestart");
    return (*funcp)(a0);
}

MMRESULT WINAPI fake_waveOutReset(HWAVEOUT a0)
{

    static MMRESULT (*funcp)(HWAVEOUT a0);
    funcp = (void*)GetProcAddress(realWinmmDll, "waveOutReset");
    return (*funcp)(a0);
}

MMRESULT WINAPI fake_waveOutBreakLoop(HWAVEOUT a0)
{

    static MMRESULT (*funcp)(HWAVEOUT a0);
    funcp = (void*)GetProcAddress(realWinmmDll, "waveOutBreakLoop");
    return (*funcp)(a0);
}

MMRESULT WINAPI fake_waveOutGetPosition(HWAVEOUT a0, LPMMTIME a1, UINT a2)
{

    static MMRESULT (*funcp)(HWAVEOUT a0, LPMMTIME a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "waveOutGetPosition");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_waveOutGetPitch(HWAVEOUT a0, PDWORD a1)
{

    static MMRESULT (*funcp)(HWAVEOUT a0, PDWORD a1);
    funcp = (void*)GetProcAddress(realWinmmDll, "waveOutGetPitch");
    return (*funcp)(a0, a1);
}

MMRESULT WINAPI fake_waveOutSetPitch(HWAVEOUT a0, DWORD a1)
{

    static MMRESULT (*funcp)(HWAVEOUT a0, DWORD a1);
    funcp = (void*)GetProcAddress(realWinmmDll, "waveOutSetPitch");
    return (*funcp)(a0, a1);
}

MMRESULT WINAPI fake_waveOutGetPlaybackRate(HWAVEOUT a0, PDWORD a1)
{

    static MMRESULT (*funcp)(HWAVEOUT a0, PDWORD a1);
    funcp = (void*)GetProcAddress(realWinmmDll, "waveOutGetPlaybackRate");
    return (*funcp)(a0, a1);
}

MMRESULT WINAPI fake_waveOutSetPlaybackRate(HWAVEOUT a0, DWORD a1)
{

    static MMRESULT (*funcp)(HWAVEOUT a0, DWORD a1);
    funcp = (void*)GetProcAddress(realWinmmDll, "waveOutSetPlaybackRate");
    return (*funcp)(a0, a1);
}

MMRESULT WINAPI fake_waveOutGetID(HWAVEOUT a0, LPUINT a1)
{

    static MMRESULT (*funcp)(HWAVEOUT a0, LPUINT a1);
    funcp = (void*)GetProcAddress(realWinmmDll, "waveOutGetID");
    return (*funcp)(a0, a1);
}

MMRESULT WINAPI fake_waveOutMessage(HWAVEOUT a0, UINT a1, DWORD a2, DWORD a3)
{

    static MMRESULT (*funcp)(HWAVEOUT a0, UINT a1, DWORD a2, DWORD a3);
    funcp = (void*)GetProcAddress(realWinmmDll, "waveOutMessage");
    return (*funcp)(a0, a1, a2, a3);
}

UINT WINAPI fake_waveInGetNumDevs()
{

    static UINT (*funcp)();
    funcp = (void*)GetProcAddress(realWinmmDll, "waveInGetNumDevs");
    return (*funcp)();
}

MMRESULT WINAPI fake_waveInGetDevCapsA(UINT a0, LPWAVEINCAPSA a1, UINT a2)
{

    static MMRESULT (*funcp)(UINT a0, LPWAVEINCAPSA a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "waveInGetDevCapsA");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_waveInGetDevCapsW(UINT a0, LPWAVEINCAPSW a1, UINT a2)
{

    static MMRESULT (*funcp)(UINT a0, LPWAVEINCAPSW a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "waveInGetDevCapsW");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_waveInGetErrorTextA(MMRESULT a0, LPSTR a1, UINT a2)
{

    static MMRESULT (*funcp)(MMRESULT a0, LPSTR a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "waveInGetErrorTextA");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_waveInGetErrorTextW(MMRESULT a0, LPWSTR a1, UINT a2)
{

    static MMRESULT (*funcp)(MMRESULT a0, LPWSTR a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "waveInGetErrorTextW");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_waveInOpen(LPHWAVEIN a0, UINT a1, LPCWAVEFORMATEX a2, DWORD a3, DWORD a4, DWORD a5)
{

    static MMRESULT (*funcp)(LPHWAVEIN a0, UINT a1, LPCWAVEFORMATEX a2, DWORD a3, DWORD a4, DWORD a5);
    funcp = (void*)GetProcAddress(realWinmmDll, "waveInOpen");
    return (*funcp)(a0, a1, a2, a3, a4, a5);
}

MMRESULT WINAPI fake_waveInClose(HWAVEIN a0)
{

    static MMRESULT (*funcp)(HWAVEIN a0);
    funcp = (void*)GetProcAddress(realWinmmDll, "waveInClose");
    return (*funcp)(a0);
}

MMRESULT WINAPI fake_waveInPrepareHeader(HWAVEIN a0, LPWAVEHDR a1, UINT a2)
{

    static MMRESULT (*funcp)(HWAVEIN a0, LPWAVEHDR a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "waveInPrepareHeader");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_waveInUnprepareHeader(HWAVEIN a0, LPWAVEHDR a1, UINT a2)
{

    static MMRESULT (*funcp)(HWAVEIN a0, LPWAVEHDR a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "waveInUnprepareHeader");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_waveInAddBuffer(HWAVEIN a0, LPWAVEHDR a1, UINT a2)
{

    static MMRESULT (*funcp)(HWAVEIN a0, LPWAVEHDR a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "waveInAddBuffer");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_waveInStart(HWAVEIN a0)
{

    static MMRESULT (*funcp)(HWAVEIN a0);
    funcp = (void*)GetProcAddress(realWinmmDll, "waveInStart");
    return (*funcp)(a0);
}

MMRESULT WINAPI fake_waveInStop(HWAVEIN a0)
{

    static MMRESULT (*funcp)(HWAVEIN a0);
    funcp = (void*)GetProcAddress(realWinmmDll, "waveInStop");
    return (*funcp)(a0);
}

MMRESULT WINAPI fake_waveInReset(HWAVEIN a0)
{

    static MMRESULT (*funcp)(HWAVEIN a0);
    funcp = (void*)GetProcAddress(realWinmmDll, "waveInReset");
    return (*funcp)(a0);
}

MMRESULT WINAPI fake_waveInGetPosition(HWAVEIN a0, LPMMTIME a1, UINT a2)
{

    static MMRESULT (*funcp)(HWAVEIN a0, LPMMTIME a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "waveInGetPosition");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_waveInGetID(HWAVEIN a0, LPUINT a1)
{

    static MMRESULT (*funcp)(HWAVEIN a0, LPUINT a1);
    funcp = (void*)GetProcAddress(realWinmmDll, "waveInGetID");
    return (*funcp)(a0, a1);
}

MMRESULT WINAPI fake_waveInMessage(HWAVEIN a0, UINT a1, DWORD a2, DWORD a3)
{

    static MMRESULT (*funcp)(HWAVEIN a0, UINT a1, DWORD a2, DWORD a3);
    funcp = (void*)GetProcAddress(realWinmmDll, "waveInMessage");
    return (*funcp)(a0, a1, a2, a3);
}

UINT WINAPI fake_midiOutGetNumDevs()
{

    static UINT (*funcp)();
    funcp = (void*)GetProcAddress(realWinmmDll, "midiOutGetNumDevs");
    return (*funcp)();
}

MMRESULT WINAPI fake_midiStreamOpen(LPHMIDISTRM a0, LPUINT a1, DWORD a2, DWORD a3, DWORD a4, DWORD a5)
{

    static MMRESULT (*funcp)(LPHMIDISTRM a0, LPUINT a1, DWORD a2, DWORD a3, DWORD a4, DWORD a5);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiStreamOpen");
    return (*funcp)(a0, a1, a2, a3, a4, a5);
}

MMRESULT WINAPI fake_midiStreamClose(HMIDISTRM a0)
{

    static MMRESULT (*funcp)(HMIDISTRM a0);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiStreamClose");
    return (*funcp)(a0);
}

MMRESULT WINAPI fake_midiStreamProperty(HMIDISTRM a0, LPBYTE a1, DWORD a2)
{

    static MMRESULT (*funcp)(HMIDISTRM a0, LPBYTE a1, DWORD a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiStreamProperty");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_midiStreamPosition(HMIDISTRM a0, LPMMTIME a1, UINT a2)
{

    static MMRESULT (*funcp)(HMIDISTRM a0, LPMMTIME a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiStreamPosition");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_midiStreamOut(HMIDISTRM a0, LPMIDIHDR a1, UINT a2)
{

    static MMRESULT (*funcp)(HMIDISTRM a0, LPMIDIHDR a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiStreamOut");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_midiStreamPause(HMIDISTRM a0)
{

    static MMRESULT (*funcp)(HMIDISTRM a0);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiStreamPause");
    return (*funcp)(a0);
}

MMRESULT WINAPI fake_midiStreamRestart(HMIDISTRM a0)
{

    static MMRESULT (*funcp)(HMIDISTRM a0);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiStreamRestart");
    return (*funcp)(a0);
}

MMRESULT WINAPI fake_midiStreamStop(HMIDISTRM a0)
{

    static MMRESULT (*funcp)(HMIDISTRM a0);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiStreamStop");
    return (*funcp)(a0);
}

MMRESULT WINAPI fake_midiConnect(HMIDI a0, HMIDIOUT a1, PVOID a2)
{

    static MMRESULT (*funcp)(HMIDI a0, HMIDIOUT a1, PVOID a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiConnect");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_midiDisconnect(HMIDI a0, HMIDIOUT a1, PVOID a2)
{

    static MMRESULT (*funcp)(HMIDI a0, HMIDIOUT a1, PVOID a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiDisconnect");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_midiOutGetDevCapsA(UINT a0, LPMIDIOUTCAPSA a1, UINT a2)
{

    static MMRESULT (*funcp)(UINT a0, LPMIDIOUTCAPSA a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiOutGetDevCapsA");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_midiOutGetDevCapsW(UINT a0, LPMIDIOUTCAPSW a1, UINT a2)
{

    static MMRESULT (*funcp)(UINT a0, LPMIDIOUTCAPSW a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiOutGetDevCapsW");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_midiOutGetVolume(HMIDIOUT a0, PDWORD a1)
{

    static MMRESULT (*funcp)(HMIDIOUT a0, PDWORD a1);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiOutGetVolume");
    return (*funcp)(a0, a1);
}

MMRESULT WINAPI fake_midiOutSetVolume(HMIDIOUT a0, DWORD a1)
{

    static MMRESULT (*funcp)(HMIDIOUT a0, DWORD a1);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiOutSetVolume");
    return (*funcp)(a0, a1);
}

MMRESULT WINAPI fake_midiOutGetErrorTextA(MMRESULT a0, LPSTR a1, UINT a2)
{

    static MMRESULT (*funcp)(MMRESULT a0, LPSTR a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiOutGetErrorTextA");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_midiOutGetErrorTextW(MMRESULT a0, LPWSTR a1, UINT a2)
{

    static MMRESULT (*funcp)(MMRESULT a0, LPWSTR a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiOutGetErrorTextW");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_midiOutOpen(LPHMIDIOUT a0, UINT a1, DWORD a2, DWORD a3, DWORD a4)
{

    static MMRESULT (*funcp)(LPHMIDIOUT a0, UINT a1, DWORD a2, DWORD a3, DWORD a4);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiOutOpen");
    return (*funcp)(a0, a1, a2, a3, a4);
}

MMRESULT WINAPI fake_midiOutClose(HMIDIOUT a0)
{

    static MMRESULT (*funcp)(HMIDIOUT a0);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiOutClose");
    return (*funcp)(a0);
}

MMRESULT WINAPI fake_midiOutPrepareHeader(HMIDIOUT a0, LPMIDIHDR a1, UINT a2)
{

    static MMRESULT (*funcp)(HMIDIOUT a0, LPMIDIHDR a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiOutPrepareHeader");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_midiOutUnprepareHeader(HMIDIOUT a0, LPMIDIHDR a1, UINT a2)
{

    static MMRESULT (*funcp)(HMIDIOUT a0, LPMIDIHDR a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiOutUnprepareHeader");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_midiOutShortMsg(HMIDIOUT a0, DWORD a1)
{

    static MMRESULT (*funcp)(HMIDIOUT a0, DWORD a1);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiOutShortMsg");
    return (*funcp)(a0, a1);
}

MMRESULT WINAPI fake_midiOutLongMsg(HMIDIOUT a0, LPMIDIHDR a1, UINT a2)
{

    static MMRESULT (*funcp)(HMIDIOUT a0, LPMIDIHDR a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiOutLongMsg");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_midiOutReset(HMIDIOUT a0)
{

    static MMRESULT (*funcp)(HMIDIOUT a0);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiOutReset");
    return (*funcp)(a0);
}

MMRESULT WINAPI fake_midiOutCachePatches(HMIDIOUT a0, UINT a1, LPWORD a2, UINT a3)
{

    static MMRESULT (*funcp)(HMIDIOUT a0, UINT a1, LPWORD a2, UINT a3);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiOutCachePatches");
    return (*funcp)(a0, a1, a2, a3);
}

MMRESULT WINAPI fake_midiOutCacheDrumPatches(HMIDIOUT a0, UINT a1, LPWORD a2, UINT a3)
{

    static MMRESULT (*funcp)(HMIDIOUT a0, UINT a1, LPWORD a2, UINT a3);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiOutCacheDrumPatches");
    return (*funcp)(a0, a1, a2, a3);
}

MMRESULT WINAPI fake_midiOutGetID(HMIDIOUT a0, LPUINT a1)
{

    static MMRESULT (*funcp)(HMIDIOUT a0, LPUINT a1);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiOutGetID");
    return (*funcp)(a0, a1);
}

MMRESULT WINAPI fake_midiOutMessage(HMIDIOUT a0, UINT a1, DWORD a2, DWORD a3)
{

    static MMRESULT (*funcp)(HMIDIOUT a0, UINT a1, DWORD a2, DWORD a3);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiOutMessage");
    return (*funcp)(a0, a1, a2, a3);
}

UINT WINAPI fake_midiInGetNumDevs()
{

    static UINT (*funcp)();
    funcp = (void*)GetProcAddress(realWinmmDll, "midiInGetNumDevs");
    return (*funcp)();
}

MMRESULT WINAPI fake_midiInGetDevCapsA(UINT a0, LPMIDIINCAPSA a1, UINT a2)
{

    static MMRESULT (*funcp)(UINT a0, LPMIDIINCAPSA a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiInGetDevCapsA");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_midiInGetDevCapsW(UINT a0, LPMIDIINCAPSW a1, UINT a2)
{

    static MMRESULT (*funcp)(UINT a0, LPMIDIINCAPSW a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiInGetDevCapsW");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_midiInGetErrorTextA(MMRESULT a0, LPSTR a1, UINT a2)
{

    static MMRESULT (*funcp)(MMRESULT a0, LPSTR a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiInGetErrorTextA");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_midiInGetErrorTextW(MMRESULT a0, LPWSTR a1, UINT a2)
{

    static MMRESULT (*funcp)(MMRESULT a0, LPWSTR a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiInGetErrorTextW");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_midiInOpen(LPHMIDIIN a0, UINT a1, DWORD a2, DWORD a3, DWORD a4)
{

    static MMRESULT (*funcp)(LPHMIDIIN a0, UINT a1, DWORD a2, DWORD a3, DWORD a4);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiInOpen");
    return (*funcp)(a0, a1, a2, a3, a4);
}

MMRESULT WINAPI fake_midiInClose(HMIDIIN a0)
{

    static MMRESULT (*funcp)(HMIDIIN a0);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiInClose");
    return (*funcp)(a0);
}

MMRESULT WINAPI fake_midiInPrepareHeader(HMIDIIN a0, LPMIDIHDR a1, UINT a2)
{

    static MMRESULT (*funcp)(HMIDIIN a0, LPMIDIHDR a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiInPrepareHeader");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_midiInUnprepareHeader(HMIDIIN a0, LPMIDIHDR a1, UINT a2)
{

    static MMRESULT (*funcp)(HMIDIIN a0, LPMIDIHDR a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiInUnprepareHeader");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_midiInAddBuffer(HMIDIIN a0, LPMIDIHDR a1, UINT a2)
{

    static MMRESULT (*funcp)(HMIDIIN a0, LPMIDIHDR a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiInAddBuffer");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_midiInStart(HMIDIIN a0)
{

    static MMRESULT (*funcp)(HMIDIIN a0);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiInStart");
    return (*funcp)(a0);
}

MMRESULT WINAPI fake_midiInStop(HMIDIIN a0)
{

    static MMRESULT (*funcp)(HMIDIIN a0);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiInStop");
    return (*funcp)(a0);
}

MMRESULT WINAPI fake_midiInReset(HMIDIIN a0)
{

    static MMRESULT (*funcp)(HMIDIIN a0);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiInReset");
    return (*funcp)(a0);
}

MMRESULT WINAPI fake_midiInGetID(HMIDIIN a0, LPUINT a1)
{

    static MMRESULT (*funcp)(HMIDIIN a0, LPUINT a1);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiInGetID");
    return (*funcp)(a0, a1);
}

MMRESULT WINAPI fake_midiInMessage(HMIDIIN a0, UINT a1, DWORD a2, DWORD a3)
{

    static MMRESULT (*funcp)(HMIDIIN a0, UINT a1, DWORD a2, DWORD a3);
    funcp = (void*)GetProcAddress(realWinmmDll, "midiInMessage");
    return (*funcp)(a0, a1, a2, a3);
}

MMRESULT WINAPI fake_auxGetDevCapsW(UINT a0, LPAUXCAPSW a1, UINT a2)
{

    static MMRESULT (*funcp)(UINT a0, LPAUXCAPSW a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "auxGetDevCapsW");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_auxOutMessage(UINT a0, UINT a1, DWORD a2, DWORD a3)
{

    static MMRESULT (*funcp)(UINT a0, UINT a1, DWORD a2, DWORD a3);
    funcp = (void*)GetProcAddress(realWinmmDll, "auxOutMessage");
    return (*funcp)(a0, a1, a2, a3);
}

UINT WINAPI fake_mixerGetNumDevs()
{

    static UINT (*funcp)();
    funcp = (void*)GetProcAddress(realWinmmDll, "mixerGetNumDevs");
    return (*funcp)();
}

MMRESULT WINAPI fake_mixerGetDevCapsA(UINT a0, LPMIXERCAPSA a1, UINT a2)
{

    static MMRESULT (*funcp)(UINT a0, LPMIXERCAPSA a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "mixerGetDevCapsA");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_mixerGetDevCapsW(UINT a0, LPMIXERCAPSW a1, UINT a2)
{

    static MMRESULT (*funcp)(UINT a0, LPMIXERCAPSW a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "mixerGetDevCapsW");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_mixerOpen(LPHMIXER a0, UINT a1, DWORD a2, DWORD a3, DWORD a4)
{

    static MMRESULT (*funcp)(LPHMIXER a0, UINT a1, DWORD a2, DWORD a3, DWORD a4);
    funcp = (void*)GetProcAddress(realWinmmDll, "mixerOpen");
    return (*funcp)(a0, a1, a2, a3, a4);
}

MMRESULT WINAPI fake_mixerClose(HMIXER a0)
{

    static MMRESULT (*funcp)(HMIXER a0);
    funcp = (void*)GetProcAddress(realWinmmDll, "mixerClose");
    return (*funcp)(a0);
}

DWORD WINAPI fake_mixerMessage(HMIXER a0, UINT a1, DWORD a2, DWORD a3)
{

    static DWORD (*funcp)(HMIXER a0, UINT a1, DWORD a2, DWORD a3);
    funcp = (void*)GetProcAddress(realWinmmDll, "mixerMessage");
    return (*funcp)(a0, a1, a2, a3);
}

MMRESULT WINAPI fake_mixerGetLineInfoA(HMIXEROBJ a0, LPMIXERLINEA a1, DWORD a2)
{

    static MMRESULT (*funcp)(HMIXEROBJ a0, LPMIXERLINEA a1, DWORD a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "mixerGetLineInfoA");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_mixerGetLineInfoW(HMIXEROBJ a0, LPMIXERLINEW a1, DWORD a2)
{

    static MMRESULT (*funcp)(HMIXEROBJ a0, LPMIXERLINEW a1, DWORD a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "mixerGetLineInfoW");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_mixerGetID(HMIXEROBJ a0, PUINT a1, DWORD a2)
{

    static MMRESULT (*funcp)(HMIXEROBJ a0, PUINT a1, DWORD a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "mixerGetID");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_mixerGetLineControlsA(HMIXEROBJ a0, LPMIXERLINECONTROLSA a1, DWORD a2)
{

    static MMRESULT (*funcp)(HMIXEROBJ a0, LPMIXERLINECONTROLSA a1, DWORD a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "mixerGetLineControlsA");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_mixerGetLineControlsW(HMIXEROBJ a0, LPMIXERLINECONTROLSW a1, DWORD a2)
{

    static MMRESULT (*funcp)(HMIXEROBJ a0, LPMIXERLINECONTROLSW a1, DWORD a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "mixerGetLineControlsW");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_mixerGetControlDetailsA(HMIXEROBJ a0, LPMIXERCONTROLDETAILS a1, DWORD a2)
{

    static MMRESULT (*funcp)(HMIXEROBJ a0, LPMIXERCONTROLDETAILS a1, DWORD a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "mixerGetControlDetailsA");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_mixerGetControlDetailsW(HMIXEROBJ a0, LPMIXERCONTROLDETAILS a1, DWORD a2)
{

    static MMRESULT (*funcp)(HMIXEROBJ a0, LPMIXERCONTROLDETAILS a1, DWORD a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "mixerGetControlDetailsW");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_mixerSetControlDetails(HMIXEROBJ a0, LPMIXERCONTROLDETAILS a1, DWORD a2)
{

    static MMRESULT (*funcp)(HMIXEROBJ a0, LPMIXERCONTROLDETAILS a1, DWORD a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "mixerSetControlDetails");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_timeGetSystemTime(LPMMTIME a0, UINT a1)
{

    static MMRESULT (*funcp)(LPMMTIME a0, UINT a1);
    funcp = (void*)GetProcAddress(realWinmmDll, "timeGetSystemTime");
    return (*funcp)(a0, a1);
}

DWORD WINAPI fake_timeGetTime()
{

    static DWORD (*funcp)();
    funcp = (void*)GetProcAddress(realWinmmDll, "timeGetTime");
    return (*funcp)();
}

MMRESULT WINAPI fake_timeSetEvent(UINT a0, UINT a1, LPTIMECALLBACK a2, DWORD a3, UINT a4)
{

    static MMRESULT (*funcp)(UINT a0, UINT a1, LPTIMECALLBACK a2, DWORD a3, UINT a4);
    funcp = (void*)GetProcAddress(realWinmmDll, "timeSetEvent");
    return (*funcp)(a0, a1, a2, a3, a4);
}

MMRESULT WINAPI fake_timeKillEvent(UINT a0)
{

    static MMRESULT (*funcp)(UINT a0);
    funcp = (void*)GetProcAddress(realWinmmDll, "timeKillEvent");
    return (*funcp)(a0);
}

MMRESULT WINAPI fake_timeGetDevCaps(LPTIMECAPS a0, UINT a1)
{

    static MMRESULT (*funcp)(LPTIMECAPS a0, UINT a1);
    funcp = (void*)GetProcAddress(realWinmmDll, "timeGetDevCaps");
    return (*funcp)(a0, a1);
}

MMRESULT WINAPI fake_timeBeginPeriod(UINT a0)
{

    static MMRESULT (*funcp)(UINT a0);
    funcp = (void*)GetProcAddress(realWinmmDll, "timeBeginPeriod");
    return (*funcp)(a0);
}

MMRESULT WINAPI fake_timeEndPeriod(UINT a0)
{

    static MMRESULT (*funcp)(UINT a0);
    funcp = (void*)GetProcAddress(realWinmmDll, "timeEndPeriod");
    return (*funcp)(a0);
}

UINT WINAPI fake_joyGetNumDevs()
{

    static UINT (*funcp)();
    funcp = (void*)GetProcAddress(realWinmmDll, "joyGetNumDevs");
    return (*funcp)();
}

MMRESULT WINAPI fake_joyGetDevCapsA(UINT a0, LPJOYCAPSA a1, UINT a2)
{

    static MMRESULT (*funcp)(UINT a0, LPJOYCAPSA a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "joyGetDevCapsA");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_joyGetDevCapsW(UINT a0, LPJOYCAPSW a1, UINT a2)
{

    static MMRESULT (*funcp)(UINT a0, LPJOYCAPSW a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "joyGetDevCapsW");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_joyGetPos(UINT a0, LPJOYINFO a1)
{

    static MMRESULT (*funcp)(UINT a0, LPJOYINFO a1);
    funcp = (void*)GetProcAddress(realWinmmDll, "joyGetPos");
    return (*funcp)(a0, a1);
}

MMRESULT WINAPI fake_joyGetPosEx(UINT a0, LPJOYINFOEX a1)
{

    static MMRESULT (*funcp)(UINT a0, LPJOYINFOEX a1);
    funcp = (void*)GetProcAddress(realWinmmDll, "joyGetPosEx");
    return (*funcp)(a0, a1);
}

MMRESULT WINAPI fake_joyGetThreshold(UINT a0, LPUINT a1)
{

    static MMRESULT (*funcp)(UINT a0, LPUINT a1);
    funcp = (void*)GetProcAddress(realWinmmDll, "joyGetThreshold");
    return (*funcp)(a0, a1);
}

MMRESULT WINAPI fake_joyReleaseCapture(UINT a0)
{

    static MMRESULT (*funcp)(UINT a0);
    funcp = (void*)GetProcAddress(realWinmmDll, "joyReleaseCapture");
    return (*funcp)(a0);
}

MMRESULT WINAPI fake_joySetCapture(HWND a0, UINT a1, UINT a2, BOOL a3)
{

    static MMRESULT (*funcp)(HWND a0, UINT a1, UINT a2, BOOL a3);
    funcp = (void*)GetProcAddress(realWinmmDll, "joySetCapture");
    return (*funcp)(a0, a1, a2, a3);
}

MMRESULT WINAPI fake_joySetThreshold(UINT a0, UINT a1)
{

    static MMRESULT (*funcp)(UINT a0, UINT a1);
    funcp = (void*)GetProcAddress(realWinmmDll, "joySetThreshold");
    return (*funcp)(a0, a1);
}

FOURCC WINAPI fake_mmioStringToFOURCCA(LPCSTR a0, UINT a1)
{

    static FOURCC (*funcp)(LPCSTR a0, UINT a1);
    funcp = (void*)GetProcAddress(realWinmmDll, "mmioStringToFOURCCA");
    return (*funcp)(a0, a1);
}

FOURCC WINAPI fake_mmioStringToFOURCCW(LPCWSTR a0, UINT a1)
{

    static FOURCC (*funcp)(LPCWSTR a0, UINT a1);
    funcp = (void*)GetProcAddress(realWinmmDll, "mmioStringToFOURCCW");
    return (*funcp)(a0, a1);
}

LPMMIOPROC WINAPI fake_mmioInstallIOProcA(FOURCC a0, LPMMIOPROC a1, DWORD a2)
{

    static LPMMIOPROC (*funcp)(FOURCC a0, LPMMIOPROC a1, DWORD a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "mmioInstallIOProcA");
    return (*funcp)(a0, a1, a2);
}

LPMMIOPROC WINAPI fake_mmioInstallIOProcW(FOURCC a0, LPMMIOPROC a1, DWORD a2)
{

    static LPMMIOPROC (*funcp)(FOURCC a0, LPMMIOPROC a1, DWORD a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "mmioInstallIOProcW");
    return (*funcp)(a0, a1, a2);
}

HMMIO WINAPI fake_mmioOpenA(LPSTR a0, LPMMIOINFO a1, DWORD a2)
{

    static HMMIO (*funcp)(LPSTR a0, LPMMIOINFO a1, DWORD a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "mmioOpenA");
    return (*funcp)(a0, a1, a2);
}

HMMIO WINAPI fake_mmioOpenW(LPWSTR a0, LPMMIOINFO a1, DWORD a2)
{

    static HMMIO (*funcp)(LPWSTR a0, LPMMIOINFO a1, DWORD a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "mmioOpenW");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_mmioRenameA(LPCSTR a0, LPCSTR a1, LPCMMIOINFO a2, DWORD a3)
{

    static MMRESULT (*funcp)(LPCSTR a0, LPCSTR a1, LPCMMIOINFO a2, DWORD a3);
    funcp = (void*)GetProcAddress(realWinmmDll, "mmioRenameA");
    return (*funcp)(a0, a1, a2, a3);
}

MMRESULT WINAPI fake_mmioRenameW(LPCWSTR a0, LPCWSTR a1, LPCMMIOINFO a2, DWORD a3)
{

    static MMRESULT (*funcp)(LPCWSTR a0, LPCWSTR a1, LPCMMIOINFO a2, DWORD a3);
    funcp = (void*)GetProcAddress(realWinmmDll, "mmioRenameW");
    return (*funcp)(a0, a1, a2, a3);
}

MMRESULT WINAPI fake_mmioClose(HMMIO a0, UINT a1)
{

    static MMRESULT (*funcp)(HMMIO a0, UINT a1);
    funcp = (void*)GetProcAddress(realWinmmDll, "mmioClose");
    return (*funcp)(a0, a1);
}

LONG WINAPI fake_mmioRead(HMMIO a0, HPSTR a1, LONG a2)
{

    static LONG (*funcp)(HMMIO a0, HPSTR a1, LONG a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "mmioRead");
    return (*funcp)(a0, a1, a2);
}

LONG WINAPI fake_mmioWrite(HMMIO a0, LPCSTR a1, LONG a2)
{

    static LONG (*funcp)(HMMIO a0, LPCSTR a1, LONG a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "mmioWrite");
    return (*funcp)(a0, a1, a2);
}

LONG WINAPI fake_mmioSeek(HMMIO a0, LONG a1, int a2)
{

    static LONG (*funcp)(HMMIO a0, LONG a1, int a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "mmioSeek");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_mmioGetInfo(HMMIO a0, LPMMIOINFO a1, UINT a2)
{

    static MMRESULT (*funcp)(HMMIO a0, LPMMIOINFO a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "mmioGetInfo");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_mmioSetInfo(HMMIO a0, LPCMMIOINFO a1, UINT a2)
{

    static MMRESULT (*funcp)(HMMIO a0, LPCMMIOINFO a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "mmioSetInfo");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_mmioSetBuffer(HMMIO a0, LPSTR a1, LONG a2, UINT a3)
{

    static MMRESULT (*funcp)(HMMIO a0, LPSTR a1, LONG a2, UINT a3);
    funcp = (void*)GetProcAddress(realWinmmDll, "mmioSetBuffer");
    return (*funcp)(a0, a1, a2, a3);
}

MMRESULT WINAPI fake_mmioFlush(HMMIO a0, UINT a1)
{

    static MMRESULT (*funcp)(HMMIO a0, UINT a1);
    funcp = (void*)GetProcAddress(realWinmmDll, "mmioFlush");
    return (*funcp)(a0, a1);
}

MMRESULT WINAPI fake_mmioAdvance(HMMIO a0, LPMMIOINFO a1, UINT a2)
{

    static MMRESULT (*funcp)(HMMIO a0, LPMMIOINFO a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "mmioAdvance");
    return (*funcp)(a0, a1, a2);
}

LRESULT WINAPI fake_mmioSendMessage(HMMIO a0, UINT a1, LPARAM a2, LPARAM a3)
{

    static LRESULT (*funcp)(HMMIO a0, UINT a1, LPARAM a2, LPARAM a3);
    funcp = (void*)GetProcAddress(realWinmmDll, "mmioSendMessage");
    return (*funcp)(a0, a1, a2, a3);
}

MMRESULT WINAPI fake_mmioDescend(HMMIO a0, LPMMCKINFO a1, const MMCKINFO* a2, UINT a3)
{

    static MMRESULT (*funcp)(HMMIO a0, LPMMCKINFO a1, const MMCKINFO* a2, UINT a3);
    funcp = (void*)GetProcAddress(realWinmmDll, "mmioDescend");
    return (*funcp)(a0, a1, a2, a3);
}

MMRESULT WINAPI fake_mmioAscend(HMMIO a0, LPMMCKINFO a1, UINT a2)
{

    static MMRESULT (*funcp)(HMMIO a0, LPMMCKINFO a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "mmioAscend");
    return (*funcp)(a0, a1, a2);
}

MMRESULT WINAPI fake_mmioCreateChunk(HMMIO a0, LPMMCKINFO a1, UINT a2)
{

    static MMRESULT (*funcp)(HMMIO a0, LPMMCKINFO a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "mmioCreateChunk");
    return (*funcp)(a0, a1, a2);
}

MCIERROR WINAPI fake_mciSendCommandW(MCIDEVICEID a0, UINT a1, DWORD a2, DWORD a3)
{

    static MCIERROR (*funcp)(MCIDEVICEID a0, UINT a1, DWORD a2, DWORD a3);
    funcp = (void*)GetProcAddress(realWinmmDll, "mciSendCommandW");
    return (*funcp)(a0, a1, a2, a3);
}

MCIERROR WINAPI fake_mciSendStringW(LPCWSTR a0, LPWSTR a1, UINT a2, HWND a3)
{

    static MCIERROR (*funcp)(LPCWSTR a0, LPWSTR a1, UINT a2, HWND a3);
    funcp = (void*)GetProcAddress(realWinmmDll, "mciSendStringW");
    return (*funcp)(a0, a1, a2, a3);
}

MCIDEVICEID WINAPI fake_mciGetDeviceIDA(LPCSTR a0)
{

    static MCIDEVICEID (*funcp)(LPCSTR a0);
    funcp = (void*)GetProcAddress(realWinmmDll, "mciGetDeviceIDA");
    return (*funcp)(a0);
}

MCIDEVICEID WINAPI fake_mciGetDeviceIDW(LPCWSTR a0)
{

    static MCIDEVICEID (*funcp)(LPCWSTR a0);
    funcp = (void*)GetProcAddress(realWinmmDll, "mciGetDeviceIDW");
    return (*funcp)(a0);
}

MCIDEVICEID WINAPI fake_mciGetDeviceIDFromElementIDA(DWORD a0, LPCSTR a1)
{

    static MCIDEVICEID (*funcp)(DWORD a0, LPCSTR a1);
    funcp = (void*)GetProcAddress(realWinmmDll, "mciGetDeviceIDFromElementIDA");
    return (*funcp)(a0, a1);
}

MCIDEVICEID WINAPI fake_mciGetDeviceIDFromElementIDW(DWORD a0, LPCWSTR a1)
{

    static MCIDEVICEID (*funcp)(DWORD a0, LPCWSTR a1);
    funcp = (void*)GetProcAddress(realWinmmDll, "mciGetDeviceIDFromElementIDW");
    return (*funcp)(a0, a1);
}

BOOL WINAPI fake_mciGetErrorStringA(MCIERROR a0, LPSTR a1, UINT a2)
{

    static BOOL (*funcp)(MCIERROR a0, LPSTR a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "mciGetErrorStringA");
    return (*funcp)(a0, a1, a2);
}

BOOL WINAPI fake_mciGetErrorStringW(MCIERROR a0, LPWSTR a1, UINT a2)
{

    static BOOL (*funcp)(MCIERROR a0, LPWSTR a1, UINT a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "mciGetErrorStringW");
    return (*funcp)(a0, a1, a2);
}

BOOL WINAPI fake_mciSetYieldProc(MCIDEVICEID a0, YIELDPROC a1, DWORD a2)
{

    static BOOL (*funcp)(MCIDEVICEID a0, YIELDPROC a1, DWORD a2);
    funcp = (void*)GetProcAddress(realWinmmDll, "mciSetYieldProc");
    return (*funcp)(a0, a1, a2);
}

HTASK WINAPI fake_mciGetCreatorTask(MCIDEVICEID a0)
{

    static HTASK (*funcp)(MCIDEVICEID a0);
    funcp = (void*)GetProcAddress(realWinmmDll, "mciGetCreatorTask");
    return (*funcp)(a0);
}

YIELDPROC WINAPI fake_mciGetYieldProc(MCIDEVICEID a0, PDWORD a1)
{

    static YIELDPROC (*funcp)(MCIDEVICEID a0, PDWORD a1);
    funcp = (void*)GetProcAddress(realWinmmDll, "mciGetYieldProc");
    return (*funcp)(a0, a1);
}

BOOL WINAPI fake_mciExecute(LPCSTR a0)
{

    static BOOL (*funcp)(LPCSTR a0);
    funcp = (void*)GetProcAddress(realWinmmDll, "mciExecute");
    return (*funcp)(a0);
}

BOOL WINAPI fake_DriverCallback(DWORD a0, DWORD a1, HDRVR a2, DWORD a3, DWORD a4, DWORD a5, DWORD a6)
{

    static BOOL (*funcp)(DWORD a0, DWORD a1, HDRVR a2, DWORD a3, DWORD a4, DWORD a5, DWORD a6);
    funcp = (void*)GetProcAddress(realWinmmDll, "DriverCallback");
    return (*funcp)(a0, a1, a2, a3, a4, a5, a6);
}

BOOL WINAPI fake_NotifyCallbackData(DWORD a0, DWORD a1, DWORD a2, DWORD a3, DWORD a4)
{

    static BOOL (*funcp)(DWORD a0, DWORD a1, DWORD a2, DWORD a3, DWORD a4);
    funcp = (void*)GetProcAddress(realWinmmDll, "NotifyCallbackData");
    return (*funcp)(a0, a1, a2, a3, a4);
}

