# ogg-winmm CD Audio Emulator

This project (originally by Hifi) uses .ogg music files on the disk
to emulate CD tracks, replacing the need ot have a CD in the drive
to play music in certain games. Good Old Games uses a modified version
for several of their games. 

It has gone unmaintained, so I took it upon myself to solve a couple issues,
namely making it work on Windows 10. Good Old Games has fixed their own version,
but it's not as useful without the source available, so I fixed it myself as well.

BUILDING:

By default the makefile looks in a "libs\include" subdirectory for 
"ogg" and "vorbis" dependencies.

Run "make" in the folder to build winmm.dll. Copy it into the same folder
as the executable of the game you want to emulate CD music for.

USAGE:

Copy "winmm.dll" into the same folder as the executable of the game you want 
to emulate CD music for.

In the same folder, make a "Music" subdirectory. Place the recorded music files
from the disk as track02.ogg, track03.ogg, and so on in this Music folder. Remember,
it starts with track02!

Now, instead of playing music from the CD, the game will play music from these
files instead.
