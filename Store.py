#!/usr/bin/python
import sys
import os

sshCmd  = "salvucci@lxplus.cern.ch:"
InPath  = "/afs/cern.ch/user/s/salvucci/workarea/LFV_bis/"
PkgDir  = "LFVUtils/"
DestDir = ""

#Dirs = [ "", "Root", "util", "LFVUtils", "cmt" ]
Dirs = [ "Root", "util", "LFVUtils", "cmt", "share" ]

#storing in svn path
for fold in Dirs:

    fileType  = None
    InputDir  = InPath+PkgDir+fold+"/"
    OutputDir = fold+"/."
	
    if fold=="":
	fileType = "Changelog"
        InputDir  = InPath+PkgDir+"/"
        OutputDir = "."

    elif fold=="cmt":
        fileType = "Makefile.RootCore"

    elif fold=="LFVUtils":
        fileType = "*.h"

    elif fold=="share":
        fileType = "*.root"

    else:
        fileType = "*.cxx"
    
    command = "scp "+sshCmd+InputDir+fileType+" "+OutputDir
    
    print "Store:: copying files from folder ", fold
    os.system(command)
    #print command
    print ""

print "Store:: DONE!!"
