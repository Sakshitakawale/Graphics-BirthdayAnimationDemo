cls
cl.exe /c /EHsc /I C:\freeglut\include WelcomeScreen.cpp Circle.cpp JamesBond.cpp Gun.cpp LetterY.cpp LetterA.cpp LetterS.cpp LetterH.cpp LetterP.cpp LetterB.cpp LetterI.cpp LetterR.cpp LetterT.cpp LetterD.cpp Bond_007.cpp Balloon.cpp Cake.cpp
rc.exe sound.rc
link.exe WelcomeScreen.obj Circle.obj JamesBond.obj Gun.obj LetterY.obj LetterA.obj LetterS.obj LetterH.obj LetterP.obj Balloon.obj LetterB.obj LetterI.obj LetterR.obj LetterT.obj LetterD.obj Bond_007.obj Cake.obj sound.res Winmm.lib /LIBPATH:C:\freeglut\lib\x64 freeglut.lib /SUBSYSTEM:CONSOLE
