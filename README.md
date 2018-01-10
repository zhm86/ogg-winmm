# ogg-winmm CD Audio Emulator

This project (originally by Hifi) uses .ogg music files on the disk
to emulate CD tracks, replacing the need to have a CD in the drive
to play music in certain games. Good Old Games uses a modified version
for several of their games. 

It has gone unmaintained, so I (bangstk) took it upon myself to solve a couple issues,
namely making it work on Windows 10. Good Old Games has fixed their own version,
but it's not as useful without the source available, so I fixed it myself as well.

I (The Uploader) could not build it with MSYS, and I needed to fix a particular game
(Wipeout 2097), so I took the sources and made it build with MSVC 14.1 through VS 2017.

BUILDING:

Open winmmOgg.sln with Visual Studio 2015 or 2017.

Run Build -> Build Solution (or Ctrl-Shift-B).

You need to have the Windows 8.1 SDK and headers installed for the build to succeed.

SETUP:

You need the *x86* 2017 MSVC Runtime for this wrapper to run :
https://www.visualstudio.com/fr/downloads/

USAGE:

Copy "winmm.dll" into the same folder as the executable of the game you want 
to emulate CD music for.

In the same folder, make a "Music" subdirectory. Place the recorded music files
from the disk as track02.ogg, track03.ogg, and so on in this Music folder. Remember,
it starts with track02!

Now, instead of playing music from the CD, the game will play music from these
files instead.
